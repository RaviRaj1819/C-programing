#include <stdio.h>
void main() {
   int i, j, row,space;
   printf("Enter the number of rows: ");
   scanf("%d", &row);
   for (i =row; i >=1; i--) 
   {
       for(space=1;space<=row-i;space++)
       {
           printf(" ");
       }
       for(j=1;j<=2*i-1;j++)
       {
           printf("%d",j);
          
       }
       printf("\n");
   }
   
}
     
    