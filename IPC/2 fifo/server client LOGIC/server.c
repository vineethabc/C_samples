#include<stdio.h>
#include <fcntl.h>
#include <stdlib.h>


#define INGOING "clientToServer.fifo"

#define BUFFER 200

int main(int argc, char *argv[]) {

    char in[BUFFER];

    mkfifo(INGOING, 0666);

    printf("Welcome to server.\n");
    printf("channel for sending messages to server is %s\n", INGOING);

    int in_fd=open(INGOING, O_RDONLY);

    if (in_fd==-1) {
        perror("open error");
        exit(-1);
    }
read(in_fd, in, BUFFER);
    //while (read(in_fd, in, BUFFER)>0) {
        printf("You sent %s to server.\n", in);
    //}

    return 2;
}
