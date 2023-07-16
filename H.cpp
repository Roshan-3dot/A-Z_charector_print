#include<stdio.h>
#include<conio.h>
int main(){
	printf("*** Print H Charector *** \n \n");
		char matrix[5][4];
   	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			matrix[i][j]='#';
			if(i==2){
				continue;
			}else{
				if(j==1||j==2){
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
	return 0;
}

