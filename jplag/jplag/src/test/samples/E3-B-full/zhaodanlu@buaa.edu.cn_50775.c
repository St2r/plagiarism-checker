"""
2022-03-27 16:55:11
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1636 KB
Accepted | 1 * (35 / 100) | 11 ms | 1700 KB
Accepted | 1 * (60 / 100) | 11 ms | 1708 KB

"""

#include <stdio.h>
int main()
{
	int n,num;
	scanf("%d",&n);
	while(n--){
		int sum=0;
		scanf("%d",&num);
		for(int i=1;i<num;i++){
			if(num%i==0)
				sum=sum+i;
		}
		if(sum==num)
			printf("YES\n");
		else
		    printf("NO\n");
	}
	return 0;
 }