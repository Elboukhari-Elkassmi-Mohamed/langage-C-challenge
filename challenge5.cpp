#include<stdio.h>


int main (){
	float C,F;
	
	printf("donner la temperateur  Fahrenheit: ");
	scanf("%f", &F);
	
	C = (F-32)/1.8 ;
	
	if (C>0 && C<20 )
	{
		printf("%f très froid",C);
	}
	
	else if (C>=20 && C<40)
	{
		printf("%f froid",C);
	}
		
	else if (C>=40 && C<60)
	{
	printf("%f chaud",C);
	}
		
	else
	{
	printf(" %f tres chaud",C);
	}
	

	
	
	
}
