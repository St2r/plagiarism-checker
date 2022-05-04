"""
2022-03-28 20:52:28
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1696 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include <stdio.h>
int main(){
	int x[1001]={0};
	int n,sum;
	scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&x[i]);
		}
		for(int j=1;j<=n;j++){
			sum=0;
			for(int k=1;k<=x[j];k++){
				if(((x[j]%k)==0))
					sum=sum+k;
				else
				continue;
			}
		if(sum==2*x[j])
			printf("YES\n");
		else
			printf("NO\n");
		}
	return 0;

}