#include "Tree.h"

using namespace std;

int main() {
	char input[BUFFER_SIZE];
	ifstream input_stream;
	input_stream.open("in.txt", ios::in);
	input_stream.getline(input, sizeof(input));
	input_stream.close();
	int iter = 0, x = 0;
	Tree* tree = read_tree(input, &iter);
	print_tree(tree, &x, 0);
	cout << endl << endl;
}