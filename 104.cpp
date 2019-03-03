#include<stdio.h>


//Hey
void del(char str[100], int n)
{
    int len, i;
    for(len = 0; str[len]; len++);

    for(i = n; str[i]; i++)
    {
        str[i] = str[i+1];
    }
    str[len-1] = 0;
    puts(str);

}
int main()
{
    int n;
    char str[100];
    gets(str);
    scanf("%d", &n);

    del(str, n);
    return 0;
}

