#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int clientSocket; /* Socket Decriptor for Client */
    struct sockaddr_in server_addr;
    struct hostent *ptrh;

    char message[100];
    char received[100];
    int n = 0;

    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    memset((char *)&server_addr, 0, sizeof(server_addr));

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(10000);

    /*  bind(clientSocket, (struct sockaddr*)&server_addr, sizeof(struct sockaddr)); */

    ptrh = gethostbyname("192.168.8.104");
    memcpy(&server_addr.sin_addr, ptrh->h_addr, ptrh->h_length);
    printf("Gotten host name\n");

    if (-1 == (connect(clientSocket, (struct sockaddr *)&server_addr, sizeof(server_addr))))
    {
        printf("\nServer Not Ready !!\n");
        exit(1);
    }

    printf("Connection maybe\n");

    while (1)
    {
        printf("\nUser:-");
        // memset(message, '\0', 10);

        gets(message);

        n = write(clientSocket, message, strlen(message) + 1);
        if ((strcmp(message, "q") == 0) || (strcmp(message, "Q") == 0))
        {
            printf("Wrong place...Socket Closed\n");
            close(clientSocket);
            break;
        }

        // printf("Write:<%u>\n", n);

        read(clientSocket, received, sizeof(received));
        if ((strcmp(received, "q") == 0) || (strcmp(received, "Q") == 0))
        {
            printf("Wrong place...Socket Closed\n");
            close(clientSocket);
            break;
        }
        else
            printf("Server:- %s\n", received);
    }

    return 0;
}