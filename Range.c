#include<stdio.h>
#include<limits.h>
void main()
{
    int num,min, max ;
    char choice='y';

    do{
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if(num>min)
        min = num;
    if(num<max)
        max = num;

    
    printf("You want to add another integer(y/n)?: ");
    scanf(" %c", &choice); 
    }while(choice=='Y'||choice=='y');

printf("Range is %d", (min-max));

}