"""
2022-03-28 20:49:34
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1576 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 2 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int a[101], n, i=0, j, s, m=0;
	scanf("%d", &n);
	while(i<n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	
	i=0;
		j=1;
		while(j<a[i])
		{
			if(a[i]%j==0)
			{
				s=j;
				m=m+s;
			}
			j=j+1;
		}
		if(a[i]==m)
		    printf("YES");
		else
		    printf("NO");
	    m=0;
	    i=i+1;
	while(i<n)
	{
		j=1;
		while(j<a[i])
		{
			if(a[i]%j==0)
			{
				s=j;
				m=m+s;
			}
			j=j+1;
		}
		if(a[i]==m)
		    printf("\nYES");
		else
		    printf("\nNO");
	    m=0;
	    i=i+1;
	}
	return 0;
}