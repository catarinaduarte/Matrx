#include <stdio.h>
#include <stdio.h>

#define N 4
#define NN N*N

int main ()
{
    int matrx[N][N];
    int *p;
    int count;

    p = matrx[0];
    for (int i = 0 ; i < N; i++ )
        for (int j = 0, count = i + 1; j < N; j++ ) {
            *(p++) = count;
            count += N;
        }

    for ( int i=0; i<N; i++ )
        {
            for ( int j=0; j<N; j++ )
               printf( " %2d", matrx[i][j] );
            printf( "\n" );
        }

    return( 0 );
}