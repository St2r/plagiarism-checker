"""
2022-03-29 22:14:23
CE
0.0
main.c: In function 'main':
main.c:6:2: error: 'cin' undeclared (first use in this function); did you mean 'main'?
  cin>>n;
  ^~~
  main
main.c:6:2: note: each undeclared identifier is reported only once for each function it appears in
main.c:15:3: error: 'cout' undeclared (first use in this function)
   cout<<"yes";
   ^~~~
main.c: At top level:
main.c:20:9: error: stray '\345' in program
 package 判断是否为完全数;
         ^
main.c:20:10: error: stray '\210' in program
 package 判断是否为完全数;
          ^
main.c:20:11: error: stray '\244' in program
 package 判断是否为完全数;
           ^
main.c:20:12: error: stray '\346' in program
 package 判断是否为完全数;
            ^
main.c:20:13: error: stray '\226' in program
 package 判断是否为完全数;
             ^
main.c:20:14: error: stray '\255' in program
 package 判断是否为完全数;
              ^
main.c:20:15: error: stray '\346' in program
 package 判断是否为完全数;
               ^
main.c:20:16: error: stray '\230' in program
 package 判断是否为完全数;
                ^
main.c:20:17: error: stray '\257' in program
 package 判断是否为完全数;
                 ^
main.c:20:18: error: stray '\345' in program
 package 判断是否为完全数;
                  ^
main.c:20:19: error: stray '\220' in program
 package 判断是否为完全数;
                   ^
main.c:20:20: error: stray '\246' in program
 package 判断是否为完全数;
                    ^
main.c:20:21: error: stray '\344' in program
 package 判断是否为完全数;
                     ^
main.c:20:22: error: stray '\270' in program
 package 判断是否为完全数;
                      ^
main.c:20:23: error: stray '\272' in program
 package 判断是否为完全数;
                       ^
main.c:20:24: error: stray '\345' in program
 package 判断是否为完全数;
                        ^
main.c:20:25: error: stray '\256' in program
 package 判断是否为完全数;
                         ^
main.c:20:26: error: stray '\214' in program
 package 判断是否为完全数;
                          ^
main.c:20:27: error: stray '\345' in program
 package 判断是否为完全数;
                           ^
main.c:20:28: error: stray '\205' in program
 package 判断是否为完全数;
                            ^
main.c:20:29: error: stray '\250' in program
 package 判断是否为完全数;
                             ^
main.c:20:30: error: stray '\346' in program
 package 判断是否为完全数;
                              ^
main.c:20:31: error: stray '\225' in program
 package 判断是否为完全数;
                               ^
main.c:20:32: error: stray '\260' in program
 package 判断是否为完全数;
                                ^
main.c:20:1: warning: data definition has no type or storage class
 package 判断是否为完全数;
 ^~~~~~~
main.c:20:1: warning: type defaults to 'int' in declaration of 'package' [-Wimplicit-int]
main.c:22:1: error: unknown type name 'import'; did you mean 'short'?
 import java.util.Scanner;
 ^~~~~~
 short
main.c:22:12: error: expected '=', ',', ';', 'asm' or '__attribute__' before '.' token
 import java.util.Scanner;
            ^
main.c:24:1: error: unknown type name 'public'; did you mean 'putc'?
 public class Perfect_number {
 ^~~~~~
 putc
main.c:24:14: error: expected '=', ',', ';', 'asm' or '__attribute__' before 'Perfect_number'
 public class Perfect_number {
              ^~~~~~~~~~~~~~


"""

#include<stdio.h>

int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=1; i<n; i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
		cout<<"yes";
	else
		cout<<"no";
	return 0;
}
package 判断是否为完全数;

import java.util.Scanner;

public class Perfect_number {
	public static void main(String[] args) {
		int sum=0;
		Scanner input=new Scanner(System.in);
		int n=input.nextInt();
		for(int i=1; i<n; i++) {
			if(n%i==0) {
				sum+=i;
			}
		}
		if(sum==n) {
			System.out.println("yes");
		}
		else {
			System.out.println("no");
		}
	}
}