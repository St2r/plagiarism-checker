"""
2022-03-29 23:33:27
CE
0.0
main.c: In function 'f':
main.c:4:6: warning: type of 'n' defaults to 'int' [-Wimplicit-int]
  int f(n){
      ^
main.c:8:6: error: 'n' redeclared as different kind of symbol
  int n;
      ^
main.c:4:6: note: previous definition of 'n' was here
  int f(n){
      ^
main.c:12:3: error: 's' undeclared (first use in this function)
   s*=i;
   ^
main.c:12:3: note: each undeclared identifier is reported only once for each function it appears in
main.c: In function 'main':
main.c:18:18: error: 'n' undeclared (first use in this function)
  for (int i=1;i<=n;i++){
                  ^
main.c: In function 'main':
main.c:22:18: error: 'sum' undeclared (first use in this function)
 printf("%.14f\n",sum);
                  ^~~


"""

#include<stdio.h>
int main()
{
	int f(n){
		
	

	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		s*=i;
	}
	return s;
}
int main(){
	int sum=0;
	for (int i=1;i<=n;i++){
		sum+=1/f(n);
	}
}
printf("%.14f\n",sum);
return 0;
}