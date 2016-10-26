#include "treap.h"
#include <stdio.h>

#define NumItems 12000

main( )
{

    Treap T;
    Position P;
    int i;
    int j = 0;

    T = Initialize( );
    T = MakeEmpty( NullNode );
    /* for( i = 0; i < NumItems; i++, j = ( j + 7 ) % NumItems ) */
    /*     T = Insert( j, T ); */
    /* for( i = 0; i < NumItems; i++ ) */
    /*     if( ( P = Find( i, T ) ) == NullNode || Retrieve( P ) != i ) */
    /*         printf( "Error1 at %d\n", i ); */

    /* for( i = 0; i < NumItems; i += 2 ) */
    /*     T = Remove( i, T ); */

    /* for( i = 1; i < NumItems; i += 2 ) */
    /*     if( ( P = Find( i, T ) ) == NullNode || Retrieve( P ) != i ) */
    /*        printf( "Error2 at %d\n", i ); */

    /* for( i = 0; i < NumItems; i += 2 ) */
    /*     if( ( P = Find( i, T ) ) != NullNode ) */
    /*         printf( "Error3 at %d\n", i ); */
    /* printf( "Min is %d, Max is %d\n", Retrieve( FindMin( T ) ), */
    /*            Retrieve( FindMax( T ) ) ); */


    const int NumItemsSmall = 100;
    for( i = 0; i < NumItemsSmall; i++, j = ( j + 7 ) % NumItemsSmall )
        T = Insert( j, T );
    
    // pretty print tree
    PrintTree(T);

    return 0;
}
