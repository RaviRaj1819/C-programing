#include<stdio.h>

int main()
{
    int num=10,r=0;
    for(int i=1;i<=num/2;i++)
    {
         printf("\n");
        for(int j=((num-r)/2);j>=1;j--)
        {
            printf("*");
        }
        for(int k=0;k<=r;k++)
        {
            printf(" ");
        }
         for(int j=((num-r)/2);j>=1;j--)
        {
            printf("*");
        }
        r+=2;

    }
    for(int i=1;i<=(num/2);i++){
        for(int j=((num-r)/2);j>=1;j--){
            printf("*");
        }
        for(int k=0;k<=r;k++){
            printf(" ");
        }
        for(int j=((num-r)/2);j>=1;j--){
            printf("*");

        }
        r=r-2;
        printf("\n");
    }
}
