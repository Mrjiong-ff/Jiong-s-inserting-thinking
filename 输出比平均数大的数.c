#include<stdio.h>
int main(){
	double sum=0;
	int x;
	int cou=0;
	int number[100];
	scanf("%d",&x);
	while(x!=-1){
		number[cou]=x;
		//
	//	{
	//	int i;
	//	printf("%d",cou);
	//	for(i=0;i<=cou;i++){
	//		printf("%d\t",number[i]);
	//	}
	//	}
		//
		sum+=x;
		cou++;
		scanf("%d",&x);
	}

	if(cou>0){
		printf("%f\n",sum/cou);
		int i;
		for(i=0;i<cou;i++){
			if(number[i]>sum/cou){
				printf("%d\n",number[i]);
			}
		}
	}
	return 0;
}
