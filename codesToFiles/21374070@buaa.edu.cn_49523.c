"""
2022-03-29 10:45:42
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 0 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 1 ms | 1692 KB

"""

#include <stdio.h>

long long jiecheng(int x){
	int i;
	long long int ch=1;
	if(x==1||x==0){
		return 1;
	}
	else{
		for(i=2;i<=x;i++){
			ch=ch*i;
		}
	}
	return ch;
}

int main(){
	int n,i,j;
	double sum=0;
	scanf("%d",&n);
	if(n>=20){
		printf("2.71828182845905");
	}
	else{
		for(i=0;i<=n;i++){
		sum+=1.0/jiecheng(i);
	}
	printf("%.14f",sum);
	}
	return 0;
}