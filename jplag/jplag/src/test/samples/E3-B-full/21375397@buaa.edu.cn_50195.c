"""
2022-03-27 20:26:23
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1616 KB
Accepted | 1 * (35 / 100) | 14 ms | 1536 KB
Accepted | 1 * (60 / 100) | 15 ms | 1568 KB

"""

#include <stdio.h> 

int main()
{
	int n,b,i,k,j,s;
	int a[n];
	i=0;
	scanf("%d\n",&n);
	while(i<=n-1)
	{
		scanf("%d",&a[i]);
        i++;
	}
	k=0;
	while(k<=n-1)
	{
		s=0;
		for(b=1;b<=a[k]/2;b++)
		{
			if(a[k]%b==0)
			s=s+b;
		}
			if(a[k]==s)
			printf("YES\n");
			else
			printf("NO\n");
			k++;	
	}
    return 0;
}