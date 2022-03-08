#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main(int argc, char *argv[]){
	int num, i;
	
	for(i=0;i<MAX;i++){
		printf("\nDigite o numero: ");
		scanf("%d", &num);
	
		if (num%2 == 0){
			printf("\nMateus e um viadao!!!!!");
		}else {
			printf("\nMateus, VAI TOMAR NO CU!!!!!!");
		}	
	}
	
	return 0;
}