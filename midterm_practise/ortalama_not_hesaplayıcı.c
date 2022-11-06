#include <stdio.h>

int main(void)

{

	float VizeNot;
	float FinalNot;
	float DevamNot;

	float ortalama = 0;


	printf("Please enter your midterm note: \n");
	scanf("%f", &VizeNot);
	
	printf("Please enter your Final note: \n");
	scanf("%f", &FinalNot);
	
	printf("Please enter your makeup note: \n");
	scanf("%f", &DevamNot);
	
	
	ortalama  = ((VizeNot/100*40) + (FinalNot/100*50) + (DevamNot/100*10));
	
	if(ortalama>=50){
	    printf("\n \n You passed from your exam \n\n");
	}
	else if(ortalama >= 30 && ortalama<50){
	    printf("\n\n You pass from your exam meh meh \n\n");}
	else{
	    printf("You failed from your class");
	}
	
    printf("ortalama : %f" , ortalama);
	



}

