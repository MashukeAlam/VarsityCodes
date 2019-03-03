
/* Assignment-1.
                     Submitted by: Mashuke ALam Jim
                     ID: 011 181 145
                     To: Fahim Shahriar Sir */
#include<stdio.h>

int i,j,m,n;

int isSparse(int array[20][20])
{

    int count=0;
    int non_count=0;

	for(i=0;i<m;i++)
	{

	     for(j=0;j<m;j++)
		 {

		     if(array[i][j]==0){
                count++;
		     }
			 else
				 non_count++;
		 }
	}


	if((count-non_count)>0)
		return 1;
	else
		return 0;


}
int main()
{
    int a[20][20];

	int count;

	scanf("%d%d",&m,&n);

	for(i=0;i<m;i++)
	{

	     for(j=0;j<m;j++){
			 scanf("%d",&a[i][j]);
	     }

	}
	count=check(a);

	if(count==1)
		printf("Sparse Matrix\n");
	else
		printf("Not Sparse Matrix\n");


	return 0;

}
