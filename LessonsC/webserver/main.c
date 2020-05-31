#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/socket.h> //библиотека для работы с сокетами
#include <unistd.h>
#include <netdb.h>

#define SERVER_PORT "8080"

int create_socket(const char*);

int main()
{

    return 0;
}

int create_socket(const char* apstrPort)
{
    struct addrinfo hints;
    struct addrinfo *servinfo;
    struct addrinfo *p;
    memset(&hints, 0, sizeof(hints));
//неважно, какой версии будет IP
    hints.ai_family = AF_UNSPEC;
//тип сокета
    hints.ai_socktype = SOCK_STREAM;
//IP выделяется автоматически
    hints.ai_flags = AI_PASSIVE;
    int r = getaddrinfo(NULL, apstrPort, &hints, &servinfo);
    if (r != 0)
        {
            fprintf(stderr, "Error in getaddrinfo()\n");
            return -1;
        }
    int sock, yes;
//перебираем адреса
    for(p = servinfo; p != NULL; p = p->ai_next)
        {
            sock = socket(p->ai_family, p->ai_socktype, p->ai_protocol);
            if(sock == -1)
                continue;
            if(setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int)) == -1) {
            fprintf(stderr, "Error in setsockopt()\n");
            close(sock);
            freeaddrinfo(servinfo);
            return -2;
            }


        }


    return 0;

}
