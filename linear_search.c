#include <stdio.h>
void main(){
	int n,m,found = 0,count = 0;
	count++;
	count++;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	count++;
	int array[n];
	printf("Enter the numbers: ");
	for (int i = 0; i < n;i++){
		count++;
		scanf("%d",&array[i]);
		count++;
		}
	count++;
	printf("Enter the element to be searched: ");
	scanf("%d",&m);
	count++;
	for (int i = 0;i < n;i ++){
		count++;
		if (array[i] == m){
			count++;
			found = 1;
			count++;
			}
		}
	if (found == 1){
		count++;
		printf("The element is present\n");
		}
	else{
		count++;
		printf("The element is not found\n");
		}
	count++;
	count++;
	printf("The time complexity is %d\n",count);
	printf("The space complexity is %d\n",20+(4*n));
	}
