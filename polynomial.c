#include <stdio.h>

void main(){
	int n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	struct polynomial{
		int coefficient;
		int exponent;
		}a[n];
	for (int i = 0; i < n; i ++){
		printf("Enter the coefficient of term %d: \n",i+1);
		scanf("%d",&a[i].coefficient);
		printf("Enter the exponent of term %d: \n",i+1);
		scanf("%d",&a[i].exponent);
		}
	for (int i = 0; i < n;i++){
		if (a[i].coefficient < a[i+1].coefficient){
			
			}
		printf("%d",a[i].coefficient);
		printf("x");
		printf("^%d",a[i].exponent);
		if (n > 1){
			printf("+");
			}
		}
	}
