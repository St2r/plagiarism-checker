"""
2022-03-28 21:25:10
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include<stdio.h>
int main(){
    double n,ans=1;
    scanf("%lf",&n);
    for(int j=1;j<=17&&j<=n;j++){
		double b=1;
 	   for(int i=1;i<=j;i++){
    		
    		b*=i;
		}
		ans+=1/b;
}
    printf("%.14f",ans);
    return 0;
}