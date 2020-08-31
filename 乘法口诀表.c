#include<stdio.h>
int main(){
	int n;
	int i;
	int x;
	int y;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(y=1;y<=n;y++){
			x=i*y;
			printf("%d*%d=%d\n",i,y,x);	
		}
	}
	return 0;
}
