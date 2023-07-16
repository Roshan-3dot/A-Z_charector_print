#include<stdio.h>
#include<conio.h>
int main(){
  printf("*** Print J Charector *** \n\n");
	// main code
	char matrix[5][5];
   	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]='#';
			if(i==1||i==2){
				if(j==0||j==1||j==3||j==4){
					matrix[i][j]=' ';
				}
			}
			if(i==3){
				if(j==0||j==2){
					continue;
				}else{
					matrix[i][j]=' ';
				}
			}
			if(i==4){
				if(j==1){
					continue;
				}
				matrix[i][j]=' ';
			}
		}
	}
	// print matrix 6*4
	for(int i=0;i<5;i++){
		printf("\t");
		for(int j=0;j<5;j++){
			printf(" %c",matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

