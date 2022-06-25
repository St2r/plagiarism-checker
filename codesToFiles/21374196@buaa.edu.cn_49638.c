"""
2022-03-27 00:08:29
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 8 ms | 1656 KB
Accepted | 1 * (2 / 10) | 9 ms | 1708 KB
Accepted | 1 * (4 / 10) | 9 ms | 1692 KB

"""

#include<stdio.h>
int main() {
	int n=0,i=1,j=1;
    double e=1,temp=1,ans=1e-15;
    scanf("%d",&n);
   
    for(i=1;i-1<n;i++)
    {	for(j=1,temp=1;j-1<i;j++)
	{	temp=temp*j;}
		
		temp=1/temp;
		if(temp<ans)
		break;
		
    	e=e+temp;
}
	printf("%.14f",e);}