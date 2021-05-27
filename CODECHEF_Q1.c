#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,i,j,k;
    rows=6;
    //char name[7]={'V','R','D','I','G','E'};
    char name[7]={'F','G','D','R','I','V','E'};
    for(i=1; i<=rows; i++){    //print upper part
    for(j=1; j<=rows-i; j++){
      printf(" ");
}
for(k=1; k<=i; k++){
      printf("%c",name[i]);//print star to upper part
      printf(" ");
}
printf("\n");
}

for(i=1; i<=rows-1; i++){  //print lower part
    for(j=1; j<=i; j++){
      printf(" ");
}
for(k=1; k<=rows-i; k++){
      printf("%c",name[rows-i]);//print star to lower part
      printf(" ");
}
printf("\n");
        }
        getch();
    return 0;
}
