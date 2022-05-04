"""
2022-03-28 11:14:47
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define prn(x) printf("%d",x)
int main()
{
	int n,j,s=0,i,data;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&data);
	for(j=1;j<data;j++)
	{
		if((data%j)==0){
			s+=j;
		}
		}
		if(s==data)
		{printf("YES\n");
		}
		else{
			printf("NO\n");
		s=0;
	}
    }
	return 0;
}