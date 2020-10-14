#include<stdio.h>
#include<windows.h>
int main() {
	int a[7][8], i, j,v=1,g=0,sum=0;
	printf("Zapolnite massiv 7*8\n");
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 8; j++) {
		
			scanf_s("%d", &a[i][j]);

		}
	}
	system("cls");
    printf("Vasha novaya matritsa:\n");
    for (i = 0; i < 7; i++) {
	   for (j = 0; j < 8; j++) {

		 printf("%d ",a[i][j]);

	   }
	  printf("\n");
    }
	printf("\n");
	for (j = 0; j < 8; j++) {
		printf("Kolichestvo nechetnih elementov %d", v);
		for (i = 0; i < 7; i++) {
			if (a[i][j] % 2 != 0) 
			sum++;
				

		}
		printf(" stolbtsa ravno %d\n", sum);
		v++;
		sum = 0;
	}
	return 0;
}