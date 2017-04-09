#include<iostream>
#include<fstream>
#include<string>

#include"stdio.h"
#include"stdlib.h"

#include"Volume.h"

void Volume::updateTheCurrentVolume()
{
	std::fstream updateFile;

	updateFile.open("currentVolume.txt", std::ios::out);

	updateFile << volume;

	updateFile.close();
}
