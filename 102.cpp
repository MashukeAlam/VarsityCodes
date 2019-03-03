#include<stdio.h>

void ascend(char str[100])
{
    for(int i = 0; str[i]; i++)
    {
        for(int j = i+1; str[j]; j++)
        {
            if(str[j] < str[i])
            {
                char t = str[j];
                str[j] = str[i];
                str[i] = t;
            }
        }
    }

    puts(str);
}
int main()
{
    char str[100];
    gets(str);
    ascend(str);
    return 0;
}

