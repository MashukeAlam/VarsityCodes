#include<stdio.h>

void encrypt(char str[100], int n)
{
    for(int i = 0; str[i]; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(str[i] + n > 'z')
            {
                char t = str[i] + n - 'z' + 'a' - 1;
                str[i] = t;
            }else{

                str[i]+=n;
            }
        }else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            if(str[i] + n > 'Z')
            {
                char t = str[i] + n - 'Z' + 'A' - 1;
                str[i] = t;
            }else{

                str[i]+=n;
            }
        }
    }
    puts(str);
}

int main()
{
    int n;
    char str[100];
    gets(str);

    scanf("%d", &n);

    encrypt(str, n);
    return 0;
}

