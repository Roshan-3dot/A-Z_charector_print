#include<stdio.h>
#include<conio.h>
void char_M();
void print();
int main(){
	printf("*** Print M Charector *** \n\n");
	// Call char_M() function
	char_M();
	return 0;
}
void char_M(){
		char matrix[4][5];
   	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]='#';
			if(j==1||j==2||j==3){
				if(i==1 && j==2){
					continue;
				}else if(i==0){
					if(j==2){
						matrix[i][j]=' ';
					}
				}
				else{
					matrix[i][j]=' ';
				}
			}
		}
	}
	// print matrix 4*5
	for(int i=0;i<4;i++){
		printf("\t");
		for(int j=0;j<5;j++){
			printf(" %c",matrix[i][j]);
		}
		printf("\n");
	}
}

