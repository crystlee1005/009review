#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int grade[SIZE];
	int score[SIZE];
	printf("%i명의 점수를 입력하세요: \n", SIZE);
	

	for (i=0; i<SIZE; i++)
	{   grade[i] = rand() %100;
	    score[i]=grade[i];

	}
	for (i=0; i<SIZE; i++)
	printf("score [%i] = %i\n", i, score[i]);
	
	
	return 0;
}
