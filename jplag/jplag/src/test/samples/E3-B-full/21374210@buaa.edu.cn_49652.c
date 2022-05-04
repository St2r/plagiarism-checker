"""
2022-03-27 15:20:40
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1552 KB
Accepted | 1 * (1 / 4) | 6 ms | 1640 KB
Accepted | 1 * (1 / 4) | 3 ms | 1564 KB
Accepted | 1 * (1 / 4) | 3 ms | 1628 KB
0) | 2 ms | 1628 KB
Runtime Error (SIGSEGV) | 0 * (4 / 10) | 269 ms | 1432 KB

"""

#include <stdio.h>
int main(){
	int n,x;
	scanf("%d",&n);
	while(n--){
		int sum=0,p=0,a[1005],j=0;
		scanf("%d",&x);
		for(int i=1;i<=x;i++){
			for(int k=1;k<=x;k++){
				if(x==k*i){
				a[j]=i;
				j++;
				a[j]=k;
				j++;
				p=p+2;}
			}
		}
		j=0;
		for(j=0;j<p;j++)
		{
		sum=sum+a[j];}
	{
			if(sum==4*x)
		printf("YES\n");
		else
		printf("NO\n");}
	}
	return 0;
}