#include <stdio.h>
#include <math.h>
int main() {
     char a;
  printf("entrer la lettre: ");
  scanf("%c",&a);
  if ('A'<= a && a<='Z'){
      printf("la lettre est majiscule");
  }
  else {
      printf("la lettre est miniscule");
  }
   
   
   
 return 0; 
   
}