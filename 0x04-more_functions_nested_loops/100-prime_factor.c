#include <stdio.h>

/**
 * main - program that prints out the highest prime factor
 *
 * Return: Always (0)
 */

int main(void) {
   long int n;

   n= 612852475143;
   long int factor = 2, maxFactor;

   while(n!= 0) {
      if(n % factor != 0)
         factor = factor + 1;
      else {
         maxFactor = n;
         n = n / factor;

         if(n == 1) {
            printf("%d",maxFactor);
            break;
         }
      }
   }
   return 0;
}
