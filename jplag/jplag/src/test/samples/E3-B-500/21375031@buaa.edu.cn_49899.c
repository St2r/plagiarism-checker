"""
2022-03-29 19:24:14
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1600 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include <stdio.h> 
int main(){
	int n;
	int x[105];
	int a[105];
	scanf("%d",&n);
	
	int i;
	int j=1,sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		while(j<x[i]){
			if(x[i]%j==0){
				sum=sum+j;
			}else{
				sum=sum;
			}
			j++;
		}
		a[i]=sum;
		sum=0;
		j=1;	
	}	
	
	int k;
	for(k=0;k<n;k++){
		if(a[k]==x[k]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	
	
	return 0;
}