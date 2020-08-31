#include<stdio.h>
int main(){
	int X;
	int Y;
	int count=0;
for(X=1;count<50;X++){

	
	for(Y=2;Y<X;Y++){
		if(X%Y==0)
			break;
	}
		if(Y<X){
			continue ;
		}else{
			printf("%d",X);
			count++;
			if(count%5==0){
				printf("\n");
			}
		}
	}
	return 0;
}

