"""
2022-03-27 00:31:56
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1556 KB
Accepted | 1 * (1 / 10) | 2 ms | 1548 KB
Accepted | 1 * (2 / 10) | 2 ms | 1600 KB
Accepted | 1 * (2 / 10) | 2 ms | 1644 KB
Accepted | 1 * (4 / 10) | 2 ms | 1644 KB

"""

#include<stdio.h>
#include<math.h>
int read(){
    int f=1,w=0; char x=0;
    while(x<'0'||x>'9') {if (x=='-') f=-1; x=getchar();}
    while(x>='0'&&x<='9'&&x!=EOF) {w=(w<<3)+(w<<1)+(x^48); x=getchar();}
    return f*w;
}
int main(){
    int n=read();
    double Ans=1.0,Tmp=1.0;
    for(int i=1;i<=n;i++){
	Ans+=1.0/Tmp,Tmp*=(i+1)*1.0;
	if(1.0/Tmp<=0.000000000000001) break;
    }
    printf("%.14lf",Ans);
}