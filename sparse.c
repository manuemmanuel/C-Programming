#include <stdio.h>
void main(){
	int row,column,matrix[20][20],count = 0;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&row,&column);
	printf("Enter the matrix: \n");
	for (int i = 0; i < row;i++){
		for (int j = 0; j < column; j ++){
			scanf("%d",&matrix[i][j]);
			}
		}
	for (int i = 0; i < row;i++){
		for (int j = 0; j < column; j ++){
			if ( matrix[i][j] != 0){
				count++;
			}
		}
	}
	printf("The sparse matrix: \n");
	for (int i = 0; i < row;i++){
		for (int j = 0; j < column; j ++){
			printf("%d\t",matrix[i][j]);
			}
			printf("\n");
		}
	int tuple[count+1][3];
	tuple[0][0] = row;
	tuple[0][1] = column;
	tuple[0][2] = count;
	int a = 1;
	for (int i = 0;i < count+1;i++){
		for (int j = 0; j < 3; j++){
			if (matrix[i][j] != 0){
				tuple[a][0] = i;
				tuple[a][1] = j;
				tuple[a][2] = matrix[i][j];
				a++;
				}
			}
		}
	printf("The tuple matrix: \n");
	for (int i = 0; i < count+1;i++){
		for (int j = 0; j < 3; j ++){
			printf("%d\t",tuple[i][j]);
			}
			printf("\n");
		}
	
	
	}
