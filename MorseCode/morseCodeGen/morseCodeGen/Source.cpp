//header files
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//Global Variables
//const int USER_INPUT_CAPACITY = 20;

//Function Prototypes
/*
name: promptUser
process: prompts user for input string
function input/parameters: string
function output/parameters: stored as user input
function output/returned: none
device input: keyboard
device output: none
dependencies: iostream, string
*/
string promptUser();

//Main code
void main() {

	string userInput;

	userInput = promptUser();

	cout << userInput << endl;

	system("PAUSE");
}

//Function Implementation

string promptUser() {
	string userInput;
	cout << "Enter text: ";
	cin >> userInput;
	cout << endl;
	return userInput;
}


