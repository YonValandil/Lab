#include <stdio.h>
#include <stdlib.h>

int main(void){

	short i = 260;

	printf("i = %hd\n", i);
	printf("(char)i = %hd\n",(char)i);
	i = (short)((char)i);
	printf("%hd\n", i);

	return (0);

}
