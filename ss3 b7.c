#include<stdio.h>

int main(){
	int number, first_num,second_num,third_num,fourth_num, total;
	printf("moi nhap so nguyen co 4 chu so: ");
	scanf("%d", &number);
first_num=number/1000;

second_num=number/100%10;

third_num=number/10%10;

fourth_num=number%10;

total= first_num+second_num+third_num+fourth_num;

printf("tong cac chu so la: %d",total);

   return 0;
}

