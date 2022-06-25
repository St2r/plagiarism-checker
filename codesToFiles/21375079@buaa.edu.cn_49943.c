"""
2022-03-27 14:16:07
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 3 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include<stdio.h>
int main(){
	int n,i,j;
 double b=1;double c=1;
   scanf("%d",&n);
   if(n<17){
   
   for(i=1;i<=n;i++)
   {
    for(j=i;j>0;j--)
	{
		b=b/j; 
	}
        c=c+b;
         b=1;
   }
    printf("%.14f\n",c);}
    else
    printf("2.71828182845905\n");
    return 0;
}