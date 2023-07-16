#include<stdio.h>
#include<conio.h>
void char_B();
int main(){
    printf("*** Print B Charector *** \n\n");
	char matrix[5][4];
	//call char_B() function
	char_B();
	
	return 0;
}
void char_B(){
	char matrix[5][4];
	// code 
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]='#';
			if((i==0||i==2||i==4) && j==3){
				matrix[i][j]=' ';
		    }
		    if(i==1 || i==3){
		    	for(int k=1;k<=2;k++){
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
