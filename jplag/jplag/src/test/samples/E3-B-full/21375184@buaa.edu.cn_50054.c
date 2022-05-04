"""
2022-03-26 18:02:30
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1608 KB
Accepted | 1 * (35 / 100) | 2 ms | 1552 KB
Accepted | 1 * (60 / 100) | 4 ms | 1684 KB

"""

#include <stdio.h>

int main()
{
	int i=0,j,k,sum=0;
	int a[k];
	scanf("%d",&k);
	while(i<k){
		
		scanf("%d",&a[i]);
		i++;
	}
	i=0;	
	while(i<k){
		
		sum=0;
		for(j=1;j<a[i]-1;j++){
	    if(a[i]%j==0) sum+=j;
		}
		if(sum==a[i])printf("YES\n");
		else printf("NO\n");
		i++;
	}	    
		
	
	return 0;
}