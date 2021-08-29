#include <stdio.h>
int main()
{
    char str1[30] = {0};
    char str2[30] = {0};
    char str3[30] = {0};

    printf("input a string:");
    gets(str1);
    printf("input a string:");
    scanf("%s",str2);
    scanf("%s",str3);
    printf("\nstr1:%s", str1);
    printf("str2:%s\n",str2);
    printf("str3:%s\n",str3);

    return 0;
}