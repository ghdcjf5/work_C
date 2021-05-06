#include <stdio.h>
int a,c;

int main()
{

	scanf("%d\n",&a);
	switch(a%4)  //
	{
	case 0: c=0; break;  //cas 0의 0은 순번구분 으로 생각하면됨
	case 1: c=1; break;
	case 2: c=2; break;
	case 3: c=3; break;  //break가 없으면 다음 break가 있는 케이스 까지 case문이돈다.
 default : break;
	}
	
	printf("%d\n",c);
}