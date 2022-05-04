"""
2022-03-29 21:55:32
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1728 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1736 KB

"""

#include <stdio.h>


int main() {
	int n,a[101],i,j,com=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	
		for(j=1;j<a[i];j++){
			if((a[i]%j)==0){
				com=com+j;
			}
		}
		if(com==a[i]){
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		com=0;
}
	
	return 0;
}