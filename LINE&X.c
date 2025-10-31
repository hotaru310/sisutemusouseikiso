#include <stdio.h>

int main()
{
   int k;
   int M;
   printf("How many friends do you have on LINE?");
   scanf("%d" ,&k);
   
   printf("How many followers do you have on X?");
   scanf("%d" ,&M);
   if (k>=200 && M<=80)
   {
       printf("You're quite the popular person!");
   }
   
   else if(k <=200 && k >=15 && M<=80)
   {
       printf("It's nice to have so many friends.");
   }
   else if (k <= 14 && M<=80)
   {
       printf("Official LINE accounts are great friends too.");
   }
   else if (k<=30 && M >= 80)
   {
       printf("Let's play outside sometime!");
   }
   
   return 0;
}