#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>

#define INGOING "FIFO.fifo"
#define BUFFER 200

int main(int argc, char *argv[]) 
{

    	char in[BUFFER];
    	int fd;

	fd=open(INGOING, O_RDONLY);		// opening file in read only mode
    	if (fd==-1) 
	{
        	perror("open error");		
        	exit(-1);
    	}
						
    	while (read(fd, in, BUFFER)>0) 		/***** READ COMMENT *******/		
	{
        	printf("You sent %s to server.\n", in);
    	}

    	return 0;
}
/*
	since READ() is waiting for any other process to write into fifo 
	while does not execute 1000+ time in a second 
		rather
	it waits until write operation function happen on fifo	
				
*/
