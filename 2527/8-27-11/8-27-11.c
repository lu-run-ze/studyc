#include<stdio.h>
#include<string.h>

int strchar(char *str, char c);

int main()
{
    char url[] = "http://c.biancheng.net";
    char letter = 'c';
    if(strchar(url, letter) >= 0){
        printf("the letter is in the string.\n");
    }
    else{
        printf("the letter is not in the string.\n");
    }
    return 0;
}

int strchar(char *str, char c)
{
    for(int i = 0, len = strlen(str);i < len; i++){
        if(str[i] == c){
            return i;
        }
    }

    return -1;
}