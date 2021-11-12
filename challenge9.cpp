#include<stdio.h>
#include<math.h>

int main ()
{ float x1,x2,y1,y2,MN;

printf("donner le coordonnes M x1 : ");
scanf ("%f", &x1);

printf("donner le coordonnes M y2 : ");
scanf ("%f", &y1);

printf("donner le coordonnes N x2 : ");
scanf ("%f", &x2); 

printf("donner le coordonnes N y2 : ");
scanf ("%f", &y2);

MN=sqrt((pow(x2-x1,2)) + (pow(y2-y1,2))) ;

printf("la distance entre M et N est :%f ",MN);


 
	
}
