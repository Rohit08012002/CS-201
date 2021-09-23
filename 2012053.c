/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, n, n1=0, n2=1, n3, fib;
    printf("Enter the n th term for the fibonacci series");
    scanf("%d",&n);
    printf(" %d  %d ", n1, n2);
    for(i=2; i<n; ++i)
    {
        n3=n2+n1;
        printf(" %d ", n3);
        n1 =n2;
        n2 =n3;
    }
    

    return 0;
}
