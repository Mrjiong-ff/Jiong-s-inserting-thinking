#include<stdio.h>
int main(){
	int X;
	scanf("%d",&X);
	int Y;
	if(X>1){
	
	for(Y=2;Y<X;Y++){
		if(X%Y==0)
			break;
	}
		if(Y<X){
			printf("不是素数") ;
		}else{
		printf("是素数");
		}
	}
	return 0;
}


