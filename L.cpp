#include<stdio.h>
#include<conio.h>
void char_L();
void print();
int main(){
	printf("*** Print L Charector *** \n\n");
	// Call char_L() function
	char_L();
	return 0;
}
void char_L(){
		char matrix[5][4];
   	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			matrix[i][j]='#';
			if(i==0||i==1||i==2||i==3){
				if(j==1||j==2||j==3){
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

