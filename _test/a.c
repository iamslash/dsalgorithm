#include "treap.h"
#include "asciitree.h"
#include <stdio.h>

#define NumItems 12000

int main( ) {

    /* Treap T; */
    /* Position P; */
    /* int i; */
    /* int j = 0; */

    /* T = Initialize( ); */
    /* T = MakeEmpty( NullNode ); */
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


    //A sample use of these functions.  Start with the empty tree
  //insert some stuff into it, and then delete it
  Tree * root;
  int i;
  root = NULL;    
  
  make_empty(root);

  printf("\nAfter inserting element 10..\n");
  root = insert(10, root);
  print_ascii_tree(root);

  /* printf("\nAfter inserting element 5..\n"); */
  /* root = insert(5, root); */
  /* print_ascii_tree(root); */

  /* printf("\nAfter inserting element 15..\n"); */
  /* root = insert(15, root); */
  /* print_ascii_tree(root); */

  /* printf("\nAfter inserting elements 9, 13..\n"); */
  /* root = insert(9, root); */
  /* root = insert(13, root); */
  /* print_ascii_tree(root); */

  /* printf("\nAfter inserting elements 2, 6, 12, 14, ..\n"); */
  /* root = insert(2, root); */
  /* root = insert(6, root); */
  /* root = insert(12, root); */
  /* root = insert(14, root); */
  /* print_ascii_tree(root); */

  
  /* printf("\n\nAfter deleting a node (14) with no child..\n"); */
  /* root = delete(14, root); */
  /* print_ascii_tree(root); */

  /* printf("\n\nAfter deleting a node (13) with left child..\n"); */
  /* root = delete(13, root); */
  /* print_ascii_tree(root); */

  /* printf("\n\nAfter deleting a node (5) with left and right children..\n"); */
  /* root = delete(5, root); */
  /* print_ascii_tree(root); */

  /*   printf("\n\nAfter deleting a node (10, root node) with left and right children..\n"); */
  /* root = delete(10, root); */
  /* print_ascii_tree(root); */

  /* make_empty(root); */


    return 0;
}
