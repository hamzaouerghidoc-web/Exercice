#include <stdio.h>
int main(){
    int valeur;
    scanf("%d", &valeur);
    int parite = valeur % 2;
    if (parite == 0){
        printf("pair");
    }
    else{
        printf("impair");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int valeur;
    scanf("%d", &valeur);
    if ( valeur < 12){
        printf("enfant");
    }
    else if (valeur < 18){
        printf("adolescent");
    }
    else if (valeur < 65){
        printf("adulte");
    }
    else if (valeur > 64 ){
        printf("senior");
    }
    return 0;
}


#include <stdio.h>
int main(){
    printf("1 : Addition\n2 : Soustraction\n3 : Multiplication\n4 : Division\n\n");
    int valeur;
    scanf("%d", &valeur);
    int val1;
    scanf("%d", &val1);
    int val2;
    scanf("%d", &val2);
    switch (valeur){
        case 1 :
            printf("Résultat = %d\n", val1 + val2);
            break;
        case 2 :
            printf("Résultat = %d\n", val1 - val2);
            break;
        case 3 :
            printf("Résultat = %d\n", val1 * val2);
            break;
        case 4 :
            if (val2 != 0){
            printf("Résultat = %f\n", (float)val1 / (float)val2);
            }
            else{
            printf("Erreur\n");
            }
            break;
        default :
            printf("Erreur\n");
            break;
    }
    return 0;
}



#include <stdio.h>
int main(){
    int valeur;
    scanf("%d", &valeur);
    for (int i = 0; i < 11; i++ ){
        printf("%d x %d = %d\n", valeur, i, valeur*i);
    }
    return 0;
}



#include <stdio.h>
int main(){
    int i = 0;
    int somme = 0;
    int compteur = 0;
    while(i != -1){
        scanf("%d", &i);
        somme = somme + i;
        compteur++;
    }
        
    
    if (compteur == 0){
        printf("Erreur");
    }
    else{
        printf("%f", (float)(somme + 1)/(float)(compteur - 1));  
    }
    return 0;
}




#include <stdio.h>
int main(){
    int valeur;
    do {
        printf("saisir un entier entre 1 et 5 :\n");
        scanf("%d", &valeur);   
    }while (valeur < 1 || valeur > 5);
}




#include <stdio.h>
int main(){
    for(int i = 2; i < 51; i++){
        int compteur = 0;
        for(int n = i - 1; n != 1; n--){
            if (i % n == 0){
                compteur ++;
                continue;
            }  
        }
        if (compteur == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}




#include <stdio.h>
int main(){
    int numero = 42;
    int i = numero - 1;
    int compteur = 0;
    while(i != numero){
        compteur++;
        scanf("%d", &i);
        if(i > numero){
            printf("trop grand, recommencez !\n");
        }
        else if(i < numero){
            printf("trop petit, recommencez !\n");
        }
        else if(i == numero){
            printf("gagné !\n");
        }
        if(compteur == 5){
            printf("stop\n");
            break;
        }
    }
    return 0;
}