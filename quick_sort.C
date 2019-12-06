#include<stdio.h>
#include<time.h>
#include<conio.h>

void quick(int a[10],int low,int high);

int partition(int a[10],int low,int high);


void main()
{
 int n,i,a[10];
 clock_t  start,end;
 double elapsed;

 start=clock();

 printf("Enter total elements to sort:");
 scanf("%d",&n);
 printf("\nEnter Elments:");
 for(i=0;i<n;i++)
    scanf("%d",&a[i]);

 quick(a,0,n-1);

 printf("\nSorted List:\n");
     for(i=0;i<n;i++)
 printf("\t%d\n",a[i]);
 end=clock();
 printf("Time(t)\t \tInput size(n)");
 printf("\n %lf \t\t %d\n",((double) (end - start)) / CLOCKS_PER_SEC,n);
 getch();
}


void quick(int a[10],int low,int high)
{
     int m,i;
     if(low<high)
     {
	 m=partition(a,low,high);
	 quick(a,low,m-1);
	 quick(a,m+1,high);
     }
}


int partition(int a[10],int low,int high)
{
     int pivot=a[low],i=low,j=high,temp;
     while(i<=j)
     {
	while(a[i]<=pivot)
	i++;
	while(a[j]>pivot)
	j--;
	if(i<j)
	{
	  temp=a[i];
	  a[i]=a[j];
	  a[j]=temp;
	}
     }
     a[low]=a[j];
     a[j]=pivot;

     return j;
}

