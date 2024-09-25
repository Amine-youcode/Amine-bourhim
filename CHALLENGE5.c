#include <stdio.h>
#include <math.h>
int main() {
   int  A ,M ,J ,H ,min , S , z;
   printf("entre annee: ");
   scanf("%i",&A);
   printf("entrer une number: \n 1entre moi: \n 2entrer jours: \n 3entrer heure: \n 4entrer minite: \n 5entrer seconte: \n");
   scanf("%d",&z);
   M = A * 12;
   J = A * 365;
   H = A * 8760;
   min = A * 525600;
   S = A * 3,154e+7;
   switch (z){
       case 1:
       printf("il y'a: %i mois",M);
       break;
       case 2:
       printf("il y'a: %i jeurs",J);
       break;
       case 3:
       printf("il y'a: %i heur",H);
       break;
       case 4:
       printf("il y'a: %i minit",min);
       break;
       case 5:
       printf("il y'a: %i secant",S);
       break;
       
   }
   
   
   
 return 0; 
   
}