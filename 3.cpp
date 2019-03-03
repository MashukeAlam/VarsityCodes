/* Assignment-1.
                     Submitted by: Mashuke ALam Jim
                     ID: 011 181 145
                     To: Fahim Shahriar Sir */
#include<stdio.h>

int m,n,i,j;

int result(int array[20][20])
{

      int flag=1;

	for(i=0;i<m;i++)
	{

	    for(j=0;j<n;j++)
		{

		  if(i==j)
		  {
              if(array[i][j]!=1)
              {

                  flag=0;
                  break;

              }

		  }
		  else
		  {
              if(array[i][j]!=0)
              {
                  flag=0;
                  break;
              }
		  }
		}

		if(flag==0)
			break;
	}

	return flag;

}
int main()
{
   int a[20][20];



   scanf("%d%d",&m,&n);

   for(i=0;i<m;i++)
   {

       for(j=0;j<n;j++)
		   scanf("%d",&a[i][j]);

   }

   if(result(a))
	   printf("Identity Matrix.\n");
   else
	   printf("Not Identity Matrix.\n");
   return 0;
}
