#include<stdio.h>
void main()
{
    int i,n,prime,m;
    printf("Enter value to check:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {m=1;
        break;}
    }
        if(m==1)
        printf("%d is not prime",n);
        else
        printf("It is  a prime");
    
}