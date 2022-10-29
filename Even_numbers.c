/**
 * The program prints even number
 */

#include <stdio.h>

int main(void){

	int i, start, end;
	printf("Enter starting point:");
	scanf("%d", &start);
	printf("Enter ending point: ");
	scanf("%d", &end);
	printf("Your numbers start from %d to %d\n", start, end);

	for(i = start; i <= end; i++){
		printf("%d", i);
		printf("\n");
	}
	return(0);
}
