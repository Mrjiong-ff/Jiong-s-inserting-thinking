#include<stdio.h>
int main()
{
	int a;
	int one, two, five;
	scanf("%d",&a);
	for(one=1;one<a*10;one++){
		for(two=1;two<a*10/2;two++){
			for(five=1;five<a*10/5;five++){
				if(one+two*2+five*5==a*10){
					printf("������%d��һ�� %d������ %d����Ǵճ� %dԪ",one,two,five,a); 
					goto out;
				}
			}
		}
	}
	out
				return 0; 
}
