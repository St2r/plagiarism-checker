"""
2022-03-28 21:21:51
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1648 KB
Accepted | 1 * (60 / 100) | 2 ms | 1576 KB

"""

#include<stdio.h>

int main()

{int  n,i,a,j,x[105];
scanf("%d",&n) ;
for(i=0;i<n;i++){
	scanf("%d",&x[i]);
}
for(i=0;i<n;i++){
	for(j=1,a=0;j<x[i];j++){
		if(x[i]%j==0){
			a+=j;
		}
	}
	if(a==x[i]){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
return 0;

}