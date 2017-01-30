#include <stdio.h>
#include<stdlib.h>
struct i2c_msg{

              unsigned int addr;
	      unsigned int flags;
#define I2C_M_READ 0x0001
	      unsigned int len;
	      unsigned int *buf;


};

void main(){

 struct i2c_msg p;
 printf("\nsize of(struct i2c_msg=%ld)\n",sizeof( p));
 printf("unsigned int= %ld\n",sizeof(unsigned int));
 printf("pointer=%ld\n",sizeof(p.buf));
}
