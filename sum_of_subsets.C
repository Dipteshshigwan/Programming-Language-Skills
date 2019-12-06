#include<stdio.h>
#include<conio.h>

void subset(int n,int w[],int d);
int main()
{
int n;
int w[10];
int d;
int i;
printf("Enter number of elements in array\n");
scanf("%d",&n);
printf("Enter array elements in ascending order\n");
for(i=1;i<=n;i++)
scanf("%d",&w[i]);
printf("Enter value of d\n");
scanf("%d",&d);

subset(n,w,d);
getch();
return -1;


}



void subset(int n,int w[],int d)
{
int i;
int s=0,k=1;
int x[10]; // tracking of values in array w

for(i=1;i<=n;i++)
x[i]=0;
x[k]=1;

while(1)
{
 if(k<=n && x[k]==1)
 {
  if(s+w[k]==d) // soln found
  {
   printf("soln is\n");
   for(i=1;i<=n;i++)
   {
    if(x[i]==1)
    printf("%d \t",w[i]);
   }
   printf("\n");
   x[k]=0;
  }
  else if(s+w[k]<d)
  {
    s+=w[k];
  }
  else
  {
    x[k]=0;
  }
 }
 else
 {
  k--;
  while(k>0 && x[k]==0)
  {
   k--;
  }
  if(k==0)
  break;
  x[k]=0;
  s=s-w[k];
 }
 k+=1;
 x[k]=1;
}
}

