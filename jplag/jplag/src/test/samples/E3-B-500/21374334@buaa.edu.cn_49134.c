"""
2022-03-26 08:24:49
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1688 KB
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 3 ms | 1640 KB


"""

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
int n;
int num;
int cnt=1;
int i;
int k;
scanf("%d",&n);
while(n--){
	scanf("%d",&num);
	cnt=1;
	for(i=2;i<num;i++){
		k=num%i;
		if(k==0){
			cnt+=i;	
		}
	}
	if(cnt==num)
	printf("YES\n");
	else 
	printf("NO\n");
}
return 0;
}