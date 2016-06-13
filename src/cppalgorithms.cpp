//============================================================================
// Name        : cppalgorithms.cpp
// Author      : Javier
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include <vector>
#include <algorithm>


#include "erase_remove/EraseRemove.h"
#include "modifying_algo/BackInserter.h"

using namespace std;

int main() {

	erase_remove::eraseRemove();

	modifying_algo::backInserter();
	modifying_algo::noBackInserter();

	return 0;
}
