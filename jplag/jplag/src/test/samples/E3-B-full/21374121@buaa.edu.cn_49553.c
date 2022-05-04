"""
2022-03-27 12:55:37
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1636 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 2 ms | 1524 KB

"""

#include<stdio.h>
int main(){
	int n,num,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		sum=0;
		scanf("%d",&num);
		for(int j=1;j<num;j++){
			if(num%j==0) sum+=j;
		}
		if(sum==num) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}