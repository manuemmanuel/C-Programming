#include <stdio.h>
void main(){
	int n,m,result,temp,key = 0,found=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int array[n],left = 0,right = n-1,middle;
	printf("Enter the elements: ");
	for (int i = 0;i < n;i++){
		scanf("%d",&array[i]);
		}
	for (int i = 0; i < n;i ++){
		if (array[i] = array[i+1]){
			temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
			}
		}
	printf("Enter the number to be searched: ");
	scanf("%d",&m);
	while (left <= right){
	middle = (left+right)/2;
		if (m == array[middle]){
			printf("The element is found\n");
			found = 1;
			break;
			}
		else if (m < array[middle]){
			left = 0;
			right = middle-1;
			}
		else if (m > array[middle]){
			left = middle+1;
			right = n-1;
			}
		}
	if (found == 0){
		printf("The element is not found\n");
		}
	}
