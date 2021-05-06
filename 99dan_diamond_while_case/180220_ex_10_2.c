#include <stdio.h>

int add2(int a, int b);
int find_max2(int a , int b );
void print_min(int a, int b);

int main(){
	int a=3,b=5;


	int max= find_max2(a,b);
	printf("max:%d\n",max);
printf("add:%d\n",add2(a,b));


print_min(2,5);
return 0;
}

int add2(int a,int b)
{
	int sum=a+b;
	return(sum);

}

int find_max2(int a,int b)
{
	int max=a>b ? a:b;
	return max;

}


int find_min2(int x,int y)
{
	int min=x<y ? x:y;
	return (min);

}



void print_min(int a,int b)
{
	int min=a<b ? a:b;
	printf("min : %d\n",min);

	return ;

}





}
