#include<stdio.h>
//#include<Windows.h>
int func(int a, int b, int c, int d, int e, int f, int g, int h){
	return a+b+c+d+e+f+g+h;
}
double a=0x1234124761547;
int main(){
	int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8;
	int res;
	res = func(a,b,c,d,e,f,g,h);
	printf("res=%d",res);
	return 0;
}

