#include  "bst.h"
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>

BST<std::string> makeTree(char* filename){
std::string slovo;
	std::ifstream F(filename);
	BST<std::string> *tree = new BST<std::string>;
	char line = ' ';
	while (!F.eof()) {
	
		while ( line < 65 && (!F.eof()) ) {
			F.get(line);
		}

while (  line >= 65  && (!F.eof())){
	if (line >= 65 && line <= 90){
		slovo += line;	
	}
	if (line >= 97 && line <= 122){
		slovo += line;
	}
	
	F.get(line);	
}
for (int i = 0; i < slovo.length(); i++){
	if (slovo[i] >= 65 && slovo[i] <= 90)
		slovo[i] += 32;
}

(*tree).add(slovo);
slovo = "";
	}
	return *tree;
}
