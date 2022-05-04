"""
2022-03-29 19:50:13
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1628 KB
Accepted | 1 * (35 / 100) | 1 ms | 1572 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include <stdio.h> 
int main() 
{
    int a,i,j=0,n,k;
    scanf("%d",&n);
    for(k=0;k<n;k++){

    scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		j=j+i;
	}
	if(a==j)
	printf("YES\n");
	else
	printf("NO\n");
	j=0;
	}	
    return 0;
}