"""
2022-03-29 22:57:57
CE
0.0
main.c: In function 'main':
main.c:7:5: error: expected '=', ',', ';', 'asm' or '__attribute__' before 'scanf'
     scanf("%u",&n);
     ^~~~~
main.c:12:6: error: 'c' undeclared (first use in this function)
      c=1.0/p;
      ^
main.c:12:6: note: each undeclared identifier is reported only once for each function it appears in


"""

#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    unsigned long long int n,i=1,k=1,p=1;
    double e=1.0,c
    scanf("%u",&n);
    while(k<=n || k<=17){
        while(i<=k){
     p=p*i;
     i++;
     c=1.0/p;  
  e=e+c;
     }
  k++;   
 }
printf("%.14lf",e);
 return 0;
}