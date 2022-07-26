#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int saisie (char t[50]);
int main () {
    // Déclaration des variables
    int i=0, count=1;
    int Tab[3]={1234,4567,7894};
    char code[50];
    // Saisir code
    printf("Entrer un code secret: \n");
    scanf("%s",code);
    
    // Vérification de la saisie si c'est de la numérique
    while (saisie(code) == 0)
    {
        if (count == 3)
        {
            printf("Fin des tentatives");
            return 0;
        }
        if (count == 2)
        {
            printf("Il vous reste une tentative");
        }
        else{
            printf("Entrer des nombres");
        }
        scanf("%s",code);
        count++;
    }
    // Vérification de la saisie avec les éléments du tableau
    while (atoi(code) != Tab[i])
    {
        if(i < 3)
        {
            i++;
        }
        else
        {
            if (count == 3)
            {
                printf("Fin des tentatives");
                return 0;
            }
            if (count == 2)
            {
                printf("Il vous reste une tentative");
            }
            else{
                printf("Code incorrect, veuillez réessayer");
            }
            
            scanf("%s",code);
            while (saisie(code) == 0)
            {
                if (count == 3)
                {
                    printf("Fin des tentatives");
                    return 0;
                }
                if (count == 2)
                {
                    printf("Il vous reste une tentative");
                }
                else{
                    printf("Entrer des nombres");
                }
                
                
                scanf("%s",code);
                count++;
            }
            i = 0;
            count++;
        }
    }
    printf("Code correct");
    return 0;
}
// Fonction pérmettant de vérifier si la saisie contient uniquement des entiers
int saisie (char t[50])
    {
        int compteur = 0;
        for (int i = 0; i < strlen(t); i++)
        {
            if (isdigit(t[i]))
            {
                compteur++;
            }
            
        }
        if (compteur == strlen(t))
        {
            return 1;
        }
        return 0;
        
    }


