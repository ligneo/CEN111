//increasment and decrement operator


#include<stdio.h>

int main (void)
{
	int a=0, b=0, c=0;

	a = ++b + ++c;
	a = b++ + c++;
	a = ++b + c++;
	a = b-- + --c;
	/*
  you can test this with diffirent comment line combinations
  but in the end :
  
  prefix we see (++x)
  sufix we don't see but somethings happen (x++)
  
  
  the line reading like that ===> ++ ===> 'x'
  
  
  */
	printf("%d", a);
	
	return 0;
}
