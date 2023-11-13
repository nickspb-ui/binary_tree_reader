#pragma once
#define BUFFER_SIZE 1024

#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>


typedef struct Tree {
	char word;
	Tree* left;
	Tree* right;
};


Tree* read_tree(char*, int*);
void print_tree(Tree*, int*, int);
