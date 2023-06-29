#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int a,b,result;
    srand(time(0));
    a = rand() % 10;
    b = rand() % 10;
    printf("Enter -1 to End.\n");
    do{
        a = rand() % 10;
        b = rand() % 10;
        printf("How much is %d times %d (-1 to End)? ",a,b);
        scanf("%d",&result);
        if(result==-1){
            printf("That's all for now. Bye");
            break;
        }
        while(result !=a*b){
            printf("No. Please try again.");
            scanf("%d",&result);
        }
        if(result == a*b)
            printf("Very good\n");
    }
    while(result!=-1);
    return 0;
}