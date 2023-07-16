#include<stdio.h>
#include<conio.h>
void char_F();
int main(){
		printf("*** Print F Charector *** \n\n");
		//coll th char_F() function
		char_F();
	return 0;
}
void char_F(){
  char matrix[5][4];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]='#';
		    if(i==1||i==3||i==4){
		      if(j==1||j==2||j==3){
		      	matrix[i][j]=' ';
			  }
			}
		}
	}
	// print matrix 4*3
	for(int i=0;i<5;i++){
		printf("\t");
		for(int j=0;j<4;j++){
			printf(" %c",matrix[i][j]);
		}
		printf("\n");
	}		
}
