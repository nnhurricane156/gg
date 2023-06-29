#include<stdio.h>
#include<conio.h>
int main(){
	char name[100];
	int age;
	char address[100];
	printf("Nhap ho ten cua ban di nao: ");
	gets(name);
	printf(" Tuoi cua ban la bao nhieu nao: ");
	scanf("%d",&age);
	fflush(stdin);
	printf(" Dia chi cua ban la o dau nao: ");
	gets(address);
	printf(" Chao ban ,\" %s\" , %d, %s",name,age,address);
	getch();
	return 0;
}
