#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100] = "the url is";
    char str2[60];
    printf("input a url:");
    gets(str2);
    strcat(str1,str2);
    puts(str1);
   
    return 0;
}