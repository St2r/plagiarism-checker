"""
2022-03-28 18:49:28
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1696 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include<stdio.h>
int main(){
	int n,a[100],i,j,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=0;
		for(j=1;j<=(a[i]/2);j++){
			if((a[i]%j)==0)
			    sum+=j;
		}
		if(sum==a[i])
		    printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}