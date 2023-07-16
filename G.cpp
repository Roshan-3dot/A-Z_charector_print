#include<stdio.h>
#include<conio.h>
void char_G();
int main(){
		printf("*** Print G Charector *** \n\n");
		//coll th char_G() function
		char_G();
	return 0;
}
void char_G(){
  char matrix[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]='#';
		    if(i==0){
		    	if(j==0 ||j==4){
		    	  matrix[i][j]=' ';	
				}
			}
			if(i==1){
				if(j==0){
					continue;
				}
				matrix[i][j]=' ';
			}
			if(i==2||i==3){
				if(j==1){
					matrix[i][j]=' ';
				}else if(i==3 && j==3){
					matrix[i][j]=' ';
				}else{
					continue;
				}
			}
			if(i==4){
				if(j==1||j==4){
					continue;
				}
				matrix[i][j]=' ';
			}
		}
	}
	// print matrix 4*4
	for(int i=0;i<5;i++){
		printf("\t");
		for(int j=0;j<5;j++){
			printf(" %c",matrix[i][j]);
		}
		printf("\n");
	}		
}
