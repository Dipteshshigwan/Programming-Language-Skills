#include<stdio.h>
#include<time.h>
void merge(int [],int ,int ,int );
void part(int [],int ,int );
int main()
{
 int n,i,arr[30];
 clock_t  start, end;
 double elapsed;

 start=clock();

 /*int n,i,arr[30];*/

 printf("Enter total no. of elements : ");
 scanf("%d",&n);
 printf("Enter the Elements");
 for(i=0; i<n; i++)
  scanf("%d",&arr[i]);

 part(arr,0,n-1);

 for(i=0; i<n; i++)
 printf("%d\n ",arr[i]);

 end= clock();

 printf("Time(t)\t \tInput size(n)");
 printf("\n %lf\t \t %d\n",((double) (end - start)) / CLOCKS_PER_SEC,n);
 getch();
 return 0;
}



void part(int arr[],int min,int max)
{
int mid;
 if(min<max)
 {
   mid=(min+max)/2;
   part(arr,min,mid);
   part(arr,mid+1,max);
   merge(arr,min,mid,max);
 }
}



void merge(int arr[],int min,int mid,int max)
{
int tmp[30];
int i,j,k,m;
  j=min;
  m=mid+1;
  for(i=min; j<=mid && m<=max ; i++)
  {
     if(arr[j]<=arr[m])
     {
tmp[i]=arr[j];
	 j++;
     }
     else
     {
tmp[i]=arr[m];
	 m++;
     }
  }
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
tmp[i]=arr[k];
i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
tmp[i]=arr[k];
i++;
     }
  }
  for(k=min; k<=max; k++) 
arr[k]=tmp[k]; 
} 


