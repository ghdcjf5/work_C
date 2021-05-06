#include <stdio.h>
#define add 1
#define sub 2
#define mul 3
#define div 4
int main(){
	double x,y, result;
	int op,i;

	char quit = '_'; // 언더바의 아스키코드값
//프로그램에서 무한반복문이 들어가지 않도록 해야한다. 시ㅡ템자원을 계쏙 사용하니까 하지만 임베디드에서는 무한반복을 해야한다.



while(quit!='q'){
	

	printf("input two real numbers\n");
	scanf("%lf %lf",&x,&y);
	printf("input operators 1(+),2(-),3(*),4(/) : \n");
    scanf("%d",&op);


switch(op){
	case add : printf("%.2f +%.2f=%.2f\n",x,y,x+y); break;
case sub : printf("%.2f *%.2f=%.2f\n",x,y,x*y); break;
case mul : printf("%.2f -%.2f=%.2f\n",x,y,x-y); break;
case div : printf("%.2f /%.2f=%.2f\n",x,y,x/y); break;
default : printf("operators are 1~4.\n"); break;

}



fflush(stdin);  //key입력 버퍼를 지워주는 명령어
printf("if you want to continue, press any key.\n");
printf("if you want to quit, press key 'q'.\n");
scanf("%c",&quit);
printf("%c\n",quit);   //fflush로 버퍼를 지워주지 않을꺼면 scanf구문을 한번더 해서 
                       //enter가 두번먹도록 해준다.


}
}

//온도 조절기 에서는 while문을 써서 조건에 온도가 25도 보다 높으면 히터 off 낮으면 히터 on
//for문은 특정횟수를 반복할때 
//물론 while문으로도 반복을사용할수 있따.

/*
#include <stdio.h>
#define add 1
#define sub 2
#define mul 3
#define div 4
int main(){
	double x,y, result;
	int op,i;

	char quit = '_'; // 언더바의 아스키코드값
//프로그램에서 무한반복문이 들어가지 않도록 해야한다. 시ㅡ템자원을 계쏙 사용하니까 하지만 임베디드에서는 무한반복을 해야한다.

i=0;
while(i<5){
//while(quit!='q'){
	

	printf("input two real number\n");
	scanf("%lf %lf",&x,&y);
	printf("input arithmatics 1(+),2(-),3(*),4(/) : \n");
    scanf("%d",&op);


switch(op){
	case add : printf("%.2f +%.2f=%.2f\n",x,y,x+y); break;
case sub : printf("%.2f *%.2f=%.2f\n",x,y,x*y); break;
case mul : printf("%.2f -%.2f=%.2f\n",x,y,x-y); break;
case div : printf("%.2f /%.2f=%.2f\n",x,y,x/y); break;
default : printf("arithmatics is 1~4.\n"); break;

}

i++;

}
}

*/