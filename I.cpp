#include<stdio.h>
#include<conio.h>
int main(){
	printf("*** Print I Charector *** \n\n");
	// main code
	char matrix[5][5];
   	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]='#';
			if(i==0||i==4){
				continue;
			}else{
				if(j==2){
					continue;
				}else{
					matrix[i][j]=' ';
				}
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
