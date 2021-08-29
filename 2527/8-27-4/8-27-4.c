#include<stdio.h>
void prime(int n)
{
    int is_prime = 1, i;
    if(n < 0){
        printf("%d is a illegal number.\n",n);
        return;
    }
    for(i = 2; i < n;i++){
        if(n % i  == 0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime > 0){
        printf("%d is a prime number.\n",n);
    }
    else{
        printf("%d is not a prime number.\n",n);
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    prime(num);
    return 0;
}