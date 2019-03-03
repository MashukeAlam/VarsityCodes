#include<stdio.h>

void reverseLastN(char str[100], int n)
{
    int i, j, len;
    char lastN[100];
    for(len = 0; str[len]; len++);

    for(i = len - n, j = 0; str[i]; i++, j++)
    {
        lastN[j] = str[i];
    }

    lastN[j] = '\0';


    // 'j' is acting as lastN's length...
    for(i = 0; i < j / 2; i++)
    {
        char tmp = lastN[i];
        lastN[i] = lastN[j - i - 1];
        lastN[j - i - 1] = tmp;
    }

    printf("%s", lastN);
}
int main()
{
    int n;
    char str[100];
    gets(str);
    scanf("%d", &n);
    reverseLastN(str, n);
    return 0;
}

