#include<stdio.h>


int main(void){
    int x = 5, y = 5;
	printf("%d\t", ++x ); // ++x  -> x = x+1 önce işlemi yap ondan sorna x değerini arttır
	printf("%d", x);


	printf("\n%d\t", y++); // y++ önce y değerini kullan sonra arttır 
	printf("%d", y);
	
	return 0;
	
}
