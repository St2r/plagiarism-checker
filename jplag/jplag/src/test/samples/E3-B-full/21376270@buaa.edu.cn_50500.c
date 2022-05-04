"""
2022-03-26 16:24:40
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1656 KB
Accepted | 1 * (35 / 100) | 12 ms | 1652 KB
Accepted | 1 * (60 / 100) | 20 ms | 1492 KB

"""

#include<stdio.h>

int WQ(int a){
	int i,n,sum=0;
	n=a;
	for(i=1;i<n;i++){
		if((a%i)==0){
			sum+=i;
		}
		else{
			sum=sum;
		}
	}
	return sum;
}

int main(){
	
	int n,i;
	
	int a[100];
	int b[100];
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=WQ(a[i]);
		
		if(b[i]==a[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
}