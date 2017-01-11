#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<unistd.h>
#include<sys/msg.h>

#define MAX_LENGTH 512
#define KEYY (key_t)10

struct messages
{
	long int mes_type;
	char msg_txt[MAX_LENGTH];
}msg_struct;

int main()
{
	int qid;
	
	if( (qid = msgget( KEYY,IPC_CREAT|0666)) == -1 )
	{
		perror("Error: Creating message queue");
		exit(EXIT_FAILURE);
	}

	return 0;
	
}
