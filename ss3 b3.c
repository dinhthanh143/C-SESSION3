#include<stdio.h>

int main(){
  const float PI = 3.14;
  
  int r;
   printf("moi nhap ban kinh hinh tron: ");
   scanf("%d", &r);
  
  float chu_vi = 2*PI*r;
  
  printf("chu vi hinh tron la %.2f\n", chu_vi);
  
  float dien_tich = PI*(r*r);
  
  printf("dien tich hinh tron la %.2f", dien_tich);
  
  
  
   return 0;
}

