#include<stdio.h>
int main(){
	int x,y;
	int sum;
	int avg;
	int b[3];
	int a[3][5];
	for(x=1;x<3;x++){
		for(y=1;y<5;y++){
		
		printf("enter the score");
		scanf("%d",&a[x][y]);
		sum+=a[x][y];
}
	b[x]=sum/5;
	sum=0;
}
avg=(b[0]+b[1]+b[2])/3;
printf("chinese:%d,math:%d,english:%d\n",a[0],a[1],a[2]);
printf("total:%d",avg);
return 0;
}
