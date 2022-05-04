"""
2022-03-26 10:04:03
AC
1.0
Accepted | 1 * (1 / 4) | 10 ms | 1652 KB
Accepted | 1 * (1 / 4) | 14 ms | 1632 KB
Accepted | 1 * (1 / 4) | 12 ms | 1656 KB
Accepted | 1 * (1 / 4) | 10 ms | 1652 KB

"""

#include<stdio.h>
int main(){
	int n,x,i,j,ans=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		for(j=2;j<=(x/2);j++){
		
		if((x%j)==0)
		ans+=j;
		else
		continue;
		}
		if(ans==x)
		printf("YES");
		else
		printf("NO");	
	}
	
	return 0;
}