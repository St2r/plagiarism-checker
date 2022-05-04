"""
2022-03-26 12:49:19
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1648 KB
Accepted | 1 * (35 / 100) | 18 ms | 1548 KB
Accepted | 1 * (60 / 100) | 11 ms | 1540 KB

"""

#include <stdio.h>

int main(){
	int n;
	int m;
	int sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&m);
		if(m==1){
			printf("YES\n");
		}
		else{
			for(int j=1;j<=m/2;j++){
			    if(m%j==0){
				    sum+=j;
			    }
		    }
		    if(sum==m){
			    printf("YES\n");
			    sum=0;
		    }
		    else{
			    printf("NO\n");
			    sum=0;
		    }
		}
		
	}
	return 0;
}