"""
2022-03-28 23:53:50
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1548 KB

"""

#include<stdio.h>
int main(){
	int n,s;
	int a[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int k=0,t=0;
		scanf("%d",&s);
		for(int j=1;j<=s/2;j++){
			if(s%j==0){
				a[k]=j;
				k++;
			}
		}
		for(int r=0;r<k;r++){
			t+=a[r];
		}
		if(t==s){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}