"""
2022-03-26 11:40:41
AC
1.0
Accepted | 1 * (1 / 10) | 14 ms | 1608 KB
Accepted | 1 * (1 / 10) | 14 ms | 1600 KB
Accepted | 1 * (2 / 10) | 9 ms | 1592 KB
Accepted | 1 * (2 / 10) | 3 ms | 1656 KB
Accepted | 1 * (4 / 10) | 11 ms | 1648 KB

"""

#include<stdio.h>

int main(){
	int n,i,j;double tp=1,ans=0;
	scanf("%d",&n);
	if(n>=17){
		n=17;
	}
	for(i=1;i<n+1;i++){
		tp=1.0;
		for(j=i;j>0;j--){
			tp*=j*1.0;
		}
		ans+=1/tp;
	}
	printf("%.14lf",ans+1);
	
	return 0;
}