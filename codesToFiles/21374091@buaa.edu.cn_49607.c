"""
2022-03-26 10:51:14
AC
1.0
Accepted | 1 * (1 / 100) | 2 ms | 1600 KB
Accepted | 1 * (39 / 100) | 2 ms | 1664 KB
Accepted | 1 * (60 / 100) | 20 ms | 1600 KB

"""

#include <stdio.h>
int main()
{
	double n,a=1,s=0,i,j;
	scanf("%lf",&n);
	if(n<=20){
		
	
	for(j=1;j<=n;j++){
		for(i=1;i<=j;i++){
		a*=i;
	
	}
		s+=(1/a);
		a=1;
	}
	
	printf("%.14f",s+1);
}
else{
	printf("2.71828182845905");
}

	

	return 0;
}