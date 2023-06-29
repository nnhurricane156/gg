
#include<stdio.h>
int main(){
	char kiTu;
	nhaplai:
	printf("\nNhap ki tu: ");
	kiTu = getchar();
	kiTu = kiTu - 32;
	if (kiTu >= 'A' && kiTu <= 'Z'){
		switch (kiTu){
			case 'U':
			case 'E':
			case 'O':
			case 'A':
			case 'I':
				printf("Ki tu la nguyen am.");
				break;
			default: 
				printf("Ki tu la phu am.");
				break;
		}
	}else{
		printf("Khong phai la ki tu, nhap lai.");
        fflush(stdin);
		goto nhaplai;
	}
    return 0;
}