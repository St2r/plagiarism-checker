"""
2022-03-27 21:34:49
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (4 / 10) | 3 ms | 1672 KB

"""

#include<stdio.h>
void main()
{
   int a,i,j; double b=1;double c=1;
   scanf("%d",&a);
   if(a<17){
        for(i=1;i<=a;i++)
   {
    for(j=i;j>0;j--)
	{
		b=b/j;
	}
        c=c+b;
         b=1;
   }
    printf("%1.14f\n",c);
   }
   else{
       int q,t; double y=1;double r=1;
        for(q=1;q<=17;q++)
   {
    for(t=q;t>0;t--)
	{
		y=y/t;
	}
        r=r+y;
         y=1;
   }
    printf("%1.14f\n",r);
   }
   return 0;
}