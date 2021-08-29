#include<stdio.h>
int main()
{
    int nums[10] = {0, 1, 10, 23, 34, 100, 177, 296, 999};
    int i, num, thisindex = -1;

    printf("input an integer:");
    scanf("%d",&num);
    for(i = 0; i < 10; i++){
        if(nums[i] == num){
        thisindex = 1;
        }
        else if(nums[i] > num ){
        break;
        }
    }
    if(thisindex < 0){
        printf("%d isn't in this array.\n",num);
    }
    else{
        printf("%d is in the array,it's index is %d.\n",num, thisindex);
    }

    return 0;
}