"""
2022-03-27 22:46:46
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1616 KB
Accepted | 1 * (35 / 100) | 2 ms | 1644 KB
Accepted | 1 * (60 / 100) | 4 ms | 1600 KB

"""

#include <stdio.h>
int main(){
	int n,k,a,b,m,sum;
	scanf("%d",&n);
	int y[100]={0};
	while(n--){
		sum=0;m=0;k=1;
		scanf("%d",&a);
		for(k=1;k<a;k++){
			b=a%k;
			if(b==0)
			{y[m]=k;
			m=m+1;}
			}
			while(m--){
				sum=sum+y[m];
	}
			if(sum==a)
				printf("YES\n");
				else printf("NO\n");
				
	}
	return 0;
}