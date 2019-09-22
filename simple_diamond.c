#include<stdio.h>

int main(int argc, char * argv[])
{
    if(argc!=2)
{
    printf("ERROR: Wrong number of arguments. One required. \n");
    return 0;
}

    int H, number, i, k, count = 1;

   H = atol(argv[1]);
   
   if ((H%2 == 0)|| H<0)
   {
       printf("ERROR: Bad argument. Height must be positive odd integer.\n");
       return 0;
   }
  number = H;
    
     number = (number+1)/2;
    count = (number) - 1;
    for (k = 1; k <= number; k++)
    {
        for (i = 1; i <= count; i++)
            printf(" ");
        count--;
        for (i = 1; i <= 2 * k - 1; i++)
            printf("*");
        printf("\n");
     }
     count = 1;
     for (k = 1; k <= number - 1; k++)
     {
         for (i = 1; i <= count; i++)
             printf(" ");
         count++;
         for (i = 1 ; i <= 2 *(number - k)-  1; i++)
             printf("*");
         printf("\n");
      }
      return 0;
}

   