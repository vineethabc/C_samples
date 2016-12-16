#include<stdio.h>
static void statFunc(void);


void n(void(*f)())
{
	f ();
}
static void statFunc()
{
	printf("statFunc()\n");
}

int main()
{	
	printf("main()\n");
	n(statFunc);
	return 0;
}





