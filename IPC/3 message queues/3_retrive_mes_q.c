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
	int qid,i;
	char buf[MAX_LENGTH];
	
	if(qid = msgget(KEYY,IPC_CREAT|0666) == -1 )
	{
		perror("Error: Creating message queue");
		exit(EXIT_FAILURE);
	}

	for(i = 0 ; i<5; i++)
	{	

		if(msgrcv(qid,&msg_struct,sizeof(msg_struct),0,IPC_NOWAIT) == -1 )
		{
			perror("Error: Sending mess queue");
			exit(EXIT_FAILURE);
		}
		
		printf("%d: %s \n",i,msg_struct.msg_txt);
	}
	
	return 0;
	
}
