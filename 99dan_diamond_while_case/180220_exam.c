#include <stdio.h>

int main(int argc, char const *argv[])    //argc 는, 프로그램을 실행할 때 지정해 준 "명령행 옵션"의 "개수"가 저장되는 곳입니다.

                                         //argv 는, 프로그램을 실행할 때 지정해 준 "명령행 옵션의 문자열들"이 실제로 저장되는 배열입니다.

										//왜 빈칸으로 안납두고 안에 위의 명령어를 넣는지?

{
	
/*
printf("*");
printf("\n");
printf("**");
printf("\n");
printf("***");               //노가다로 하는 것보다 이중for문을 이용하여 만든다
printf("\n");
*/



/*	int i,j;
for (j=1; j<6; j++){
	for (i=0; i<j; i++){
		printf("*");
	}

	printf("\n");

}


for (j=6; j>0; j--){
	for (i=0; i<j; i++){
		printf("*");
	}

	printf("\n");

}

*/

	int i,j,k;

for (j=1; j<6; j++){

	for (i=0; i<j; i++){
		printf("*");
	}

	printf("\n");                //오른쪽  위 삼각형 

}


for (j=1; j<5; j++){
	for (i=0; i<(5-j); i++){
		printf("_");
		for (j=1; j<6; j++){

	for (i=0; i<j; i++){
		printf("*");
	}

	printf("\n");           //오른쪽 아래 삼격형

}

return 0;

}