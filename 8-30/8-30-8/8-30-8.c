#include<stdio.h>

int main()
{
    int arr[] = {99, 15, 100, 888, 252 };
    int i, *p = arr, len = sizeof(arr) / sizeof(int);
    for(i = 0; i <len; i++){
        printf("%d\n",*p++);
    }
    printf("\n");
    return 0;
}