#include<stdio.h>
#define pi 3.14
int main(){
 int r;
 printf("Enter radius: ");
 scanf("%d",&r);
 printf("Area of circle is: %f",r*r*pi);
 printf("\nCircumference of circle is: %f",2*pi*r);
}