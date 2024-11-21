#include<stdio.h>

int main(){

 float anh, toan, van, sum, average;

printf("moi nhap diem toan: ");
scanf("%f", &toan);

printf("moi nhap diem van: ");
scanf("%f", &van);

printf("moi nhap diem anh: ");
scanf("%f", &anh);

sum= toan + van + anh;

average = sum/3;

printf("diem tong la: %.2f\n",sum);

printf("diem trung binh la: %.2f",average);
   return 0;
   
}

