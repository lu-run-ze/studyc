#include <stdio.h>

int sum(int m, int n);


int main()
{
    int begin = 5, end = 86;
    int result = sum(begin, end);
    printf("the sum from %d to %d is %d\n", begin, end,result);
    return 0;
}

int sum(int m, int n)
{
    int i, sum = 0;
    for(i = m; i <= n;i++){
        sum += i;
    }
    return sum;
}