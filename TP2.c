#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main () {
    int nm1, nm2, nf1, nf2, ni1, ni2, ntgm, ntgf, ntgi, moyg, total, somcoef;
    int coefm=4, coeff=3, coefi=2;
    char nom[50];
    printf("Entrer votre nom \n");
    scanf("%s",nom);
    /*for (i = 0; i < 3; i++)
    {
        for (j = 1; j < 3; j++)
        {
            printf("Entrer votre note n°%d %s \n", j, matiere[i]);
            scanf("%d",&note[i][j]);
            while (note[i][j] < 0 || note[i][j] > 20)
            {
                printf("Ecrivez un nombre compris entre 0 et 20 \n");
                scanf("%d",&note[i][j]);
            }
            
        }
        noteg[i] = ((note[i][j]) / 2) * coef[i];
        
        
    }
    for (i = 0; i < 3; i++)
    {
        total = total + noteg[i];
        somcoef = somcoef + coef[i];
    }
    
    moyg = total / somcoef;*/
    printf("Entrer votre note 1 math \n");
    scanf("%d",&nm1);
    while (nm1 < 0 || nm1 > 20)
    {
        printf("Ecrivez un nombre compris entre 0 et 20 \n");
        scanf("%d",&nm1);
    }
    printf("Entrer votre note 2 math \n");
    scanf("%d",&nm2);
    while (nm2 < 0 || nm2 >20)
    {
        printf("Ecrivez un nombre compris entre 0 et 20 \n");
        scanf("%d",&nm2);
    }
    ntgm = ((nm1 + nm2) / 2) * coefm;
    printf("Entrer votre note 1 français \n");
    scanf("%d",&nf1);
    while (nf1 < 0 || nf1 >20)
    {
        printf("Ecrivez un nombre compris entre 0 et 20 \n");
        scanf("%d",&nf1);
    }
    printf("Entrer votre note 2 français \n");
    scanf("%d",&nf2);
    while (nf2 < 0 || nf2 >20)
    {
        printf("Ecrivez un nombre compris entre 0 et 20 \n");
        scanf("%d",&nf2);
    }
    ntgf = ((nf1 + nf2) / 2) * coeff;
    printf("Entrer votre note 1 informatique \n");
    scanf("%d",&ni1);
    while (ni1 < 0 || ni1 >20)
    {
        printf("Ecrivez un nombre compris entre 0 et 20 \n");
        scanf("%d",&ni1);
    }
    printf("Entrer votre note 2 informatique \n");
    scanf("%d",&ni2);
    while (ni2 < 0 || ni2 >20)
    {
        printf("Ecrivez un nombre compris entre 0 et 20 \n");
        scanf("%d",&ni2);
    }
    ntgi = ((ni1 + ni2) / 2) * coefi;
    total = ntgm + ntgf + ntgi;
    somcoef = coefm + coeff + coefi;
    moyg = total / somcoef;
    printf("%s votre moyenne est: %d \n", nom, moyg);
    if (moyg < 10)
    {
        printf("Médiocre \n");
    }
    else if (moyg == 10)
    {
        printf("Passable \n");
    }
    else if (moyg > 10 && moyg <= 12)
    {
        printf("Assez-bien \n");
    }
    else if (moyg > 12 && moyg <= 14)
    {
        printf("Très bien \n");
    }
    else if (moyg > 14)
    {
        printf("Excellent \n");
    }
    return 0;  
 }  
 