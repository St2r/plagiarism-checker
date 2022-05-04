"""
2022-03-27 18:13:46
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1628 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include <stdio.h>
int main(){
	int n,i,j,k=1,x[105];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		for(j=2,k=1;j<=(x[i]/2);j++){
			if((x[i]%j==0)&&((x[i]/j)>=j)) {
				if((x[i]/j)>j) k+=(x[i]/j)+j;
				else k=k+j;
			}
		}

		if(k==x[i]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}