#include<stdio.h>
#include<conio.h>
#define tonum(c) (c >= 'A' && c <= 'Z' ? c - 'A' : c - 'a' + 26)

int mod(int a,int p,int m)
{
 int sqr;

 if (p == 0)
  return 1;

 sqr = mod(a,p/2,m) % m;
 sqr = (sqr * sqr) % m;

 if (p & 1)
  return ((a % m) * sqr) % m;
 else
  return sqr;
}


int RabinKarpMatch(char *T,char *P,int d,int q)
{
 int i,j,p,t,n,m,h,found;
 n = strlen(T);
 m = strlen(P);
 h = mod(d,m-1,q);
 p = t = 0;
 for (i=0; i< m; i++)
 {
  p = (d*p + tonum(P[i])) % q;
  t = (d*t + tonum(T[i])) % q;
 }
 for (i=0; i<= n-m; i++)
 {
  if (p == t)
  {
   found = 1;

   for (j=0; j < m; j++)
    if (P[j] != T[i+j])
    {
     found = 0;
     break;
    }

   if (found)
    return i;
  }
  else
  {
   t = (d*(t - ((tonum(T[i])*h) % q)) + tonum(T[i+m])) % q;
  }
 }
return -1;
}



void main()
{

 char *str;
 char *p;
 int ans,q;
 clrscr();
 printf("\n Enter String:");
 gets(str);
 printf("\n Enter Pattern you want to search into string:");
 gets(p);
 printf("\n Enter value of q:");
 scanf("%d",&q);
 ans=RabinKarpMatch(str,p,10,q);
 if(ans==-1)
  printf("\n Pattern is not found.");
 else
  printf("\n Pattern is found at displacement:%d",ans);
getch();
}
