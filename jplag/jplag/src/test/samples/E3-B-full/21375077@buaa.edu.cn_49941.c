"""
2022-03-26 15:56:25
AC
1.0
Accepted | 1 * (5 / 100) | 14 ms | 1544 KB
Accepted | 1 * (35 / 100) | 2 ms | 1612 KB
Accepted | 1 * (60 / 100) | 16 ms | 1652 KB

"""

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>//注意：这些header会增加运行时间，如果不要用，尽量删掉防止出现TLE 
int main(){
	int n,a;
	scanf("%d",&n);
	int i;
	
	while(n--){
		int sum=0;//边循环判断边计算和 
		scanf("%d",&a);
		for(i=1;i<a;i++){
			if(a%i==0)sum+=i;
		}
		if(sum==a)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}