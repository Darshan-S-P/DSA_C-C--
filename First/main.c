# include <stdio.h>
int main ( )
{
	int size;
	printf("Enter a Size: ");
	scanf("%d", &size);

	for(int i=1; i<size; i++){

		for(int j=1; j<=i; j++){
			printf("*");
		}
			for(int j=2*i; j<2*size; j++){
			printf(" ");
		}
		printf("\n");
	}
	for(int i=size; i<=1; i--){


		for(int j=1; j<=i; j++){
			printf("*");
		}
			for(int j=2*i; j<2*size; j++){
			printf(" ");
		}
		printf("\n");
	}

}
