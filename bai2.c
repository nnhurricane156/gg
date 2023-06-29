#include<stdio.h>
#include<string.h>
int main(){
    char id[10],name[30];
    float km;
    printf("Hay nhap id cua ban: ");
    gets(id);
    printf("Hay nhap ten cua ban: ");
    gets(name);
    printf("Hay nhap vao so km ban muon di: ");
    scanf("%f",&km);
    int t;
    printf("Thoi gian cho cua ban la bao lau: ");
    scanf("%d",&t);
    char bus[6];
    fflush(stdin);
    printf("Ban di ban dem hay ngay:");
    gets(bus);
    double totaltaxi=0;
    double totalbus=0;
        if(km<=1)
            totaltaxi= 19000;
            else
            {
            if (km<=5)
                totaltaxi = 19000 + (km-1)*15000;
            else 
                totaltaxi = 64000 + (km-4)*10000;
            totaltaxi+=t*2000;}
        if(bus=="dem")
        {
            totalbus= 22000 * km;
        }
        else
            totalbus=25000*km;
    printf("\n");
    printf("Id: %s\n",id);
    printf("Name: %s\n",name);
    printf("so tien truoc thue cua taxi la: %.2lf\n",totaltaxi);
    printf("So tien sau thue cua taxi la: %.2lf\n",(totalbus*80)/100);
    printf("so tien truoc thue cua bus la: %.2lf\n",totaltaxi);
    printf("So tien sau thue cua bus la: %.2lf\n",(totalbus*80)/100);
    if(totalbus<=totaltaxi)
    printf("Ban nen chon bus");
    else
    printf("Ban nen chon taxi");
    return 0;
}