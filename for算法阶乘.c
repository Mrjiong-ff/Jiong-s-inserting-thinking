#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int i=1;
	int fact=1;
	for(i=1;i<=x;i++){
		fact*=i;
	}
	printf("%d!=%d",x,fact);
	return 0;
}
