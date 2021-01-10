#include<stdio.h>
int main()
{
	srand(time(0));
	int number=rand()%100;
	int count;
	int a;
	do{
		printf("put in a number"); 
		scanf("%d",&a);
		count++;
		if(a<number){
			printf("too small	");
		}	
		else 
		if(a>number){
			printf("too big		");
		}
	}while(a!=number);
	printf("congratulations,you use %d times to get this number",count);
	return 0;
}
