"""
2022-03-28 00:03:07
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 4 ms | 1624 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))


int cifang(int a, int n)
      { if(n==0){
	  	return 1;
	  }
	  
	  else{
	  int c=1;
	  	for(int i=1;i<=n;i++){
		  	c=c*a;
		  }
		  return c;
	  }
      }


int main(){
	int n;
	int x;
	int a[110]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		x=0;
		for(int j=1;j<a[i];j++){
			if(a[i]%j==0){
				x=x+j;
			}
		}
		if(x==a[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}	
    return 0;	   	
}