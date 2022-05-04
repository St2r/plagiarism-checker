"""
2022-03-27 19:40:51
WA
0.01
Accepted | 1 * (1 / 100) | 2 ms | 1636 KB
Wrong Answer | 0 * (39 / 100) | 3 ms | 1624 KB
Wrong Answer | 0 * (60 / 100) | 4 ms | 1636 KB

B

"""

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int num,sum=0;
		scanf("%d",&num);
		for(int a=1;a<num;a++){
			if((num%a)==0) sum+=a;
		}
		if(sum==num) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}