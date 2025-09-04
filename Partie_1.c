#include <stdio.h>

int main() {
    int taille;

    printf("Saisir la taille du tableau (entre 1 et 30) : ");
    scanf("%d", &taille);

    while (taille <= 0 || taille > 30) {
        printf("Erreur ! La taille doit etre entre 1 et 30.\n");
        printf("Veuillez reessayer : ");
        scanf("%d", &taille);
    }

    float table[taille];
    float somme = 0;

    for (int i = 0; i < taille; i++) {
        printf("Entrer la note %d : ", i + 1);
        scanf("%f", &table[i]); 
        somme += table[i];
    }

    float moyenne = somme / taille;
    printf("La moyenne est : %.2f\n", moyenne);

    float max = table[0];
    float min = table[0];
    for (int i = 1; i < taille; i++) {
        if (table[i] > max) {
            max = table[i];
        }else if(table[i] < min){
            min = table[i];
        }
    }
        int count = 0;
    for (int i = 0; i < taille; i++)
    {
       if (table[i]>=10)
       {
            count++;
       }
       
    }
    printf("le nombre d'etudiant réussi est : %d\n", count);
    

    printf("La note la plus grande est : %.2f\n", max);
    printf("La note la plus min est : %.2f\n", min);

    return 0;
}
