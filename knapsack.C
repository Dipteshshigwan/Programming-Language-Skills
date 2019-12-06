#include<stdio.h>
#include<conio.h>

void knapsack(int n,float m,float w[],float p[]);

void main()
{
 int i,j,n,m;
 float p[15],w[15],c[15],temp,cap;
 printf("\nEnter no of items:");
 scanf("%d",&n);

 printf("\nEmter profits:");
 for(i=0;i<n;i++)
  scanf("%f",&p[i]);

 printf("\nEnter weights" );
 for(i=0;i<n;i++)
  scanf("%f",&w[i]);

 printf("\nEnter Total capacity:");
 scanf("%f",&cap);

    for(i=0;i<n;i++)
     c[i]=p[i]/w[i];

    for(i=0;i<n;i++)
    {
       for(j=0;j<n-1;j++)
       {
	  if(c[j]<c[j+1])
	  {

	     temp=c[j];
	     c[j]=c[j+1];
	     c[j+1]=temp;

	     temp=w[j];
	     w[j]=w[j+1];
	     w[j+1]=temp;

	     temp=p[j];
	     p[j]=p[j+1];
	     p[j+1]=temp;
	  }
	}
     }
 printf("\nThe items are arranged as ...\n");
 printf("\n\nItems\tWeights\tProfit");
     for(i=0;i<n;i++)
 printf("l\nx[%d]\tl%.0f\t\tl%0f",i,w[i],p[i]);

 knapsack(n,cap,w,p);
 getch();
}






void knapsack(int n,float m,float w[],float p[])
{
 float x[15],U,profit=0.0,weight=0.0;
 int i;
     U=m;
     for(i=0;i<n;i++)
      x[i]=0.0;

     for(i=0;i<n;i++)
     {
	 if(w[i]>U)
	  break;
	  x[i]=1.0;
	  U=U-w[i];
     }
     if(i<n)
     x[i]=U/w[i];
     printf("\nThe solution vector is :");
     for(i=0;i<n;i++)
      printf("\n%d\t\%.2f",i,x[i]);
     for(i=0;i<n;i++)
     {
	w[i]=w[i]*x[i];
	p[i]=p[i]*x[i];
     }
     for(i=0;i<n;i++)
     {
	profit=profit+p[i];
	weight=weight+w[i];
     }
printf("\nMaximum profit is:");
printf("\n\t\t%.2f",profit);
printf("\nMaximum weight is:");
printf("\n\t\t%.2f",weight);
}
