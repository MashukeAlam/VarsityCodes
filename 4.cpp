/* Assignment-1.
                     Submitted by: Mashuke ALam Jim
                     ID: 011 181 145
                     To: Fahim Shahriar Sir */

#include<stdio.h>

int  i, j, m, n, p, q;

int secondLargest(int inp[20][20])
{
    int max = inp[0][0], sMax = inp[0][0];

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {

            if(sMax < inp[i][j]){
                if(max < inp[i][j])
                {
                    int tmp = max;
                    max = inp[i][j];
                    sMax = tmp;
                    p = i;
                    q = j;
                }else{
                    sMax = inp[i][j];
                    p = i;
                    q = j;
                }
            }
        }
    }

    return sMax;
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

   printf("Second largest is the element a[%d][%d] = %d", p, q, secondLargest(a));

   return 0;

}
