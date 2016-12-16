#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>

#define INGOING "FIFO.fifo"
#define BUFFER 200


/*
	NEED TO RUN read()/write() FUNCTION @ THE SAME TIME
*/

int main(int argc, char *argv[]) 
{

    	char input[BUFFER]={0};
    	int fd=open(INGOING, O_WRONLY);

    	if (fd==-1) 
	{
	        perror("open error");
    	}

    	while (1) 
	{

        	printf("What would you like to send to server? (send Quit to quit)\n");
        	fgets(input, BUFFER, stdin);
		// BE CAREFULL SINCE WE ARE USING Fgets()
		// reading input from user
        	if (input[strlen(input)-1]=='\n') 
		{
            		input[strlen(input)-1]='\0';
        	}
		// Checking wheather user want to stop sending info
        	if (strcmp(input, "Quit")==0) 
		{
            		printf("Bye!");
            		break;
        	}
		// writing to FIFO
        	if (write(fd, input, strlen(input))==-1) 
            		perror("write error");
    	}

    	return 0;
}

