#include <stdio.h>
long factorial(int n)
{
    int i;
    long result = 1;
    for(i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}

long sum(long n)
{
    int i;
    long result = 0;
    for(i = 1; i <= n; i++){
        result += factorial(i);
    }
    return result;
}

int main()
{
   printf("1! + 2! + 3! + 4! + 5! +....10! = %ld\n", sum(10));
   return 0;
}