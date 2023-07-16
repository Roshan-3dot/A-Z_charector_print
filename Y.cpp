#include<stdio.h>
#include<conio.h>
void char_Y();
void print();
int main(){
	printf("*** Print Y Charector *** \n\n");
	// Call char_Y() function
	char_Y();
	return 0;
}
void char_Y(){
		char matrix[5][5];
   	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]='#';
	       if(i==0){
	       	if(j==1||j==1||j==2||j==3){
	       		matrix[i][j]=' ';
			   }
		   }else if(i==1){
		   	if(j==0||j==2||j==4){
		   		matrix[i][j]=' ';
			   }
		   }else if(i==2||i==3||i==4){
		   	if(j==0||j==1||j==3||j==4){
		   		matrix[i][j]=' ';
			   }
		   }	    
		}
	}
	// print matrix 5*4
	for(int i=0;i<5;i++){
		printf("\t");
		for(int j=0;j<5;j++){
			printf(" %c",matrix[i][j]);
		}
		printf("\n");
	}
}

