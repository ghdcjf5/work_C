#include <stdio.h>



int add(int x,int y);
int sub(int x,int y);
int grobal_result;

int add(int x,int y){           //함수의 return형 , add는 이름 ()안의 변수를 매개변수
	int result;              //여기부분을 함수의 바디 부분
result = x+y;                    //함수선언(몸체에서)한 내용을 정의한다고 한다. return된는 값을
return result;                  //저장하는 값이 result = 함수는 변수다.

}

///덧셈기


int sub(int x,int y){        
	int result;             
result = x-y;                
return result;   
}  









int main(int argc, char const *argv[])
{
	int result;
		result = add(10,20);

	printf("%d\n",result);

	result =sub(10,20);

	printf("%d\n",result);

	return 0;

}


/*함수는 프로그램 메모리에 어떻게 들어가게도니다.
함수 가 main문에 나오면 함수의 정의부분을 처리한후 return으로 나오ㅗ서 다시 main문으로 돌아가서 수행
함수의 줄위치는 상관없다. 줄순서로 실행순서가 아니다.


지역변수, 전역변수 차이 




*/
