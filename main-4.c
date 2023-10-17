/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int arr[100],n,sum=0;
   float average;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<n;i++){
       sum+=arr[i];
   }
   average=sum/n;
   printf("%f",average);

    return 0;
}
