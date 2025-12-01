#include <stdio.h>
#include <string.h>

int checkvowel(char str[], int i){

	if(str[i]== 'a'|| str[i]== 'e' || str[i]== 'i' || str[i] == 'o' || str[i] == 'u' ||
   	   str[i]== 'A'|| str[i]== 'E' || str[i]== 'I' || str[i] == 'O' || str[i] == 'U'){
   	   	
   	   	return 1;
   	}
   	else{
   		return 0;
	}
}

void reverse(char arr[]){
	int i;
	for(i=0 ; i<strlen(arr)/2 ; i++){
		int firstValue = arr[i];
		int secondValue = arr[strlen(arr) - i -1];
		arr[i] = secondValue;
		arr[strlen(arr) - i -1] = firstValue;
	}
}

int main(){
	
	char str[100];
	scanf("%[^\n]", str);
	char vowels[100];
	int i, j;
	int index = 0;
	
	for(i=0 ; i<strlen(str) ; i++){
		if(checkvowel(str, i)){
			vowels[index] = str[i];
			index++;
		}
	}
	
	reverse(vowels);
	
	index = 0;
	for(i=0 ; i<strlen(str) ; i++){
		if(checkvowel(str, i)){
			str[i] = vowels[index];
			index++;
		}
		printf("%c ", str[i]);
	}

	return 0;
}
