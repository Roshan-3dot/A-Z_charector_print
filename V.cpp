#include<stdio.h>
#include<conio.h>
void char_V();
void print();
int main(){
	printf("*** Print V Charector *** \n\n");
	// Call char_V() function
	char_V();
	return 0;
}
void char_V(){
	char matrix[5][5];
   	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]='#';
		   if(i==0||i==1||i==2){
		   	 if(j==1||j==2||j==3){
		   	    matrix[i][j]=' ';	
			 }
		   }
		   if(i==3){
		   	if(j==0||j==2||j==4){
		   		matrix[i][j]=' ';
			   }
		   }
		   if(i==4){
		   	if(j==2){
		   		continue;
			}else{
				matrix[i][j]=' ';
			}
		   }
		}
	}
	// print matrix 5*5
	for(int i=0;i<5;i++){
		printf("\t");
		for(int j=0;j<5;j++){
			printf(" %c",matrix[i][j]);
		}
		printf("\n");
	}
}

