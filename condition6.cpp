#include<stdio.h>


int main ()
{
int anne,moine,jour,heure,choix;

double minute,seconds;

  printf("Enter anne: ");
  scanf("%d",&anne);


printf("Convertr  anne into,\n");
  printf("1. moine\n");
  printf("2. jour\n");
  printf("3. heure\n");
  printf("4. Minutes\n");
  printf("5. Seconds\n");
  
  printf("Enter votre choix : ");
  scanf("%d", &choix);
  
  switch(choix)
  {
  	
  	case 1:
  		moine=anne*12; 
  		printf("le nombre de %d anne égal %d ",anne,moine);break;
  	case 2:
  		jour=anne*365;
  		printf("le nombre de %d anne égal %d ",anne,jour);break;
  		
  	case 3:
  		heure=anne*365*24;
  		printf("le nombre de %d anne égal %d ",anne,heure);break;

  	case 4:
  		minute=anne*365*24*60;
   		printf("le nombre de %d anne égal %lf ",anne,minute);break;

  		
  	case 5:
  		seconds=anne*365*24*60*60;
  		printf("le nombre de %d anne égal %lf ",anne,seconds);break;
  		
  		
  		default: 
  		printf ("invalide choix");
  		
  }

 return(0);
	
}

