/* Assignment-1.
                     Submitted by: Mashuke ALam Jim
                     ID: 011 181 145
                     To: Fahim Shahriar Sir */
#include<stdio.h>

int i,j,m,n;
int isPresent(int array[20][20],int s)
{
    int flag=0;

    for(i=0;i<m;i++)
	{

	   for(j=0;j<n;j++)
	   {

	     if(s==array[i][j])
		 {
		     flag = 1;
			 break;
		 }
	   }



	}

	return flag;
}


int main()
{


  int a[20][20];
  int numb;

  scanf("%d%d",&m,&n);


  for(i=0;i<m;i++)
  {

     for(j=0;j<n;j++)
		 scanf("%d",&a[i][j]);

  }

  scanf("%d",&numb);



  if(isPresent(a,numb))
	  printf("Yeah. It's found in the position: %d %d\n",i,j);
  else
	  printf("Sorry, not found\n");



}
