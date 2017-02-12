#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream txtcode;
	txtcode.open("encrypted.txt");

	if (txtcode.fail()) {
		cout << "File \"encrypted.txt\" cannot be opened." << endl;
		std::system("pause");
		return 1;
	}
	char code[100];
	int i = 0;
	if (txtcode.is_open()) {
		while (txtcode >> code[i]) {
			//txtcode >> code[i];
			switch (code[i]) {
			case '1':
				code[i] = 'a';
				break;
			case '2':
				code[i] = 'e';
				break;
			case '3':
				code[i] = 'i';
				break;
			case '4':
				code[i] = 'o';
				break;
			case '5':
				code[i] = 'u';
				break;
			case '6':
				code[i] = ' ';
				break;
			default:
				break;
			}
			cout << code[i];
			i++;
		}
	}

	ofstream message;
	message.open("message.txt");
	for (int j = 0; j < i; j++) {
		message << code[j];
	}

	txtcode.close();
	message.close();
	system("pause");
	return 0;
}