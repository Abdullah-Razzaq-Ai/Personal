#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int additive_digital=n , multiplicative_digital=n;
	int additive_persistance=0 , multiplicative_persistance=0;
//	Additive Digital Root
	while(additive_digital>9){
		int sum=0;
		while(additive_digital>0){
			sum+=additive_digital%10;
			additive_digital/=10;
		}
		additive_digital=sum;
		additive_persistance++;
	}
	printf("Additive Digital Root: %d\n",additive_digital);	
	printf("Additive Persistance: %d\n",additive_persistance);
//	Multiplicative Digital Root	
	while(multiplicative_digital>9){
		int product=1;
		while(multiplicative_digital>1){
			product*=multiplicative_digital%10;
			multiplicative_digital/=10;
		}
		multiplicative_digital=product;
		multiplicative_persistance++;
	}
	printf("Multiplicative Digital Root: %d\n",multiplicative_digital);	
	printf("Multiplicative Persistance: %d\n",multiplicative_persistance);
	return 0;
}
