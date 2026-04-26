// funzioni.cpp
#include "funzioni.h"

#include <iostream>

void input_word(const char* prompt, char* buffer, int size) {
	if (!buffer || size <= 0) {
		return;
	}
	std::cout << prompt;
	std::cin >> buffer;
}

int input_int(const char* prompt) {
	int value = 0;
	std::cout << prompt;
	std::cin >> value;
	return value;
}
