#include <stdio.h>
#include<string.h>


int palindrome(char str[]){
	int i;
	for(i=0; i<=strlen(str)/2; i++){
		if(str[i] == str[strlen(str) - i-1]){
            continue;
		}
		else{
			return 0;
		}
	}
	return 1;
}

int main(){
	
	int count, i, j;
	do{
	printf("Enter the count of words to check first palindrome occurence from:  ");
	scanf("%d", &count);
	if(count>100){
		printf("You can only check for max of 100 strings. Re-enter count");
	}
    }while(count > 100);
    
	char words[count][100];
	int found = 1;
	
	printf("Enter words in lower case only!\n");
	for(i=0 ; i<count ; i++){
		printf("Enter word %d:  ", i+1);
		scanf(" %[a-z]", words[i]);
	}
	
	
	for(i=0 ; i<count ; i++){ 
	    if( palindrome(words[i]) ){
	    	printf("\nFirst Palindrome occured is: '%s'", words[i]);
	    	return 0;
		}
	}
	printf("\nNo palindromic strings exists.");
	
	return 0;
}
