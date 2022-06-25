"""
2022-03-26 10:13:25
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (1 / 10) | 12 ms | 1696 KB
Accepted | 1 * (2 / 10) | 11 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 15 ms | 1640 KB

"""

#include<stdio.h>
int main()
{
	int a,i,j; double b=1;double c=1;
	scanf("%d",&a);
	if(a>=20){
		printf("2.71828182845905");
	}else{
	for(i=1;i<=a;i++)
	{
	for(j=i;j>0;j--)
	{
		b=b/j; 
	}
        c=c+b;
         b=1;
	}
    printf("%.14f\n",c);
	}
    return 0;
}