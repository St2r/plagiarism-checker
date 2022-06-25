"""
2022-03-29 08:21:26
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (4 / 10) | 1 ms | 1652 KB

"""

#include<stdio.h> 
void main() 
{
 int a,i,j; double b=1;double c=1;
 scanf("%d",&a);
 if(a<18)
 { 
for(i=1;i<=a;i++)
 { 
for(j=i;j>0;j--) 
	{ 		
b=b/j; 	
} 
c=c+b; b=1; 
} 
printf("%.14f\n",c);
 } 
else
printf("2.71828182845905");
}