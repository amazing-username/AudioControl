#include<iostream>

#include"IncreaseVolume.h"
#include"DecreaseVolume.h"

int main(int argc, char* argv[])
{
	std::string action = *(argv + 1);	

	if (action.compare("up") == 0)
		IncreaseVolume iv;
	else if (action.compare("down") == 0)
		DecreaseVolume dv;
	else
		std::cout << "Choose correct action, up or down" << std::endl;

	return 0;
}
