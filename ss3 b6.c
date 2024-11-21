#include<stdio.h>

int main(){

int canh, chieu_cao;
printf("moi nhap do dai canh: ");
scanf("%d", &canh);

printf("moi nhap do dai chieu cao: ");
scanf("%d", &chieu_cao);

float dien_tich;
dien_tich=0.5*canh*chieu_cao;

printf("dien tich cua tam giac la: %.2f",dien_tich);

   return 0;
}

