"""
2022-03-28 21:01:16
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1560 KB
Accepted | 1 * (35 / 100) | 1 ms | 1468 KB
Accepted | 1 * (60 / 100) | 2 ms | 1488 KB

"""

#include<stdio.h>
int read(){
    int f=1,w=0; char x=0;
    while(x<'0'||x>'9') {if (x=='-') f=-1; x=getchar();}
    while(x>='0'&&x<='9'&&x!=EOF) {w=(w<<3)+(w<<1)+(x^48); x=getchar();}
    return f*w;
}
int main(){
    int T=read();
    while(T--){
	int n=read(),Ans=0;
	for(int i=1;i<n;i++) if(!(n%i)) Ans+=i;
	if(Ans==n) printf("YES\n");
	else printf("NO\n");
    }
}