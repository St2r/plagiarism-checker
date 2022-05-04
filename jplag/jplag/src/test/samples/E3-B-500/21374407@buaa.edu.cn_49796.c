"""
2022-03-28 22:21:37
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1652 KB
Accepted | 1 * (60 / 100) | 2 ms | 1576 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
int x,a=0,n;
scanf("%d",&n);
while(scanf("%d",&x)!=EOF){
for(int i=1;i<x;i++){
	if(x%i==0){
		a=a+i;
	}

} 
	if(x==a){
		printf("YES\n");
		a=0;
	}
	else{
	    printf("NO\n");
	    a=0;

	}
	    
}
 return 0;
}