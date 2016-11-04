#pragma once
#ifndef __ASCIITREE_H__
#define __ASCIITREE_H__

//#include "treap.h"

typedef struct asciinode_struct asciinode;
typedef struct Tree Tree;

struct Tree 
{
  Tree * left, * right;
  int element;
};

//printing tree in ascii
struct asciinode_struct
{
  asciinode * left, * right;

  //length of the edge from this node to its children
  int edge_length; 
    
  int height;      

  int lablen;

  //-1=I am left, 0=I am root, 1=right   
  int parent_dir;   
                         
  //max supported unit32 in dec, 10 digits max
  char label[11];  
};
// typedef struct TreapNode Tree;

// asciinode * build_ascii_tree_recursive(Tree * t);
// asciinode * build_ascii_tree(Tree * t);
// void free_ascii_tree(asciinode *node);
// void compute_lprofile(asciinode *node, int x, int y);
// void compute_rprofile(asciinode *node, int x, int y);
// void compute_edge_lengths(asciinode *node);
// void print_level(asciinode *node, int x, int level);
void print_ascii_tree(Tree * t);

#endif // #ifndef __ASCIITREE_H__
