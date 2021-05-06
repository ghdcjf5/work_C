#include <stdio.h>

int main(){

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

/* i가 1부터 9까지 j가 1부터 9까지 for문에서 mul=i*j연산을 수행 */


