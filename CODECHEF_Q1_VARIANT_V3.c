#include <stdio.h>

int height = 10;
int width;
width = (2 *10) - 1;
void printG()
{
    int i, j;
    width--;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1)
                && (j == 0 || j == width - 1))
                printf(" ");
            else if (j == 0)
                printf("*");
            else if (i == 0 && j <= height)
                printf("*");
            else if (i == height / 2
                     && j > height / 2)
                printf("*");
            else if (i > height / 2
                     && j == width - 1)
                printf("*");
            else if (i == height - 1
                     && j < width)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void printp()
{
	int i,j;
    for(i=1; i<=5; i++)
    {
                printf("\t");
        for(j=3; j<=9; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
        for(i=1; i<=5; i++)
    {
        for(j=1; j<=24; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}


void printw()
{
		int i,j;
    for(i=3; i<=5; i++)
    {

		printf("   ");
        for(j=0; j<=4; j++)
        {

            printf("*");
			
        }
        printf("      ");
        for(j=0; j<=4; j++)
        {

            printf("*");
			
        }

        printf("\n");
    }
    

    
}

void printr()
{
	int i,j;
	for(i=0; i<=30; i++)
    {
    	printf("*");
    }
    for(i=0;i<2;i++)
    {
    	printf("\n");
	}
	for(i=0;i<20;i+=5)
	{
		printf("***\t");
	}
	    for(i=0;i<2;i++)
    {
    	printf("\n");
	}
    for(i=0; i<=30; i++)
    {
    	printf("*");
    }
}

int main()
{
	printG();//print g
	printf("\n");
	printp();//print car 
	printw();//print wheels
	printr();//print road

	
}
