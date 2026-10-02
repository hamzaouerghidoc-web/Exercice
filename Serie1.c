#include <stdio.h>
int main(){
    printf("Bonjour, je code en C !\n");
    return 0;
}




#include <stdio.h>
int main(){
    int valeur1 = 15;
    char valeur2 = 'f';
    float valeur3 = 12.0;
    double valeur4 = 14;
    printf("%d, %f, %lf, %c\n", valeur1, valeur3, valeur4, valeur2);
    printf("%ld\n", sizeof(valeur1));
    printf("%ld\n", sizeof(valeur2));
    printf("%ld\n", sizeof(valeur3));
    printf("%ld\n", sizeof(valeur4));
    return 0;
}



#include <stdio.h>
int main(){
    char prenom[50];
    scanf("%49s", prenom);
    int age;
    scanf("%d", &age);
    printf("Bonjour %s tu as %d ans\n", prenom, age);
    return 0;
}



#include <stdio.h>
int main(){
    float valeur1;
    scanf("%f", &valeur1);
    float valeur2;
    scanf("%f", &valeur2);
    float addition = valeur1 + valeur2;
    float soustraction = valeur1 - valeur2;
    float produit = valeur1*valeur2;
    float division = valeur1 / valeur2;
    int reste = (int)valeur1 % (int)valeur2;
    printf("%f, %f, %f, %f, %d\n", addition, soustraction, produit, division, reste);
    return 0;
}



#include <stdio.h>
int main(){
    int a = 7;
    int b = 2;
    printf("%d\n", a/b);
    
    printf("%lf\n", (double)a/(double)b);
    return 0;
}



#include <stdio.h>
int main(){
    int note;
    scanf("%d", &note);
    if (note >= 10 && note <= 20){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}



#include <stdio.h>
//#define TVA 0.2
int main(){
    const double TVA = 0.2; 
    float prix_HT;
    scanf("%f", &prix_HT);
    printf("Prix TTC : %f", prix_HT*TVA + prix_HT);
    return 0;
}




#include <stdio.h>
int main(){
    printf("quel est le sens de convertion souhaité ?\n");
    printf("1- C vers F\n");
    printf("2- F vers C\n");
    int choix;
    scanf("%d\n", &choix);
    
    if(choix == 1){
        printf("entrez la valeur : \n");
        float valeur1;
        scanf("%f", &valeur1);
        float correction = (float)9/(float)5;
        printf("%2.f F\n", (valeur1*(correction) + 32));
    }
    else if(choix == 2){
        printf("entrez la valeur : \n");
        float valeur2;
        scanf("%f", &valeur2);
        printf("%2.f C\n", (((valeur2 - 32)*5)/(float)9));
    }
    else if(choix != 1 && choix != 2){
        printf("Erreur de choix");
    }
    return 0;
}