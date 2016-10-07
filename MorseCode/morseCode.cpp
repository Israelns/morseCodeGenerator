//header files
#include <iostream>
#include <cstdlib>

using namespace std;

//Global Variables
const int USER_INPUT_CAPACITY = 20;

//Function Prototypes
/*
name: promptUser
process: prompts user for input string
function input/parameters: string
function output/parameters: stored as user input
function output/returned: none
device input: keyboard
device output: none
dependencies: iostream
*/
void promptUser(char userInput [USER_INPUT_CAPACITY]);

//Main code
void main() {

	promptUser(userInput);

	cout << userInput;

	system("PAUSE");
}

//Function Implementation

void promptUser(char userInput[USER_INPUT_CAPACITY]) {
	
	cout << "Enter text: ";
	cin >> userInput;


}


