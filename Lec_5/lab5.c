#include <stdio.h>



int main()
{   
	int mat1[3][3] = { { 1, 1, 1},{ 2, 2, 2 },{ 3, 3, 3},
					 };

	int mat2[3][3] = { { 1, 1, 1},
					{ 2, 2, 2 },
					{ 3, 3, 3 }};

	int r[3][3]; 
	int i, j;
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            r[i][j] = 0;
            for (int k = 0; k < 3; k++)
                r[i][j] += mat1[i][k] * mat2[k][j];
        }
    }

	printf("Result matrix is \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d ", r[i][j]);
		printf("\n");
	}

	return 0;
}
