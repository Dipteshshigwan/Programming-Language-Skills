#include<stdio.h>
#include<time.h>
#include<conio.h>
void insert_sort(int a[],int n);
int binary_search(int a[1000],int n,int key);
void main()
{

 int n=100,i,a[1000],key,r;
 clock_t start,end;
 double elapsed;
 printf("Time Complexiety of BI is");
 printf(" \n INPUT(n) TIME(t) ");
 while(n<=1000)
 {
   /* printf("Enter how many elements to be entered");
scanf("%d",&n);
printf("Enter elements:");*/

  for(i=0;i<n;i++)
     {
      a[i]=rand()*100;
      start=clock();
     }
  key=rand()*100;
 /* scanf("%d",&a[i]);
  printf("Enter elements to be searched:");
  scanf("%d",&key); */
 // start=clock();
  insert_sort(a,n);
  binary_search(a,n,key);
  end=clock();

  /*  if(r==-1)
printf("%d is not present",key);
    else
printf("%d is present at location %d",key,r);*/

   printf("\n %d \t %lf ",n,((double)(end-start)/CLOCKS_PER_SEC));
   n=n+300;
  }
 getch();
}


void insert_sort(int a[10],int n)
{
   int i,j,temp;
   for(i=1;i<=n-1;i++)
   {
      temp=a[i];
      j=i-1;
      while(j>=0 && a[j]>temp)
      {
	 a[j+1]=a[j];
	 j=j-1;
      }
      a[j+1]=temp;
   }


}


int binary_search(int a[],int n,int key)
{
   int low,mid,high;
   low=0;
   high=n-1;
   while(low<=high)
    {
      mid=(low+high)/2;
      if(a[mid]==key)
	   return mid;
      else if(a[mid]<key)
	      low=(mid+1);
	   else
	      high=(mid-1);
    }
    return -1;
}
