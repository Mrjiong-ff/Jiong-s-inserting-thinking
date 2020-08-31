#include<stdio.h>
int main()
{
	int x;
	int y;
	scanf("%d",&x);
	int t=x; 
	
	while(x>1)
	{
		x/=2;
		y++;
	}
	printf("log2 %d=%d",t,y);
	return 0;
}
