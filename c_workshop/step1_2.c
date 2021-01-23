

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr1,nbr2;
    int somme,sous,prod,module;
    float quot;

    printf("please enter the first number : \n");
    scanf("%d", &nbr1);

    printf("please enter the second number : \n");
    scanf("%d",&nbr2);

    somme = nbr1 + nbr2;
    sous = nbr1 - nbr2;
    prod = nbr1 * nbr2;
    module = nbr1 % nbr2;
    quot = (float)nbr1 / nbr2;

    printf("somme is %d\n", somme);
    printf("soustraction is %d\n", sous);
    printf("produit is %d\n", prod);
    printf("reste is %d\n", module);
    printf("quotien is %.2f", quot);

    return 0;
}
