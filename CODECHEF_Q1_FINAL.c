//Authored by V.Maheysh(Cchef id: zualemo)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,i,j,k;
    rows=11; //for CASE 3
    //rows=6; //for CASES 1 and 2
    
    //CASE 1
    //char name[7]={'V','R','D','I','G','E'}; //Reshuffle to form the word 'GDRIVE'.
    //CASE 2
    //char name[7]={'F','G','D','R','I','V','E'}; //Original 'GDRIVE'.
    
    //CASE 3
    char name[12]={'F','G','O','O','G','L','E','D','R','I','V','E'}; //Full form

    for(i=1; i<=rows; i++){    
    
		for(j=1; j<=rows-i; j++){
      		printf(" ");
		}
	
		for(k=1; k<=i; k++){
	      printf("%c",name[i]);
	      printf(" ");
		}
	printf("\n");
	}
	
	for(i=1; i<=rows-1; i++){  
	    for(j=1; j<=i; j++){
	      printf(" ");
		}
	
		for(k=1; k<=rows-i; k++){
	      printf("%c",name[rows-i]);
	      printf(" ");
		}
	printf("\n");
	}
	
	getch();
	return 0;
}
