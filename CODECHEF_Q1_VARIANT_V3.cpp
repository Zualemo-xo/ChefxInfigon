#include <stdio.h>


int height = 5;
int width;
width = (2 * 5.5) - 1;
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


void printD()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1)
                && j < height - 1)
                printf("*");
            else if (j == height - 1 && i != 0
                     && i != height - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void printE()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1)
                || (i == height / 2
                    && j <= height / 2))
                printf("*");
            else
                continue;
        }
        printf("\n");
    }
}

void printI()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0 || i == height - 1)
                printf("*");
            else if (j == height / 2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void printR()
{
    int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        printf("*");
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == half)
                && j < (width - 2))
                printf("*");
            else if (j == (width - 2)
                     && !(i == 0 || i == half))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


void printV()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == counter
                || j == width - counter - 1)
                printf("*");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
}




int main()
{
	printD();
	printf("\n");
	printG();
	printf("\n");
	printI();
	printf("\n");
	printR();
	printf("\n");
	printE();
	printf("\n");
	printV();
	printf("\n");

	
}
