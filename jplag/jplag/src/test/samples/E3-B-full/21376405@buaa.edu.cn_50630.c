"""
2022-03-26 12:35:28
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1684 KB
Accepted | 1 * (1 / 4) | 2 ms | 1656 KB
Accepted | 1 * (1 / 4) | 2 ms | 1604 KB
Accepted | 1 * (1 / 4) | 3 ms | 1712 KB


"""

#include<stdio.h>
int main()
{
	int n,i,num[200],m=1,S=0;
	scanf("%d",&n);
	for(int j=0;j<n;j++)
		scanf("%d",&num[i]);
	for(i=0;i<n;i++)
	{	
		S=0;
		for(m=1;m<num[i];m++)
			{
				if(num[i]%m==0)
				S=S+m;
			}
		if(S==num[i])
		printf("YES\n");
		
		else if(S!=num[i])
		printf("NO\n");
	
	}
	return 0;
}