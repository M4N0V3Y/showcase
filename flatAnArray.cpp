// flatAnArray.cpp 
// JOSMAR AUGUSTO FONSECA BARBOSA
// RIO DE JANEIRO - BRASIL
// JUST FOR EVALUATION
//
#include <iostream>

int main()
{
    // I am not using a stl
	// complexit O(n^2)
	// I got not time to make something more elegant by now.
	// Thank you.

	int multi_dym[5][5] = { {16, 2, 77, 40, 12}, {16, 2, 77, 40, 12}, {16, 2, 77, 40, 12}, {16, 2, 77, 40, 12}, {16, 2, 77, 40, 12} };
	int _size = 25; // 5 * 5 elements

	int* flat__array = new int[_size];
	int _count = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) { flat__array[_count] = multi_dym[i][j]; _count++; }
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
