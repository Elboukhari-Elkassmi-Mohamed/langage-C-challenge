#include<stdio.h>
#include<math.h>

int main (){
	
	int a,b,c,x,D,D1;
	
	printf ("donner a : ");
	scanf ("%d", &a);

    printf ("donner b : ");
	scanf ("%d", &b);
	
	printf ("donner c : ");
	scanf ("%d", &c);
	
	D=(pow(b,2))-(4*a*c);
	
	if (D==0)	
    {
	
	 	D=-b/2*a ;
	
	printf("la solution est : %d",D) ;
	
	}
	else if(D>0)
	{
	D=(-b)+sqrt (D)/2*a;
	D1=-b-sqrt (D)/2*a;
	printf("équation admet au maximum deux solutions: %d est %d ",D,D1);
	
	}
	 else 
	 printf("Aocune solution: ");


}


