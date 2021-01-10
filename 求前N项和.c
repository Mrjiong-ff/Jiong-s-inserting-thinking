#include<stdio.h>
int main(){
	int a;
	int i;
	double sum=0.0;
	scanf("%d",&a); 
	for(i=1;i<=a;i++){
		sum+=1.0/i;
	}
	printf("%f",sum);
}
