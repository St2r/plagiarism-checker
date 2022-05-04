"""
2022-03-29 23:27:44
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1988 KB
Accepted | 1 * (35 / 100) | 0 ms | 2052 KB
Accepted | 1 * (60 / 100) | 1 ms | 2136 KB

"""

#include<stdio.h>
#include<math.h>
int main(){
	int a[105],n,i,j,k,q=1;
	scanf("%d",&n);
	for( i=1 ; i<=n ; i++)
    {
		scanf("%d\n",&a[i]);
	}
	for( j=1 ; j<=n ; j++)
	{
		for( k=2 ; k<sqrt((double)a[j]) ; k++)
        {
			if(a[j]%k==0)
            {
			   q+=(k+a[j]/k);
            }
		}
		if(a[j]==q)
        {
		printf("YES\n");
		}
		else printf("NO\n");
		q=1;
	}
	return 0;
}