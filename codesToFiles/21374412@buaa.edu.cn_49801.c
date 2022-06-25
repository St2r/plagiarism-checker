"""
2022-03-26 16:05:28
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1664 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double s=1,sum=0;
	if(n<=20){
	
	for(int i=1;i<=n;i++){
		s*=i;
	}
	for(int j=n;j>0;j--){
		sum+=1.0/s;
		s=s/j*1.0;
	}
	printf("%.14f",sum+1);
}
else{
		for(int i=1;i<=20;i++){
		s*=i;
	}
	for(int j=20;j>0;j--){
		sum+=1.0/s;
		s=s/j*1.0;
	}
	printf("%.14f",sum+1);
	
}
	return 0;
}