"""
2022-03-26 16:29:22
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 3 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 3 ms | 1556 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
double jc(int b){
    double result=1;
    for (int i=1; i<=b; i++) {
        result=result*i*1.0;
    }
    return result;
}

int main(){
 int i,n,num;
 double sum=2;
 scanf("%d",&n);
 if(n<=30){
 
 for(i=2;i<=n;i++){
  sum=sum+1.0/(double)(jc(i));

 }
 printf("%.14lf\n",sum);
}
else{
	printf("2.71828182845905");
}


 return 0;
}