#include<stdio.h>

int main(){
	int number, first_num,second_num,third_num,fourth_num, reversed;
	printf("moi nhap so nguyen co 4 chu so: ");
	scanf("%d", &number);
first_num=number/1000;

second_num=number/100%10;

third_num=number/10%10;

fourth_num=number%10;

reversed= fourth_num*1000+third_num*100+second_num*10+first_num;

printf("so nghich dao la la: %d",reversed);

   return 0;
}

