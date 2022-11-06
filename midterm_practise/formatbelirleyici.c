#include<stdio.h>
void main ()
{
	int a;
	printf("Hello%n", &a); 
	/*now 'a' will be assigned with number of 
	characters in message ( *hello* )*/
	printf("%d", a);
	

}

/*

output 
hello5
*/
