#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int grade[SIZE];
	int i;
	printf("%i���� ������ �Է��ϼ���: \n", SIZE);
	

	for (i=0; i<SIZE; i++)
	{   scanf("%d", &grade[i]);	
	}
	for (i=0; i<SIZE; i++)
	printf("grade[%i] = %i\n", i, grade[i]);
	
	return 0;
}
