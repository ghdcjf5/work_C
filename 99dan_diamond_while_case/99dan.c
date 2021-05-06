#include <stdio.h>

int main(int argc, char const *argv[]){

int i,j;
int mul;


printf("    muliplication_table\n");
 for (i=1;i<10;i++){
 	printf("\n");
	for( j=1;j<10;j++){

               mul=i*j;

		printf(" %2d",mul);
	}

printf("\n");

}
}




