"""
2022-03-26 09:33:50
AC
1.0
Accepted | 1 * (5 / 100) | 8 ms | 1664 KB
Accepted | 1 * (35 / 100) | 2 ms | 1528 KB
Accepted | 1 * (60 / 100) | 14 ms | 1588 KB

"""

#include <stdio.h>

int main(){
	int n,b[101],count=0;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++)
	{
  		for(int j=1;j<b[i];j++)
		{
			if(b[i]%j==0)
			{
				count+=j;
			}
		}
		if(count==b[i])
		printf("YES\n");
		else 
		printf("NO\n");
		count=0;
	}
	return 0;
}