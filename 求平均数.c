#include<stdio.h>
int main(){
	int a;
	int sum=0;
	int N=0;
	do{
	scanf("%d",&a);
	if(a!=-1){
		sum+=a;
		N++;
	}
	}while(a!=-1);
	printf("%d",sum);
	printf("Æ½¾ùÊı=%f",1.0*sum/N);
	return 0;
}
