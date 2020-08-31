#include<stdio.h>
int main()
{
	int a, b; 
	//scanf("%d %d",&a,&b);
	charge(3,4);
	printf("%d %d",a,b);
	return 0;
}
void charge(int a, int b){
	int t;
	t=a;
	a=b;
	b=t;
	
}
