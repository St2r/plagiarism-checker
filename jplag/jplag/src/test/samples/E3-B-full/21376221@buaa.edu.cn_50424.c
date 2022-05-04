"""
2022-03-29 23:10:43
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1748 KB
Accepted | 1 * (35 / 100) | 1 ms | 1744 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
 int n,a[n],c,d;
 scanf("%d",&n);
 for(int j=1;j<=n;j++){
	scanf("%d\n",&a[j]); //TODO
 }
 for(int k=1;k<=n;k++){
    c=0;
	for(int i=1;i<a[k];i++){
		d=a[k];
		if((d%i)==0){
			c=c+i;//TODO
		} //TODO
	}
	if(c==a[k]){
		printf("YES\n"); //TODO
	}else{
		printf("NO\n"); //TODO
	} //TODO
 }
 
 return 0;
}