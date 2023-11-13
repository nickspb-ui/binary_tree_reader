#include "Tree.h"

Tree* read_tree (char* input, int* i) {
	Tree* t;
	if (input[*i] == ' ') {
		t = nullptr;
	} else {
		char word;
		t = new Tree[sizeof(Tree)];
		word = input[*i];
		(*i)++;
		t->word = word;

		while (input[(*i)++] != '(');
		t->left = read_tree(input, i);

		while (input[(*i)++] != '(');
		t->right = read_tree(input, i);
	}
	return t;
}


void print_tree(Tree* t, int* x, int y) {
	if (t != nullptr) {
		print_tree(t->left, x, y + 1);
		COORD coord;
		coord.X = *x;
		coord.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);		
		printf("%c", t->word);
		(*x)++;
		print_tree(t->right, x, y + 1);
	}
}
