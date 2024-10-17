#include<stdio.h>

int main()
{
    int n = 10;
    int a = 0, b = 1,i,nextterm;
    
    // printing the 0th and 1st term
    printf("%d, %d",a,b);
    
    int nextTerm=1;
        for(int i = 2; i < n; i++){
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        
        printf("%d ",nextTerm);
    }

    return 0;
}
