#include<stdio.h>

int main(){
	float toan, ly, hoa, dtb;
	char diemChu;
	nhaplai: 
	printf("Nhap diem toan: ");
	scanf("%f", &toan);
	printf("Nhap diem ly: ");
	scanf("%f", &ly);	
	printf("Nhap diem hoa: ");
	scanf("%f", &hoa);	
	if (toan < 0 || ly < 0 || hoa < 0){
		printf("Diem khong lop le, nhap lai.\n");
		goto nhaplai;
	}
	dtb = (toan + ly + hoa) / 3;
	if (dtb < 4){
		diemChu = 'F';
	}else if (dtb < 5.5){
		diemChu = 'D';
	}else if (dtb < 7){
		diemChu = 'C';
	}else if (dtb < 8.5){
		diemChu = 'B';
	}else{
		diemChu = 'A';
	}
	printf("Diem chu: %c\n", diemChu);
	if (diemChu == 'F'){
		printf("Ban da rot mon\n");
	} else if (diemChu == 'A'){
		printf("Ban da pass");
	}
}