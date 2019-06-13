/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Rockhopper Technologies, Inc. All rights reserved.
 *  Licensed under the MIT License.
 *  See LICENSE in the project for license information.
 *--------------------------------------------------------------------------------------------*/


#include <iostream>
#include <iomanip>      // std::setw

int main(int argc, char **argv) {

    std::cout << "Yo" << std::endl;

	auto x = 43.2;
	auto y = 1.6022e23;
	std::cout << std::setw(10);
	std::cout << x << " ac " << y << std::endl;

	//https://en.cppreference.com/w/cpp/utility/program/EXIT_status
	return EXIT_SUCCESS;
}

