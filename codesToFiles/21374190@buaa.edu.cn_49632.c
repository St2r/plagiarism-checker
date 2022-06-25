"""
2022-03-26 13:23:36
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include <stdio.h>
#include <math.h>


int main(){
	int i;
	double n=1;
	int N;
	double e=2;
	//puts("here");
	scanf("%d",&N);

	
	for(i=2;i<=N;i++){
		n*=i;
		e+=1.0/n;
		if(2.718281828459045-e<10E-17){
			break;
		}
		
	}

	printf("%.14lf",e);
	return 0;
}