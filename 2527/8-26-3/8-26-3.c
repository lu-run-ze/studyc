#include <stdio.h>
int main()
{
    int i, j;//��ά�����±�
    int sum = 0;//��ǰ��Ŀ�ܳɼ�
    int average;//��ƽ����
    int v[3];//����ƽ����
    int a[5][3];//����ÿ��ͬѧ���Ƴɼ��Ķ�ά����

    printf("input score:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            scanf("%d",&a[j][i]);
            sum +=a[j][i];
        }
    v[i] = sum/5;//����ƽ����
    sum = 0;
    }
    average = (v[0] + v[1] + v[2]) / 3;
    printf("math: %d\n c language: %d\n engliah: %d\n",v[0], v[1], v[2]);
    printf("total: %d\n",average);
    return 0;
}