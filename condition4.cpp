#include<stdio.h>


int main (){
	int a,b,s;
	
	printf("donner nbr a : ");
	scanf ("%d", &a);
	
	printf("donner nbr b : ");
	scanf ("%d", &b);
	
	
	if (a==b)
	{
     s=a+b;
	 s=s*3;
	 printf("la somme est %d ",s);
	}
	else 
	printf("la somme est %d",a+b);	
}
