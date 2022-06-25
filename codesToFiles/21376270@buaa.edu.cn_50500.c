"""
2022-03-26 16:53:32
AC
1.0
Accepted | 1 * (1 / 10) | 15 ms | 1644 KB
Accepted | 1 * (1 / 10) | 14 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 11 ms | 1656 KB
Accepted | 1 * (4 / 10) | 14 ms | 1644 KB

"""

#include<stdio.h>

double M(int n){
	double a=1;
	double i;
	
	for(i=1;i<=n;i++){
		a*=(1/i);
	if(i>18){
		break;
	}
    }
	return a;
}

int main(){
	
	int n,i;
	double result,sum=1;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
	
	    sum+=M(i);
	
	if(i>18){
		break;
	}
}

    printf("%.14lf",sum);

}