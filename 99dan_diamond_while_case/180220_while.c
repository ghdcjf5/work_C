#include <stdio.h>
#define add 1
#define sub 2
#define mul 3
#define div 4
int main(){
	double x,y, result;
	int op,i;

	char quit = '_'; // ������� �ƽ�Ű�ڵ尪
//���α׷����� ���ѹݺ����� ���� �ʵ��� �ؾ��Ѵ�. �ä����ڿ��� ��� ����ϴϱ� ������ �Ӻ���忡���� ���ѹݺ��� �ؾ��Ѵ�.



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



fflush(stdin);  //key�Է� ���۸� �����ִ� ��ɾ�
printf("if you want to continue, press any key.\n");
printf("if you want to quit, press key 'q'.\n");
scanf("%c",&quit);
printf("%c\n",quit);   //fflush�� ���۸� �������� �������� scanf������ �ѹ��� �ؼ� 
                       //enter�� �ι��Ե��� ���ش�.


}
}

//�µ� ������ ������ while���� �Ἥ ���ǿ� �µ��� 25�� ���� ������ ���� off ������ ���� on
//for���� Ư��Ƚ���� �ݺ��Ҷ� 
//���� while�����ε� �ݺ�������Ҽ� �ֵ�.

/*
#include <stdio.h>
#define add 1
#define sub 2
#define mul 3
#define div 4
int main(){
	double x,y, result;
	int op,i;

	char quit = '_'; // ������� �ƽ�Ű�ڵ尪
//���α׷����� ���ѹݺ����� ���� �ʵ��� �ؾ��Ѵ�. �ä����ڿ��� ��� ����ϴϱ� ������ �Ӻ���忡���� ���ѹݺ��� �ؾ��Ѵ�.

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