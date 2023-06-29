#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int a,b,c,result;
    srand(time(0));
    a = rand() % 10+1;
    b = rand() % 10+1;
    printf("Enter -1 to End.\n");
    do{
         a = rand() % 10+1;
        b = rand() % 10+1;
         c = rand() %4 + 1;
        printf("How much is %d times %d (-1 to End)? ",a,b);
        scanf("%d",&result);
        if(result==-1){
            printf("That's all for now. Bye");
            break;
        }
        while(result !=a*b){
            switch(c){
			case 1:	printf("No. Please try again.\n");
                    break;	
			case 2: printf("Wrong. Try once more.\n");
            break;
			case 3:	printf("Don't give up!\n");
            break;
			case 4: printf("No. Keep trying.\n");
            break;	}			
            scanf("%d",&result);
            c = rand() %4 + 1;
            }
        if(result == a*b){
        switch(c){
			case 1: printf("Very good!\n");
					break;
			case 2: printf("Exellent!\n");
					break;
			case 3:	printf("Nice work!\n");
					break;
			case 4: printf("Keep up the good work!\n"); 
					break;	
        }
    }}
    while(result!=-1);
    return 0;
}