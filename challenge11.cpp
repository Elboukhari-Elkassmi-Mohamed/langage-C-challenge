#include<stdio.h>
#include<math.h>

int main (){
	
	float circonference,longueur,largeur;
	
	printf("donner la longueur : ");
	scanf ("%f", &longueur);
	
	printf("donner la largeur");
	scanf ("%f", &largeur);
	
	circonference = 2*(longueur + largeur);
	
	printf("la circonference de treangle est:%f ",circonference);
	
}
