#include <stdio.h>
#include <math.h>
int main() {
   float a, b,c ,x1,x2, Δ;
   printf("entre numb a: ");
   scanf("%f",&a);
   printf("entre numb b: ");
   scanf("%f",&b);
   printf("entre numb c: ");
   scanf("%f",&c);
   Δ = pow (b,2)-4*a*c;
   if(Δ>0){
       x1= (-b+sqrt(Δ))/(2*a);
       x2= (-b-sqrt(Δ))/(2*a);
       printf("les eguation admis deux solution");
       printf("solution: %.2f",x1);
  
       printf("solution: %.2f",x2);
       
       
   }
   else if(Δ==0){
       x1= -b/(2*a);
       printf("solution: %.2f",x1);
       printf("les eguation admis un solution");
   }
   else
       printf("les eguation nest pas de solution");
   
 return 0; 
   
}