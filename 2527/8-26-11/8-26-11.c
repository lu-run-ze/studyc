#include <stdio.h>
int main()
{
    int nums[10] = {4, 5, 2, 10, 7, 1, 8, 3, 6, 9};
    int i, j, temp;

    //冒泡排序算法，进行n-1次比较
    for( i = 0; i < 10-1; i++){
        for(j = 0; j < 10-1-i; j++){
            if(nums[j] > nums[j+1]){
            temp = nums[j];
            nums[j] = nums[j+1];
            nums[j+1] = temp; 
            }
        }
    }
    for(i = o; i < 9; i++){
        printf("%d",nums[i]);
    }
    printf("\n");

    return 0;
}