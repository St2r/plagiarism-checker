"""
2022-03-27 18:27:28
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1708 KB
Accepted | 1 * (35 / 100) | 3 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1696 KB

"""

#include<stdio.h>
#include<ctype.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	int x,i=1,h,sum;
	while(i<=n){
		scanf("%d",&x);
		h=1,sum=0;
		while(h<x){
			if(x%h==0){sum=sum+h;
			}
			h++;
		}
		if(sum==x){printf("YES\n");
		}
		else{printf("NO\n");
		}
		i++;
	}
	
	return 0; 
}