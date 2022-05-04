"""
2022-03-26 20:25:10
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 4 ms | 1616 KB
Accepted | 1 * (2 / 10) | 5 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB


"""

#include<stdio.h>
#include<math.h>
int main(){
	int n,x[1005],sum=0,i,p;
	scanf("%d",&n);
	for (p=0;p<n;p++){
		scanf("%d",&x[p]);
		for(i=1;i<x[p];i++){
			if(x[p]%i==0){
				sum+=i;
			//	printf("%d",i);
			}
		}if(sum==x[p]){
			printf("YES\n");
		}else {
			printf("NO\n");
		}
	}
	return 0;
}