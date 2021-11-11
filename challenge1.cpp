#include<stdio.h>
#include<math.h>

  int main (){
    int age;
    char numero[25];
    char nom[25];
    char prenom[25];
    char sex[25];

    printf("donner votre nom:");
    scanf ("%s", &nom);

    printf("donner votre prenom:");
    scanf ("%s", &prenom);

    printf ("donner votre sex:");
    scanf ("%s", &sex);

    printf("donner votre age:");
    scanf ("%d", &age);

    printf("donner votre numero:");
    scanf ("%s", &numero);

    printf ("votre information est %s%s%s%d%s%d", nom,prenom,sex,age,numero);



}
