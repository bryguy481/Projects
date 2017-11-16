/*
 * This will become a server that can handle multiple
 * connects at once. It will accept a connection,
 * print out how it connected and the connection info.
 * It will then wait 3 seconds and send a "Hello" back
 * if possible.
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(int argc, char ** argc){


    
    //The socket file descriptor and server/client address
    int sock_fd;
    struct sockaddr_in serv_addr,cli_addr;

    /* Create a socket FD that is only for local communincation (AF_UNIX)
     * and only understand DataGrams (SOCK_DGRAM). 0 refers to the protocol
     * family allowed. Since we will only be sending UDP traffic from UDPClient.c
     * 0 will recognize that and be UDP.
     */
    sock_fd = socket(AF_UNIX,SOCK_DGRAM,0);
    if(sock_fd < 0){
        perror("Error getting socket file descriptor");
        return errno;
    }


    return 0;
}
