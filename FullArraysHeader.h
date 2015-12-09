#include <iostream>
using namespace std;

// Preconditions : If file used as argument, must be open
// Postconditions: Prints formatted title block to selected ostream
void showIntro(ostream &output = cout);

// Preconditions : NONE
// Postconditions: Returns 'Y' or 'N' (not case sensitive)
char getYesNo();

// Preconditions : size is the logical size of the array to be filled
// Postconditions: fills an integer array of given size entirely with fives
void loadArray5s(int allFives[], int size);

// Preconditions : size is the logical size of the array to be filled
// Postconditions: fills an integer array of given size with even numbers, starting at 2
void loadArrayEven(int even[], int size);

// Preconditions : size is the logical size of the array to be filled
// Postconditions: fills an integer array of given size with odd numbers, starting at 1
void loadArrayOdd(int odd[], int size);

// Preconditions : size is the logical size of the array to be filled
// Postconditions: fills an integer array of given size with prime numbers, starting at 1
void loadArrayPrime(int prime[], int size);


// Preconditions : size is the logical size of the array to be filled
// Postconditions: fills an integer array of given size with perfect squares, starting at 1
void loadArraySquares(int squares[], int size);

// Preconditions : integer larger than 2
// Postconditions: returns boolean value true if number is prime, false if now
bool isPrime(int x);

// Preconditions : size is the logical size of arrayToPrint[]
//				 : numPerLine > 0
//				 : file must be opened prior to use as &output
// Postconditions: prints a formatted array with numPerline indices per line to the given ostream
void printArray(int arrayToPrint[], int size, int numPerLine = 5, ostream &output = cout);