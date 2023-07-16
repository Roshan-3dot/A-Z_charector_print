#include<stdio.h>
#include<conio.h>
void char_A();
void print();
int main(){
	printf("*** Print A Charector *** \n");
	char matrix[5][4];
	// Call char_A() function
	char_A();
	return 0;
}
void char_A(){
		char matrix[5][4];
   	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			matrix[i][j]='#';
			if(i==0 && j==0 || i==0 && j==3){
				matrix[i][j]=' ';
			}else if(j==1||j==2){
			  if(i==1 || i==3 || i==4 || i==5){
			    matrix[i][j]=' ';
			  }
			}
		}
	}
	// print matrix 6*4
	for(int i=0;i<5;i++){
		printf("\t");
		for(int j=0;j<4;j++){
			printf(" %c",matrix[i][j]);
		}
		printf("\n");
	}
}

