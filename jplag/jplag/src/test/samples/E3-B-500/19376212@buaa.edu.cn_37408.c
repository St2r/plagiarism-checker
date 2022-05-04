"""
2022-03-26 08:28:39
AC
1.0
Accepted | 1 * (1 / 4) | 9 ms | 1604 KB
Accepted | 1 * (1 / 4) | 8 ms | 1648 KB
Accepted | 1 * (1 / 4) | 15 ms | 1652 KB
Accepted | 1 * (1 / 4) | 10 ms | 1640 KB

"""

#include<stdio.h>
#define N 105
int main()
{
	int n,i,j,sum=0;
	
	scanf("%d",&n);
	unsigned int ch[N];
	for(i=0;i<n;i++){
		scanf("%u",&ch[i]);
		
		for(j=1;j<ch[i];j++){
			if(ch[i]%j==0){
				sum+=j;
			}
		}
		if(sum==ch[i]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	
	
	
	return 0;	
}