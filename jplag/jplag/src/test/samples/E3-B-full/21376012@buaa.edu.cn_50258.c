"""
2022-03-26 09:53:36
AC
1.0
Accepted | 1 * (5 / 100) | 6 ms | 1648 KB
Accepted | 1 * (35 / 100) | 11 ms | 1708 KB
Accepted | 1 * (60 / 100) | 11 ms | 1676 KB

"""

#include <stdio.h>
int main ()
{
	int a[107];
	int n,i,j,k=1,l=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		sum=0;
		k=1;
		while(k<a[j]) {
			l=a[j]%k;
		if(l==0) {
			sum+=k;
		}
		k++;
	}
	if(sum==a[j]){
		printf("YES\n");
	}
	if(sum!=a[j]){
		printf("NO\n");
    }
}
	return 0;
 }