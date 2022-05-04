"""
2022-03-26 23:53:03
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1560 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int k=1;
		for(int j=2;j<a[i]/2;j++){
			
			if(a[i]%j == 0 && a[i]/j<a[i]/2)
			k =k+j;
			else if(a[i]%j == 0 && a[i]/j>=a[i]/2)
			k=k+j+a[i]/j;
		
	}
	
	if(k == a[i] ){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
	return 0;
 }