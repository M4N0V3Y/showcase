﻿// flatAnArray.cpp 
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
