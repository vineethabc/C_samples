#include<stdio.h>
#include <stdlib.h>

void strtokk(char*);

char *strr;

int main()
{
	strr  = (char *)malloc(100);
	strr = "Manju WORKS IN span idea";
	strtokk(strr);
	


    return 0;
}


void strtokk(char *ptr)
{
	int i=0;
	//char *ptr = str;
	char arr[30];
while(ptr[i]!='\0')
{

	if( (ptr[i] != '\0')||(ptr[i] != ' ')  )
	{
		arr[i] = ptr[i];
		i++;
		
	}
		else
		{
		i++;
		}
}
	arr[i] = '\0';
	printf("%s",arr);

	
}

