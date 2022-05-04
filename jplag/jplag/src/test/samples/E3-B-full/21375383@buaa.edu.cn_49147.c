"""
2022-03-27 15:58:25
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1700 KB
Accepted | 1 * (1 / 4) | 2 ms | 1696 KB
Accepted | 1 * (1 / 4) | 2 ms | 1700 KB
Accepted | 1 * (1 / 4) | 7 ms | 1608 KB

"""

#include <stdio.h>
int main()
{
int n,a[1000],i,j,k[1000];
i=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%d",&a[i]);
	k[i]=0;
}
i=1;
for(i=1;i<=n;i++){
	for(j=1;j<a[i];j++){
		if(a[i]%j==0){
			k[i]+=j;
		}
	}
	if(k[i]==a[i]){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
return 0;
}