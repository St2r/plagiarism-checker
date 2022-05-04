"""
2022-03-26 22:28:27
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1640 KB
Accepted | 1 * (60 / 100) | 4 ms | 1700 KB

"""

#include <stdio.h>
int a(int x)
{
	int i;
	int sum=0;
	
	for (i=1;i<x;i++){
		if(x%i==0){
			sum+=i;
		}	
	}
	if(sum==x){
		return 1;
	}else{
		return 0;
	}
}


int main ()
{
	int n;
	int i;
	int x;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(a(x)==1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	return 0;
  }