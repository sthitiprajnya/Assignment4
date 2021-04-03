#include <stdio.h>
int main()
{

int a,b, r,c,arr1[10][10],arr2[10][10],sum[10][10];
printf("enter row and column  \n");
scanf("%d  %d",&r,&c);
printf("enter matrix 1\n");
for(a=0;a<r;a++)
{
	for(b=0;b<c;b++)
	{
		scanf( "%d",&arr1[a][b] );
	}
}

printf("enter matrix 2\n");
for(a=0;a<r;a++)
{
	for(b=0;b<c;b++)
	{
		scanf( "%d",&arr2[a][b] );
	}
}

printf("matrix 1+ matrix 2  \n");
for(a=0;a<r;a++)
{
	for(b=0;b<c;b++)
	{
		sum[a][b]=arr1[a][b]+arr2[a][b];
		printf("%d  ",sum[a][b]);
		if(b==c-1)
		printf("\n");
	}
}


		return 0;	
}