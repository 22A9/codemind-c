#include<stdio.h>
int main()
{
    int n,r,t,s,c=0;
    scanf("%d",&n);
    t=n;
    s=n*n;
    while(s>0)
    {
        r=s%10;
        c=c+r;
        s=s/10;
    }
    if(t==c)printf("Neon Number");
    else printf("Not Neon Number");
}