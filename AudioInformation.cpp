#include <iostream>
#include <fstream>
#include <ios>
#include <string>

#include"AudioInformation.h"

AudioInformation::AudioInformation()
{
	stripInformation();
}


void AudioInformation::stripInformation()
{
	std::fstream readAudio;
	readAudio.open("audio.txt", std::ios::in);
	//std::cout << "In here" << std::endl;
	
	while (!readAudio.eof())
	{
		std::string data;
		readAudio >> data;


		if (data.compare("Playback") == 0)
		{
			++count;
		}
		if (count == 3)
		{
			readAudio >> data;
			std::cout << data << " volume" << std::endl;
			volume = atoi(data.c_str());
			break;
		}
	}
	//std::cout << std::endl;

	readAudio.close();
	readAudio.open("currentVolume.txt", std::ios::out);

	readAudio << volume;

	readAudio.close();
}


unsigned short AudioInformation::getVolume() const
{
	return volume;
}
