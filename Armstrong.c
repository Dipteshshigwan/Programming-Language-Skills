#include<stdio.h>
int main()
{
    int n, m, temp, unit, unitp, sum = 0, count = 0 ;

    scanf("%d", &n);
    m = n;
	temp = n;
    
    while(n>0)
    {
        unit = n%10;
        count++;
        n = n/10;
    }

    while(m>0)
    {
        unitp = m%10;
        sum = sum + pow(unitp, count);
        //printf("%d",sum);
        m = m/10;
    }

    if(sum == temp)
        printf("Armstrong");
    else
        printf("Not Armstrong");

}