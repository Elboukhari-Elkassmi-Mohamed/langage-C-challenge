#include<stdio.h>

int main (){
	
char lettre;

printf ("enter votre lettre :");
scanf ("%c", &lettre);


if  (lettre >=65 && lettre <=90) {
	
	printf("votre lettre est majuscule  ",lettre);
	
	}
	else if (lettre <65 && lettre >90)
	printf ("votre lettre est   minuscule  ",lettre);
 
    else printf ("Aucun Result"); 
 }




