#include<stdio.h>

void reverseExceptPunctuation(char str[100])
{
    int i, pp = 0, cp, j;
    while(str[i])
    {
        if(!(str[i] >= 'A' && str[i] <= 'Z') || !(str[i] >= 'A' && str[i] <= 'Z'))
        {
            cp = i;

            int len = cp - pp + 1;
            for(j = 0; i < len/2; j++)
            {
                char tmp = str[j];
                str[j] = str[len - j- 1];
                str[len - j - 1] = tmp;
            }
            pp = cp;
        }
    }

    puts(str);
}
int main()
{
    char str[100];
    gets(str);

    reverseExceptPunctuation(str);
    return 0;
}
