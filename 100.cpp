#include<stdio.h>

int check_palindrome(char str[100])
{
    int len, i;
    for(len = 0; str[len]; len++);

    for(i = 0; i < len/2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            break;
        }
    }

    if(i >= len/2)
    {
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    char str[100];
    gets(str);

    if(check_palindrome(str))
    {
        printf("Is a palindrome.\n");
    }else{
        printf("Not a palindrome.\n");
    }
    return 0;
}

