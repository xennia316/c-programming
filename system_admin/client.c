#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define PORT 8080
#define MAX_MESSAGE_LENGTH 256

// Function prototypes
void error(const char *msg);

int main(int argc, char *argv[])
{
    int sockfd;
    struct sockaddr_in serv_addr;
    char buffer[MAX_MESSAGE_LENGTH];
    int n;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0)

        error("ERROR opening socket");

    memset(buffer, 0, MAX_MESSAGE_LENGTH);
    fgets(buffer, MAX_MESSAGE_LENGTH - 1, stdin);
    n = write(sockfd, buffer, strlen(buffer));
    if (n < 0)
        error("ERROR writing to socket");

    memset(buffer, 0, MAX_MESSAGE_LENGTH);
    n = read(sockfd, buffer, MAX_MESSAGE_LENGTH - 1);
    if (n < 0)
        error("ERROR reading from socket");

    printf("Message from server: %s", buffer);

    close(sockfd);
    return 0;
}

// Print an error message and exit
void error(const char *msg)
{
    perror(msg);
    exit(1);
}
