#include<stdio.h>

  int main (){
    int age;
    char numero[25];
    char nom[25];
    char prenom[25];
    char sexe[25];

    printf("donner votre nom:");
    scanf ("%s", &nom);

    printf("donner votre prenom:");
    scanf ("%s", &prenom);

    printf ("donner votre sexe:");
    scanf ("%s", &sexe);

    printf("donner votre age:");
    scanf ("%d", &age);

    printf("donner votre numero:");
    scanf ("%s", &numero);

    printf ("votre information est %s%s%d%s%s", nom,prenom,age,sexe,numero);



}
