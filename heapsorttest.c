#include<stdio.h>
#define size 100

void create(int heap[]);
void downadjust(int heap[],int i);
void sort(int heap[]);

void main()
{
    int heap[size],n,i;
    printf("enter the size of heap");
    scanf("%d",&n);
    
    printf("Enter values:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&heap[i]);    
    }
    
    heap[0]=n;
    create(heap);

    printf("heap values:");
    for (i=1;i<=n;i++)
        printf("%d",heap[i]);
    
    printf("heap sort values:");
    sort(heap);
    for (i=1;i<=n;i++)
        printf("%d",heap[i]);

}

void create(int heap[])
{
    int i,n;
    n=heap[0];
    for(i=n/2;i>=1;i--)
    {
        downadjust(heap,i);    
    }

}

void downadjust(int heap[],int i)
{
    int n,temp,flag=1,j;
    n=heap[0];
    
    while(2*i<=n && flag==1)
    {
        j=2*i;
        
        if(j+1<=n && heap[j+1]>heap[j])
         {
            j=j+1;
         }    
        if(heap[i]>heap[j])
        {
            flag=0;        
        }
        else
        {
            temp=heap[i];
            heap[i]=heap[j];
            heap[j]=temp;
            i=j;        
        }
    }
}

void sort(int heap[])
{
int last,temp;
while(heap[0]>1)
{
    last=heap[0];
    temp=heap[1];
    heap[1]=heap[last];
    heap[last]=temp;
    heap[0]--;
    downadjust(heap,1);
}

}





