#include<iostream>
#include<string>

#include"stdio.h"
#include"stdlib.h"

#include"IncreaseVolume.h"
#include"DecreaseVolume.h"

int main(int argc, char* argv[])
{
	std::string action = *(argv + 1);	

	if (action.compare("up") == 0)
	{
		IncreaseVolume iv;
		//iv.setVolume(30);

		std::cout << "Volume test: " << iv.getVolume() << std::endl;
	}
	else if (action.compare("down") == 0)
	{
		DecreaseVolume dv;
		//dv.setVolume(70);
		std::cout << "Volume test: " << dv.getVolume() << std::endl;
	}
	else
	{
		std::cout << "Not the same" << std::endl;
	}

	return 0;
}
