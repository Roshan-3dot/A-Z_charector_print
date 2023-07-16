#include<stdio.h>
#include<conio.h>
void char_W();
void print();
int main(){
	printf("*** Print W Charector *** \n\n");
	// Call char_W() function
	char_W();
	return 0;
}
void char_W(){
	char matrix[5][5];
   	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]='#';
		   if(i==0||i==1||i==4){
		   	if(j==1||j==2||j==3){
		   		matrix[i][j]=' ';
			   }
		   }else if(i==2){
		   	  if(j==1||j==3){
		   	    matrix[i][j]=' ';	
			  }
		   }else if(i==3&&j==2){
		   	  matrix[i][j]=' ';
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

