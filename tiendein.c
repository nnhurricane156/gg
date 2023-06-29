#include<stdio.h>
int main(){
    char iD[20],name[20];
    float unit,total;
    printf("Customer iD: ");
    gets(iD);
    fflush(stdin);
    printf("Full Name: ");
    gets(name);
    printf("Units: ");
    scanf("%f",&unit);
 if (unit <= 50)
        total = unit * 0.5;
    else if (unit <= 150)
        total = 25 + ((unit - 50) * 0.75);
    else if (unit <= 250)
        total = 100 + ((unit - 150) * 1.20);
    else
        total = 220 + ((unit - 250) * 1.5);
    total += (total*0.2);
    printf("Customer iD: %s\n", iD);
    printf("Full Name: %s\n", name);
    printf("Cost must paid: %.2f", total);
    return 0;
}