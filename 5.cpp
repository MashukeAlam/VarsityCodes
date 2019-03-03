

#include<stdio.h>

int  i, j, m, n, index;

void func(int array[20][20])
{
    int frequency[101] = {0};
	int x;

    for(i=0;i<m;i++)
    {

       for(j=0;j<n;j++){
            int in = array[i][j];
		   frequency[in]++;
       }
    }

    x = frequency[0];
    for(i = 0; i < 101; i++){
        if(x < frequency[i]){
            x = frequency[i];
            index = i;
        }
    }


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
	func(a);
    printf("this element has highest frequency: %d", index);
    return 0;
}

