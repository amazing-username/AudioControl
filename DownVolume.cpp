#include <iostream>
#include <fstream>
#include <ios>

int main(int argc, char* argv[])
{
	std::fstream sssssssssliper;
	sssssssssliper.open("currentVolume.txt", std::ios::out);

	const unsigned short DECREMENT = 15;
	unsigned short currentVolume = atoi(*(argv + 1));
	unsigned short newVolume = currentVolume - DECREMENT;

	sssssssssliper << newVolume;
	sssssssssliper.close();

	std::cout << newVolume << std::endl;


	return 0;
}
