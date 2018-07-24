#include<iostream>
#include<fstream>


#include"Volume.h"

void Volume::updateTheCurrentVolume()
{
	std::fstream updateFile;

	updateFile.open(curVolumePath, std::ios::out);

	updateFile << volume;

	updateFile.close();
}
