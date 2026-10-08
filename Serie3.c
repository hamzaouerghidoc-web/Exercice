#include <stdio.h>
int carre (int n);
int main() {
    int valeur;
    scanf("%d", &valeur);
    printf("%d", carre(valeur));
    return 0;
}
int carre (int n){
    return n*n;
}

#include <stdio.h>
int max(int a, int b);
int main(){
    int valeur1;
    int valeur2;
    int valeur3;
    scanf("%d", &valeur1);
    scanf("%d", &valeur2);
    scanf("%d", &valeur3);
    printf("%d", max(max(valeur1, valeur2), valeur3));
    return 0;
}
int max(int a, int b){
    if(a>=b){
        return a;
    }
    else if(b>a){
        return b;
    }
}


#include <stdio.h>
void afficher_ligne(char c, int longueur);
int main(){
    int longueur;
    scanf("%d", &longueur);
    char c = '*';
    for(int k = 0; k < 5; k++){
        afficher_ligne(c, longueur);
    }
    
    return 0;
}
void afficher_ligne(char c, int longueur){
    for(int i = 0; i < longueur - 1; i++){
        printf("%c", c);
    }
    printf("%c\n", c);
}



#include <stdio.h>
int compteur_appels = 0;
void saluer(void){
    compteur_appels++;
    printf("Bonjour (appel n°%d)\n", compteur_appels);
}
int main(){
    for(int i = 0; i < 3; i++){
        saluer();
    }
    return 0;
}




#include <stdio.h>
void tenter_incrementer(int x);
void incrementer(int *x);
int main(){
    int x = 0;
    tenter_incrementer(x);
    printf("%d\n", x);
    incrementer(&x);
    printf("%d\n", x);
    return 0;
}
void tenter_incrementer(int x){
    x++;
}
void incrementer(int *x){
    (*x)++;
}




#include <stdio.h>
int est_premier(int n);
int pgcd(int a, int b);
int min(int a, int b);
int main(){
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int n;
    scanf("%d", &n);
    printf("Le PGCD est %d\n", pgcd(a, b));
    printf("Nombre premier ? : %d\n", est_premier(n));
    return 0;
}
int est_premier(int n){
    for(int i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}
int pgcd(int a, int b){
    int g;
    for(int i = 1; i <= min(a, b); i++){
        if(a % i == 0 && b % i == 0){
            g = i;
        }
    }
    return g;
}
int min(int a, int b){
    if (a <= b){
        return a;
    }
    else if (b < a){
        return b;
    }
}




#include <stdio.h>
int long_factorielle(int n){
    if(n == 1){
        return 1;
    }
    return n*long_factorielle(n-1);
}
int main(){
    int n; 
    scanf("%d", &n);
    printf("%d\n", long_factorielle(n));
    return 0;
}



#include <stdio.h>
int addition(int a, int b);
int soustraction(int a, int b);
int multiplication(int a, int b);
int division_safe(int a, int b, int *erreur);
int main(){
    printf("1 : Addition\n2 : Soustraction\n3 : Multiplication\n4 : Division\n\n");
    int valeur;
    scanf("%d", &valeur);
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int erreur = 1;
    switch (valeur){
        case 1 :
            printf("%d\n", addition(a, b));
            break;
        case 2 :
            printf("%d\n", soustraction(a, b));
            break;
        case 3 :
            printf("%d\n", multiplication(a, b));
            break;
        case 4 :
            int val = division_safe(a, b, &erreur);
            if ( erreur == 0){
                printf("erreur\n");
            }
            else{
                printf("%d\n", val );
            }
            
            break;
        default :
            printf("Erreur\n");
            break;
    }
    return 0;
}
int addition(int a, int b){
    return a+b;
}
int soustraction(int a, int b){
    return a-b;
}
int multiplication(int a, int b){
    return a*b;
}
int division_safe(int a, int b, int *erreur){
    if(b == 0){
        *erreur = 0;
        return 0;
    }
    else{
        return (float)a/(float)b; 
    } 
}