#include <stdio.h>
#include <math.h>
int main() {
  float a;
  printf("entrer le resilta de biltan: ");
  scanf("%f",&a);
  if (a<10){
      printf("il est recalé");
  }
  else if (a>= 10 && a<=12){
      printf("il obtient la mention passable");
  }
  else if (a>=12 && a<14){
      printf("il obtient la mention assez bien");
  }
  else if (a>=14 && a<16){
      printf("obtient la mention bien");
  }
  else if (a>=16){
      printf(" il obtient la mention très bien");
      
  }
  
  
   
   
   
 return 0; 
   
}