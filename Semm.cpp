#include<stdio.h>


float minhaf (float valor) {

   float atual=1, z = 0.5;

   while ( z <= valor) {

         atual *= z;

         z++;   }

   return atual; }

main() {

    printf("%.2f", minhaf(3));

}
