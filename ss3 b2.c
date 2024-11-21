#include<stdio.h>

int main(){
	
	float celsius, fahrenheit; 

printf("moi nhap do (celsius): ");
scanf("%f",&celsius);

 fahrenheit = (celsius * 1.8) + 32;

printf("%.2f celsius = %.2f fahrenheit",celsius,fahrenheit);

   return 0;
}

