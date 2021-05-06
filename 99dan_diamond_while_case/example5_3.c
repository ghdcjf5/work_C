#define _CRT_SECURE_NO_WARNIGS

#include <stdio.h>

int main()
{
int x=5, y=10;

printf("two integer's input>>",&x,&y);
scanf("%d %d",&x,&y);

printf("The additon is : %d\n",x+=y);
printf("x=%d, y=%d\n",x,y);
printf("The substracton is : %d\n",x-=y);
printf("x=%d, y=%d\n",x,y);
printf("The multiplication is : %d\n",x*=y);
printf("x=%d, y=%d\n",x,y);
printf("The division is : %d\n",x/=y);
printf("x=%d, y=%d\n",x,y);
printf("The reminder is : %d\n",x%=y);
printf("x=%d, y=%d\n",x,y);
printf("The x *=x+y is : %d\n",x*=x+y);
printf("x=%d, y=%d\n",x,y);

}