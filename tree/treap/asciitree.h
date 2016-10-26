#pragma once
#ifndef __ASCIITREE_H__
#define __ASCIITREE_H__

//#include "treap.h"

// struct TreapNode;
struct Tree;
struct asciinode_struct;

typedef struct asciinode_struct asciinode;
typedef struct Tree Tree;
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
