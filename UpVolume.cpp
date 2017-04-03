#include <iostream>
#include <fstream>
#include <ios>

int main(int argc, char* argv[])
{
	std::fstream cv;
	cv.open("currentVolume.txt", std::ios::out);
	const unsigned short INCREMENT = 15;
	unsigned short currentVolume = atoi(*(argv + 1));
	unsigned short newVolume = currentVolume + INCREMENT;

	cv << newVolume;
	std::cout << newVolume << std::endl;

	cv.close();

	return 0;
}
