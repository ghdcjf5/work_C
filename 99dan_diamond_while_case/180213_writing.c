#include <stdio.h>  //기본적인 소스코드 형태 include <stdio.h>는 전처리하는 명령어
               
                   //stdio standard input output
					//컴파일 하기전에 지정해놓는 내용

//컴파일은 main문의 내용을 실행하는것 main문이 중요하다.
int main (){
	 int A, B,divide,percent   ;           // 변수선언이 의미하는바는?  // 메모리공간을 확보해달라고 지시하는것
									 //cpu가 a의 10이라는 값을 메모리에 대입한다.
	 A=7;
    /// B=4;
    // divide=A/B;   //  /는  몫
   //  percent=A%B;   //%는 나머지 
	                  
	                     

	       printf("A? %d\n",A);  //printf는  출력확인
	       							//stdio안에 들어있는것 a라는 값을 
	                                //화면에 출력한다.
	     scanf("%d",&B);    //%d는 10진수 &는 주소값
	       printf("A/B? %d\n",divide); //정수 명령어를 사용하였기 떄문에 몫만 나온다.
 printf("A%B? %d\n",percent);
	       	   }    //scanf 는 커맨드창에서 scanf 주소값의 식별자의 값을 임의로 쳐줄수 있따.


//int는 데이터 타입 4byte를 할당해주는것  2진수  0,1은 1bit  1byte=8bit  1byte는 0~255까지 가능  4byte=32bit
//ex)int   a;
// 자료형 변수명
//char 는 문자를 표현하기 위해사용 1byte짜리 변수 
//자료형 앞에 unsigned쓰면 양수만 가능 앞에 아무것도 안붙으면 음수부터 양수까지 표현 (signed)  ex)-128~127  
//AVR은 8bit 데이타메모리 16bit cpu(프로그램메모리)를 가져서 8bit컴퓨터라고 한다.
/*AVR은 int가 2byte =>65535값까지 즉, int는 컴퓨터의 상황에 따라 달라진다. AVR에서  65536넣으면 int에서는 overflow에러가 난다.
c에서 정수자료형
     char      1
	short       2
	int        4
	long long   8 byte
char는 문자저장용도 아스키코드 값(127개미만) <=알파벳 26 대소문자 + 숫자 + 특수문자 

int형이 2바이트 크기로 구현된 컴파일러(16bit컴퓨터)에서는 long이 2배 
286 컴퓨터전까지가 16bit컴퓨터

80386 80486 <= intel이 만든것 이후에 pentium을 도입했다. 
cpu 인텔의 최초 cpu는 4004 (1971년에 나옴)
컴퓨터가 64bit이지만 컴파일러는32bit다 
 
실수자료형 
 float   4             <-int와 같다
 double  8             <-long long이랑 같다      하지만 저장방식이 다르다
  long double  8이상 

저장방식 
정수형은 2일떄 char에서     00000010 (2진 binary형식으로 저장)
실수형은      float에서  +-부분 지수부분 기수부분 으로 나뉜다.
                       ex0 148.12-> 1.4812E2에서 +  2   4812로 들어간다. 단 여기서 2진수로 저장되겟지

 계산기만들떄 float형은 값의 손실이 일어난다. 1+1=1.99999999999999로나옴

const double tax_rate =0.12;
const는 상수변환(상수선언) tax_rate에 0.12값 처음에만 선언되고 다음에는 tax_rate에 다른값이 대입이 안된다. 

int age ;
예약어 식별자 
int(예약어)는 컴파일러와ㅗ 사용방법이 약속된 단어
age(식별자)는 필요에 따라 만들어 ㄴ쓰는  단어
식별자에서 대소문자는 서로 다른 식별자로 인식 예약어를 식별자로 사용불가
숫자로 시작할수없음
under bar이외의 특수ㄴ문자는 사용ㅈ불가 


scanf 키보드로부터 변수에 데이터 입력받음 
scanf("%d",& A );


컴퓨터의 연산식의 처리

메모리에 값을 저장해주고
cpu가 그값을 로드해서 연산한후에 메모리에 다시 변수를저장한다.

즉, 읽고 연산하고 쓰고 
로드(load)는 메로리에서 a,b값 cpu저장공간인 레지스터에서 읽어온다.

레지스터(1차캐시, 2차캐시)<=cpuㅇ나에들어있다.
램보다 빠르다 전력소모가 크다




-관계연산자
대소관계연산자   < 또는, >등의 기호 사용

동등 관계연산자

==나 != 기호사용

피연산자 2개 사용하며, 연산의 결고값은 1 또는 0 (true or false)



-논리연산자
a&&b        and
a||b         or
!a          not

연산의 결과값은
변수에 저장하지 않으면 버려짐
레지스터에만 저장되고 메모리ㄴ에는 저장되지않음 (누산기에만 들어가있따)

따라서 바로 사용하지 않을경우 대입 연산을 통해 다른변수로 저장해야한다
=>연산은 cpu안에서 이뤄지지만 변수는 메모리에 있기떄문

res 명령어로 저장을 해놓던가 printf로 바로 출력시켜놓고 써야한다.


-형번환 연산자
형변환
괄호안에원한느 자료형 넣고 괄호에 이어 변환할 피연산자 놓음
(int)a와 같이 사용  =>a가 어떤 자료형에서 int로 바꾸니다.
float를 쓸경우 손실이 일어날수 있으므로 비교할때 int와 float와 같이 사용하면 안됨


정수타입의 자료형에서 나눗셈 연산을 하고
형변환 연산을 수행하면 소숫점도 나온다.


sizof ()
데이터의 사이즈 크기(byte)를 나타내준다.
int형 변수의 크기 : 4

-복합대입 연산자
연산 결과 다시 피연산자에 저장
산술 연산자와 결합된 형태
a+=b   ----->  a=a+b  a의 값에 b를 더하고 a에 다시 넣는것
ex)result=result+1


조건연산자

(a>b) ? a:b
조건식이 참이면 a선택 거짓이면 b선택 

b=(a<0)? -a:a
b는 절대값으로 나온다

-비트연산자
정수형에만 사용한다

&      비트단위 and
^               xor
|                or
~                not (비트반전)
<<   왼쪽비트이동 연산자
>>   오른쪽비트이동 연산자

이항연산자 &,^,|
단항연산자 ~ , !, ++,--
삼항연산자 ?

ex) a= 00110101         
    b= 00001111
 a&b = 00000101
 a|b = 00111111
 a^b = 00111010

진리표

a b a&b  a|b   a^b
0 0  0    0     0
0 1  0    1     1
1 0  0    1     1
1 1  1    1     0

shift 연산자
a=00110101일떄 char타입일떄
a<<1;하면  a<<2;하면 두번미는것
a=01101010 뒤의 0은 없어서 0이되는것 맨앞의 0이 돌아오는것이 아니다!!!
a>>1;
마찬가지로 되고 비는부분은 0

결론적으로 왼쪽으로 밀면 2배 늘어나고 오른쪽으로 밀면 절반이된다.
단, 나머지는 손실된다.
결론적으로 진법의 값만큼 곱해주는것, 나눠주는것
2의 거듭제곱 으로 나타내고싶을때 shift연산을 하면 계산시간이 줄어든다ㅑ(time complexity)

증감연산자 (increment, decrement)
a=10;
++a;   ---->11
는 a+=1;과 같다.  ---->11

a++;와의 차이

ex) a=10;
    result = ++a;
          a가 11이 된 뒤에 result에 11을 ㅇ등록
        a=11, result=11


     a=10;
    result = a++;
    대입연산자는 연산순의가 제일 늦지만 증감연산자가 변수뒤에 붙을경우는 대입연산자부터 계산
    result에 10이 들어가고 a에 11이 들어간다.

    a=11, result=10

    ex)a=10;
   printf("%d", a++);
   a=10이 출력된다. ++보다 printf가 먼저 수행되서 a를 출력시켜버리기 때문 실수하지않기
따라서 연산자 우선순위를 주의해야하고 증감연산자는 앞에 붙여쓰자

연산순서 단항->다항 관계 ->논리  산술->관계
++a*4       a>b  && a!=5     a%3==0

우선순위가 같으면 왼쪽부터 계산
웬만하면 괄호쓰자


///////////////////////////////////////////
C언어 => 그이전에 B,A언어가 있었다.        데니스 리치와 켄 톰슨이 개발

유닉스를 개발하기 위해 만든언어
유닉스란?<-리눅스의 근원
c를 기반으로 만들어진 언어 : C++, java,object C, C#
C++ : 객체지향 얹은것
C# : C++++

안드로이드,아이폰 커널 = 리눅스

따라서 C는 베이스로 깔아놔야한다.

스티브워즈니악+스티브 잡스가 애플 만듬

컴파일
C언어의 소스파일을 기계어로 바꾸는과정

IP 10.10.15.84


windows 10 시리얼넘버
CTNCF-3PBFR=WGB9X-TRGYV-YY49M

OFFICE
YV7M4-N6QDC-7VXTJ-8RY8Q-63BVM



컴퓨터에 메모리가 꽃힌다.
//////////////////////////////////////////////////////////////






















	*/
