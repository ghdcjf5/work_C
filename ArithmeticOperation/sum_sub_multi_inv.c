
#include <stdio.h>

 int main() 
 {
    int a,b;

  printf("a? and b?");   //printf("a? and b?" %d\n,a,b);로 쓰면  %d\n이 들어가는순간 오류가난다.
     scanf("%d %d",&a,&b);  //두문자ㅇ이상 배열하고 싶을시 %d %d로 사용
  int sum,sub,multi,inv;

    
sum=a+b;
sub=a-b;
multi=a*b;
inv=-a;
   
     
    printf("addition? %d\n",sum);
     printf("subtraction? %d\n",sub);
      printf("multiplication? %d\n",multi);
       printf("inversion? %d\n",inv);



   

    
return 0;

 }