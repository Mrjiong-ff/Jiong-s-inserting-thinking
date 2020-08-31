#include<stdio.h>
int main()
{
	int X;
	int N=0;
	scanf("%d",&X); 
	//N++;
	//X/=10;
	while(X>0){
		N++;
		X/=10;
	
	}
		printf("%d\n",N);
	return 0;
}
