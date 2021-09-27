#include <stdio.h>

int main() {
    /*  // Exo 1
    int entier1 = 0; //Choisi le plus grand des deux
    int entier2 = 0;

    printf("Saisir l'entier 1 :", entier1 );
    scanf("%d", &entier1);

    printf("Saisir l'entier 2 :", entier2 );
    scanf("%d", &entier2 );

    if (entier1 < entier2)
    {
        printf("Le plus grand est : %d", entier2 );
    }
        else
        {
            printf("Le plus grand est : %d", entier1);
    }}
     */

//Calcule le perimetre et l'aire d'un rectangle choisi
/*
    int largeur = 0;
    int longueur = 0;

    printf( "Saississez la largeur : ", largeur );
    scanf("%d", &largeur);

    printf( " Saississez la longueur : ", longueur);
    scanf("%d", &longueur );

    printf("Le perimetre du rectangle est %d et l'aire est %d", longueur * 2 + largeur * 2, longueur * largeur );
    return 0;
}}
 */

// dire si un entier est un multiple de 3 et superieur ou egal a 10
/*
    int entier = 0;
    int troistestmultiple = 3;

    printf("Saisir entier a tester : ", entier );
    scanf("%d", &entier );

    if (entier % troistestmultiple != 0){
        printf("%d n'est pas un multiple de 3", entier );
    }
        else{
            printf("%d est un multiple de 3", entier );
        }
    if (entier >= 10 ){
        printf(" et est superieur ou egal a 10 ");
    }
    return 0;
    }
    */



// ex 4 prix adapté à l'âge
/*
    int ageclient = 0;
    int etudiant = 0;
    int prix = 0;

    printf ("Donner age :", ageclient );

    scanf ( "%d", &ageclient);

    if ( ageclient <= 12 ){
        printf("\nLe prix est de 4 euros");
    }
    else if ( ageclient <= 17 || ageclient >= 65 ) {
        printf("\nLe prix est de 6 euros");
    }
    else if ( ageclient <= 27) { //si le client a plus de 17 ans et moins de 27 on test son statut etudiant
        printf("Saisir 1 si etudiant ou 0 sinon", etudiant);
        scanf ( "%d", &etudiant);

            if ( etudiant == 1 ){
                printf("Le prix est de 6 euros");
            }
            else{
                printf("Le prix est de 9 euros");
            }}
        else{
                printf("Vous payez le plein tarif a 9 euro");
            }
            }

            */




 // exo 5 choix de boisson
/*
    int boisson = 0;

    printf("Saisir le numero de boisson :", boisson );
    scanf("%d", &boisson );

    switch ( boisson) {
        case 1 :{
            printf ("Vous avez choisi de la limonade");
            break;
            }
        case 2 :
            {
            printf("Vous avez choisi de la biere");
            break;
            }
        case 3 :
            {
            printf("Vous avez choisi une boisson energisante");
            break;
            }
        case 10 :
            {
            printf("Vous avez choisi un cafe");
            break;
            }
        case 11 :
            {
            printf("Vous avez choisi un the");
            break;
            }
        default :{
            printf("Vous n'avez pas rempli un numero de boisson correct");
        }
    }
    }
    */


// exo 6 moyenne qui redemande la note si elle n'est pas conforme
/*
 float note1 = 0.0f;
 float note2 = 0.0f;
 float note3 = 0.0f;


 printf( "Saisir la premiere note :", note1 );
 scanf( "%f", &note1 );

 while (note1 < 0 || note1 > 20){
     printf( "La note n'est pas conforme, a saisir de nouveau :", note1 );
     scanf( "%f", &note1 );
 }


 printf( "Saisir la seconde note :", note2 );
 scanf( "%f", &note2 );

 while (note2 < 0 || note2 > 20 ){
     printf( "La note n'est pas conforme, a saisir de nouveau :", note2 );
     scanf( "%f", &note2 );
 }

 printf( "Saisir la troisieme note :", note3 );
 scanf( "%f", &note3 );

 while (note3 < 0 || note3 > 20 ){
     printf( "La note n'est pas conforme, a saisir de nouveau :", note3 );
     scanf( "%f", &note3 );
 }
 return (note1 + note2 + note3)/3;
 }
*/



// exo 7 comptage eleve primaire
/*
    int nombreDeClasse = 0;
    int nombreElevesParClasse = 0;
    int nombreElevetotal = 0;

    printf( "Saisir le nombre de classe", nombreDeClasse );
    scanf("%d", &nombreDeClasse );

    for (int i = 0; i < nombreDeClasse ; ++i) {
        printf("Saisir le nombre d'eleve dans la classe %d :", i, nombreElevesParClasse );
        scanf("%d", &nombreElevesParClasse );
        nombreElevetotal = nombreElevetotal + nombreElevesParClasse;

     printf( "Le nombre d'eleves dans l'ecole est : %d ", nombreElevetotal );

    }
    }
    */

// Exo 8
/*
    int entier = 0;

    printf( "Saisir un entier :", entier );
    scanf("%d", &entier );

    while ( !(entier % 7 == 0 && entier % 2 == 0 )){
        printf("Entier non multiple de 2 ou 7 merci de le resaisir :", entier );
        scanf("%d", &entier);
        }
        */


//Exo 9 les pyramides
/*
    int nombrePierre = 0;
    int nombreEtage = 0;
    int i = 1;

    printf( "Saisir le nombre de pierres disponibles : ", nombrePierre);
    scanf ("%d", &nombrePierre );

    while ( nombrePierre > 0 ){
        nombrePierre = nombrePierre - i * i;
        nombreEtage += 1;
        i += 1;
    }
    printf("Le nombre d'etage est : %d", nombreEtage);
    }
    */

//Exo 10
/*
    int somme = 0;
    int compteur = 0;
    int nombre = 0;

    printf("Saisir un nombre :", nombre );
    scanf("%d", &nombre );

    if ( nombre < 0 ) {
        printf("Pas de somme possible");
    }
    else
    {
    while (nombre >= 0){
        somme = somme + nombre;
        compteur +=1;

        printf("Saisir un nouveau nombre :", nombre );
        scanf("%d", &nombre );
    }
    printf("La moyenne des nombres est : %d",  somme/compteur );

    }
}
*/
















