#include <stdio.h>
#include <math.h>
int main() {
  float a;
  printf("entrer your number: ");
  scanf("%f",&a);
  if (a>0){
      printf("le nombre est positif");
  }
  else if (a<0){
      printf("le nombre est négatif ");
  }
  else {
       printf("le nombre est nul");
      
  }
   
   
   
 return 0; 
   
}