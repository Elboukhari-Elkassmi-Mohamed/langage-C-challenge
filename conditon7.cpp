#include<stdio.h>


int main ()
{
	int number;
	
	printf("donner la nombre : ");
	scanf ("%d", &number);
	
	if (number>0)
	printf ("le nombre qui tu entrer est n�gatif");
	
	else if (number<0)
	printf ("le nombre qui tu entrer est positif");
	
	else ("le nombre est null");
}
