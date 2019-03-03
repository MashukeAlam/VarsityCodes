/* Assignment-1.
                     Submitted by: Mashuke ALam Jim
                     ID: 011 181 145
                     To: Fahim Shahriar Sir */
#include<stdio.h>

//Edit on custom branches
int i, j, m, n;
int diagonalSum(int inp[20][20])
{
    int sum = 0;

    for(i = 0; i < n; i++){
        sum += inp[i][i];
    }

    return sum;
}

int main()
{
    int a[20][20];

    scanf("%d%d", &m, &n);

    for(i=0;i<m;i++)
    {

       for(j=0;j<n;j++){
		   scanf("%d",&a[i][j]);
       }
    }

    printf("Diagonal SUM: %d", diagonalSum(a));
    return 0;
}
