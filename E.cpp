#include<stdio.h>
#include<conio.h>
void char_E();
int main(){
	printf("*** Print E Charector *** \n\n");
	// call the char_E() function
	char_E();		
	return 0;
}
void char_E(){
	char matrix[5][4];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]='#';
			if(i==1 ||i==3){
				for(int k=1;k<=3;k++){
					matrix[i][k]=' ';
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
