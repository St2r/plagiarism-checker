"""
2022-03-27 10:28:56
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1684 KB
Accepted | 1 * (35 / 100) | 3 ms | 1704 KB
Accepted | 1 * (60 / 100) | 12 ms | 1652 KB

"""

#include<stdio.h>
int a[1000];
int main(){
	int n;
	scanf("%d",&n);
	int b[n+1];
	int j;
	for(j=1;j<=n;j++){
		scanf("%d",&b[j]);
	int i;
	int cou=0;
	for(i=1;i<b[j];i++){
		if(b[j]%i==0){
			cou++;
			a[cou]=i;
		}
	}
	int sum=0;
	for(i=1;i<=cou;i++){
		sum=sum+a[i];
		
	}
	if(sum==b[j]){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	}
	return 0;
	
}