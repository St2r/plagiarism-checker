"""
2022-03-26 08:29:46
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1616 KB
Accepted | 1 * (35 / 100) | 6 ms | 1532 KB
Accepted | 1 * (60 / 100) | 3 ms | 1588 KB

"""

#include<stdio.h>

int main()
{
	int k;
	scanf("%d",&k);
	for(int j=0;j<k;j++){

	
	int n;
	scanf("%d",&n);
	int a[n];
	a[0]=1;
	int sum=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){a[i]=i;
		}else{a[i]=0;}
		sum=sum+a[i];
	}
	if(sum==n){printf("Yes\n");
	}else{printf("No\n");
	}	}
 }