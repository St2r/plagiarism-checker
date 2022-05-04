"""
2022-03-29 08:16:23
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 2 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n,x;
	int i;
	scanf("%d\n",&n);
	if((n>=0)&&(n<=100)){
	while(n--){
		int sum=0;
		scanf("%d",&x);
		if((x>=1)&&(x<=10000)){
		for(i=1;i<x;i++)	
		{
			if(x % i== 0){
				sum+=i;
			}
		}

	if(sum==x){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
}
}
}
	return 0;
}