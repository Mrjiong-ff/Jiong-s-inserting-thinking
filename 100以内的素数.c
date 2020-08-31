#include<stdio.h>
int main(){
	int X;
	int Y;
for(X=1;X<=100;X++){

	
	for(Y=2;Y<X;Y++){
		if(X%Y==0)
			break;
	}
		if(Y<X){
			continue ;
		}else{
			printf("%d",X);
		}
	}
	return 0;
}

