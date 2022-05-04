"""
2022-03-26 10:41:21
AC
1.0
Accepted | 1 * (5 / 100) | 15 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 12 ms | 1636 KB

"""

#include<stdio.h>
int iswqs(int x){
	int i,j=0,k;
	int sum=0;
	int a[1000]={0};
	for(i=1;i<x;i++){
		if(x%i==0){
			a[j]=i;
			j+=1;
		}
	}
	for(i=0;i<j;i++){
		sum=sum+a[i];
	}
	if(x==sum) k=1;
	else k=0;
	return k;
}
int main(){
	int n;
	scanf("%d",&n);
	int x[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		if(iswqs(x[i])) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}