#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int i, j, k, N, procs;
	N = 900;
	procs = 2;

	float ***A =  malloc(N*sizeof(float**));

    for(i=0; i<N; i++)
    {
        A[i] = malloc(N*sizeof(float*));
        for(j=0; j<N; j++)
        {
            A[i][j] = malloc(N*sizeof(float));		
        }

    }




    for (i=0;i<N;i++) {
        for (j=0;j<N;j++) {
            for (k=0; k<N; k++ ) {
                A[i][j][k] = i*N*N + j*N + k + 1.0;
            }
        }
    }

printf("The last array element is %f\n", A[N-1][N-1][N-1]);	

free(A);

}
