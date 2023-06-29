#include<stdio.h>
#include<math.h>
int main(){
	float height,weight;
	char name[100];
	printf("Nhap ten cua ban: ");
	gets(name);
	printf("Nhap chieu cao cua ban (cm): ");
	scanf("%f",&height);
	height/=100;
	printf("Nhap can nang cua ban (kg): ");
	scanf("%f",&weight);
	float bmi= (weight)/pow(height,2);
	printf("Chi so bmi cua %s la: %.2f ", name,bmi);
	return 1;

}
