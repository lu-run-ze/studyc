#include <stdio.h>
int main()
{
    int i, j;//二维数组下标
    int sum = 0;//当前科目总成绩
    int average;//总平均分
    int v[3];//各科平均分
    int a[5][3];//保存每个同学各科成绩的二维数组

    printf("input score:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            scanf("%d",&a[j][i]);
            sum +=a[j][i];
        }
    v[i] = sum/5;//各科平均分
    sum = 0;
    }
    average = (v[0] + v[1] + v[2]) / 3;
    printf("math: %d\n c language: %d\n engliah: %d\n",v[0], v[1], v[2]);
    printf("total: %d\n",average);
    return 0;
}