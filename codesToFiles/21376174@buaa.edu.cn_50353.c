"""
2022-03-27 14:23:56
AC
1.0
Accepted | 1 * (1 / 100) | 2 ms | 1556 KB
Accepted | 1 * (30 / 100) | 19 ms | 1700 KB
Accepted | 1 * (30 / 100) | 5 ms | 1532 KB
Accepted | 1 * (30 / 100) | 5 ms | 1572 KB
Accepted | 1 * (9 / 100) | 2 ms | 1540 KB

Runtime Error (SIGSEGV) | 0 * (1 / 8) | 279 ms | 1380 KB
Wrong Answer | 0 * (1 / 8) | 2 ms | 1628 KB
Accepted | 1 * (1 / 8) | 11 ms | 1600 KB

"""

#include<stdio.h>

int main()
{
   int a,b=1;
   double e=1;
   scanf("%d",&a);
   if(a>=17)
   a=17;
   for(int i=1;i<=a;i++)
   {
    for(int j=1;j<=i;j++)
	{
       b*=j;
      
    }
    
    e+=1.00000000000000/b;
	b=1; 
   }
   printf("%.14f\n",e);

   return 0;
}