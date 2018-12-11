#include <stdio.h>
#include <time.h>
#define MAX 2000

void isort( int a[], int n){

	int i,v,j;
	for(i=1;i<n;i++){
			v=a[i];
			j=i-1;
			while(j>=0 && a[j]>v){
				a[j+1]=a[j];
				j--;
				
			}

			a[j+1]=v;
	}
}

void main(){


	int a[MAX],i;

	double start,stop,diff;


	for(i=0;i<MAX;i++){
		a[i]=random();
	}

	start=clock();

	isort(a,MAX);

	stop=clock();

	for(i=0;i<MAX;i++){
		printf("%d\n",a[i] );
	}
	diff=(stop-start)/CLOCKS_PER_SEC;

	printf("the time is %f\n",diff );

}
