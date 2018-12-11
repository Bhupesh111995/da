#include<stdio.h>
#define n 4

int R[n][n],i,j,k;

void Rinsert()
{
	printf("Insert Values to Matrix :\n");
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
			{
				scanf("%d",&R[i][j]);
			}
		
	}
}

void mtxprint()
{
	printf("Values of Matrix :\n");
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
			{
				printf("%d\t",R[i][j]);
			}
	printf("\n");
		
	}
}

void floyds()
{
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					if((R[i][j]+R[j][k])<R[i][k])
					{
						R[i][j]=1;
					}
				}			
			}
		
	}	
}


void main()
{
	Rinsert();
	mtxprint();
	floyds();
	mtxprint();
}
