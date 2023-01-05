#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define PORT 8088
#define MAX_MESSAGE_LENGTH 256

// Function prototypes
void error(const char *msg);

int main(int argc, char *argv[])
{
    int sockfd, newsockfd, clilen;
    char buffer[MAX_MESSAGE_LENGTH];
    struct sockaddr_in serv_addr, cli_addr;
    int n;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0)
        error("ERROR opening socket");

    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(PORT);

    if (bind(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
        error("ERROR on binding");
    listen(sockfd, 5);
    clilen = sizeof(cli_addr);

    printf("Waiting for clients to connect...\n");
    while (1)
    {
        newsockfd = accept(sockfd, (struct sockaddr *)&cli_addr, &clilen);
        if (newsockfd < 0)
            error("ERROR on accept");

        printf("New client connected on socket %d\n", newsockfd);

        while (1)
        {
            memset(buffer, 0, MAX_MESSAGE_LENGTH);
            n = read(newsockfd, buffer, MAX_MESSAGE_LENGTH - 1);
            if (n < 0)
                error("ERROR reading from socket");

            printf("Message from client: %s", buffer);
            n = write(newsockfd, "ACK", 3);
            if (n < 0)
                error("ERROR writing to socket");
        }
    }

    close(sockfd);
    return 0;
}

// Print an error message and exit
void error(const char *msg)
{
    perror(msg);
    exit(1);
}