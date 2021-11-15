#include<stdio.h>


int main (){
	char lettre;
	
	printf("donner une lettre : ");
	scanf("%c", &lettre);
	
	switch (lettre)
	{
		
	case'o':
		printf ("la lettre %c est voyelle :",lettre);
		 break;
		
	case'e':
		printf ("la lettre %c est voyelle :",lettre); 
		break;
		
	case'u':
		printf ("la lettre %c est voyelle :",lettre); 
		break;
	case'i':
		printf ("la lettre %c est voyelle :",lettre); 
		break;
	case'y':
		printf ("la lettre %c est voyelle :",lettre); 
		break;
	case'a':
		printf ("la lettre %c est voyelle :",lettre); 
		break;
		
	default:
		printf ("la lettre %c est pas voyelle :",lettre); 
		
	}
}
