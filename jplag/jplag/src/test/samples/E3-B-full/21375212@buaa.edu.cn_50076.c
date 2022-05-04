"""
2022-03-26 08:17:35
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1628 KB

"""

#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main ()
{
	int n;
	int i,j,temp,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&temp);
		for(j=1;j<temp;j++){
			if(temp%j==0){
				sum+=j;
			}
		}
		if(sum==temp){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		sum=0;
	}
	return 0;
}