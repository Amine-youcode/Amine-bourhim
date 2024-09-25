#include <stdio.h>
int p1=2 ,p2=3 ,p3=5;
int main() {
   float num1 , num2 , num3 ;
   float moyeP;
   printf("entre num: ");
   scanf("%f",&num1);
   printf("entre num: ");
   scanf("%f",&num2);
   printf("entre num: ");
   scanf("%f",&num3);
   moyeP= ((num1*p1)+(num2+p2)+(num3*p3)) / (p1+p2+p3) ;
   printf("moyep %.2f:",moyeP);
   
    
   
     
}