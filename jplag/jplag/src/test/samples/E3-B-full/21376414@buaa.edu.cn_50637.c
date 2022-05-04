"""
2022-03-28 14:58:11
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 5 ms | 1680 KB

"""

#include <stdio.h>
int main(){
	int n,p[100];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	int k,s[100];
	
	
	
	for(i=0;i<n;i++){
		s[i]=0;
		for(k=1;k<p[i];k++){
				if(p[i]%k==0){
			s[i]=s[i]+k;
			
		}
		
		}
		
	
	}
	for(i=0;i<n;i++){
		if(p[i]==1){
		printf("NO\n");
	}
    else
		if(s[i]==p[i])
	printf("YES\n");
	else
	printf("NO\n");
	
	}
	
	return 0;
}