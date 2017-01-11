#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>


#define INGOING "FIFO.fifo"


int main(int argc, char *argv[]) 
{

    	int id;
    	if(id = mkfifo(INGOING, 0666) == 0) 
		perror("creating fifo");
    

    	return 0;
}
