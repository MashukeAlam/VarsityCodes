#include<stdio.h>
void reverse(char str[100])
{
    int len, i;
    for(len = 0; str[len]; len++);

    for(i = 0; i < len/2; i++)
    {
        char tmp = str[i];
        str[i] = str[len - i- 1];
        str[len - i - 1] = tmp;
    }
    printf("%s", str);
}
int main()
{
    char str[100];
    gets(str);
    reverse(str);
    return 0;
}

