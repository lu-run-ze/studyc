#include <stdio.h>

int sum(int m, int n);

int main()
{
    printf("the sum from 1 to 100 is %d\n",sum(1, 100));
    return 0;    
}

int sum(int m, int n)
{
    int sum = 0;
    for(int i = m;i <= n; i++){
        sum += i;
    }
    return sum;
}