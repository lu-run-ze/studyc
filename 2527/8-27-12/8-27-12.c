#include<stdio.h>

long factorial(int n)
{
    if(n == 0 || n ==1){
        return 1;
    }
    else{
        return factorial(n - 1) * n;
    }
}

int main()
{
    int a;
    printf("input a number:");
    scanf("%d",&a);
    printf("factorial(%d) = %ld\n",a,factorial(a));

    return 0;
}