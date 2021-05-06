#include <stdio.h>

int main(int argc, char const *argv[]){
	int i,j;



for (i=1;i<10;i++)   //전체 for문

{
  for (j=0;j<10-i;j++)
      {
  	printf(" ");   //공백칸 갯수 
       }
		for (j=1;j<i;j++)
		               {
				printf("*");
			
		
						}    //*갯수 

	
		for (j=0;j<i;j++)
		               {
				printf("*");
			
		
						}    //*갯수 	

		printf("\n");
	}


for (i=0;i<10;i++)   //전체 for문


{


for (j=0;j<i;j++){
	printf(" ");
}

for (j=0; j<10-i;j++){
printf("*");

}



for (j=1; j<10-i;j++){
printf("*");

}





		printf("\n");
	}




}











