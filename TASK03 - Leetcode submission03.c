#include <stdio.h>

int main(){
	
	int n, i, j;
	int value = 0;
	do{
	printf("Enter row/column of a square matrix:(1-20)  ");
	scanf("%d", &n);
	if(n<1 || n>20){
		printf("Out of range! Re-enter\n");
	}
    }while(n<1 || n>20);
	
	int arr[n][n];
	
	for(i=0; i<n ; i++){
		for(j=0; j<n ; j++){
			do{
			printf("Enter element of Row %d and Column %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
			if(arr[i][j] > 1000 || arr[i][j]<-1000){
				printf("Element Value out of Range. Re-enter!\n");
			}
		    }while(arr[i][j] > 1000 || arr[i][j]<-1000);
		}
	}
	
	for(i=0; i<n ; i++){
		for(j=i; j<n ; j++){
			//transpose
			value = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = value;
		}
	}
	
	value=0;
	for(i=0; i<n ; i++){
		for(j=0; j<n/2 ; j++){
			value = arr[i][j];
			arr[i][j] = arr[i][n-j-1];
			arr[i][n-j-1] = value;
		}
	}
	
	printf("\n");
	printf("\n------------------\n");
	for(i=0; i<n ; i++){
		for(j=0; j<n ; j++){
	        printf("%4d |", arr[i][j]);
	    }
	    printf("\n------------------\n");
	}
	
	
	
	return 0;
}
