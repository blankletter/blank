#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned r, c;
    scanf( "%u%u", &r, &c );

    int m[100][100];
    for( unsigned i=0; i!=r*c; ++i )
       scanf( "%d", &m[i/c][i%c] );

    unsigned n;
    scanf( "%u", &n );

    int row[100], col[100];
    for( int i=0; i!=100; ++i )
       row[i]=i, col[i]=i;

    while( n-- )
    {
        char p1, p2; unsigned p3, p4;
        scanf( " %c%c%u", &p1, &p2, &p3 );
        if( p1 == 'S' )
            scanf( "%u", &p4 );

        if( p1=='S' && p2=='R' )
        {
            int t = row[p3-1];
            row[p3-1] = row[p4-1];
            row[p4-1] = t;
        }
        else if( p1=='S' && p2=='C' )
        {
            int t = col[p3-1];
            col[p3-1] = col[p4-1];
            col[p4-1] = t;
        }
        else if( p1=='D' && p2=='R' )
        {
            memmove( &row[p3-1], &row[p3], (r-p3)*sizeof(int) );
            --r;
        }
        else if( p1=='D' && p2=='C' )
        {
            memmove( &col[p3-1], &col[p3], (c-p3)*sizeof(int) );
            --c;
        }
        else if( p1=='I' && p2=='R' )
        {
            memmove( &row[p3], &row[p3-1], (r+1-p3)*sizeof(int) );
            row[p3-1] = -1;
            ++r;
        }
        else if( p1=='I' && p2=='C' )
        {
            memmove( &col[p3], &col[p3-1], (c+1-p3)*sizeof(int) );
            col[p3-1] = -1;
            ++c;
        }
    }

    for( unsigned i=0; i!=r; ++i )
    {
        for( unsigned j=0; j!=c; ++j )
            printf( "%d%c", (row[i]==-1 || col[j]==-1)?0:m[row[i]][col[j]], " \n"[j+1==c] );
    }
}

