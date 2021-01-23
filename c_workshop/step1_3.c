int main()
{
    int nbr,somme = 0,cpt = 0;
    float moyen;

    do{
        printf("please enter a number :");
        scanf("%d", &nbr);

        if(nbr > -1){
            somme += nbr;
            cpt++;
        }
    }while(nbr > -1)
    moyen = (float)somme / cpt;

    printf(" moyen is : %.2f" , moyen);

    return 0;
}