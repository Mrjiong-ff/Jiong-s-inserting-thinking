#include<stdio.h>
int Max(int a,int b){
	int x;
	if(a>b){
		x=a;
	}else{
		x=b;
	}
	return x;
}
int main(){
	int a,b,c;
	//scanf("%d %d",&a,&b);
	c=Max(10,12);
	c=Max(c,8) ;
	printf("%d",c);
	return 0;
	
}
