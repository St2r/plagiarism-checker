"""
2022-03-27 13:51:46
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 2040 KB
Accepted | 1 * (35 / 100) | 2 ms | 2040 KB
Accepted | 1 * (60 / 100) | 4 ms | 2044 KB

"""

#include <stdio.h>
#include <math.h>

#define eps 1e-8
int main(){
	int i,j,k,n,m,p,sum=0;
	int s[100000]={0};
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for (k=1;k<=m/2;k++){
			if(m%k==0){
				s[k-1]=k;
			}
			else{
				s[k-1]=0;
			}
		}
		for(j=0;j<m;j++){
			sum=sum+s[j];
			}
			
			if(sum==m){
			printf("YES\n");
		}	
		else{
			printf("NO\n");
		}
		sum=0;
		for(p=0;p<m;p++){
			s[p]=0;
		}
	}
	
	return 0;
	

}