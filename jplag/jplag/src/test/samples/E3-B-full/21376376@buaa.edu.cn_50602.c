"""
2022-03-26 14:42:36
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1688 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 2 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int x[1010],j,s=0,k=0,l;
    for(i=0;i<n;i++){
    	scanf("%d",&x[i]);
    	j=x[i];
    	s=0;
    	k=0;
    	if(x[i]%2==0){
    		while(j%2==0){
    		j=j/2;
    		s=s+j;
    		k++;
			}
		for(l=0;l<=k;l++){
			s=s+(1<<l);
		}
		if(s==x[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		}
		else{
			printf("NO\n");
		}
	}
    return 0;
}