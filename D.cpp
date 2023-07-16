#include<stdio.h>
#include<conio.h>
void char_D();
int main(){
	printf("*** Print D Charector *** \n\n");
     char_D();
	return 0;
}
void char_D(){
  char matrix[5][4];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]='#';
		    if(i==0 || i==4){
		    	if(j==3){
		    		matrix[i][j]=' ';
				}
			}
			if(i==1 || i==2 || i==3){
				for(int k=0;k<=2;k++){
					if(k==1){
						continue;
					}
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
