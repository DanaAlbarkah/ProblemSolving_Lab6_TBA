#include<stdio.h>
#include <stdlib.h>
int main(){
	char sentence[100];

	printf("Enter a sentenc:   ");
	scanf("%[^\n]", sentence);
	  int length = 0;
    while (sentence[length] != '\0') {
        length++;
    }

	char *reversed = (char *)malloc((length + 1) * sizeof(char));

	if(reversed==NULL){
	printf("Error! memory not allocated.");
	return 1;}

    

 

  
  
    for (int i = 0; i < length; i++) {
        reversed[i] = sentence[length - 1 - i];
    }
     

   
    printf("Reversed string: %s\n", reversed);

       free(reversed);

    return 0;		
  


}
