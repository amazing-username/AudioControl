#include <iostream>
#include <fstream>
#include <ios>
#include <string>

#include"AudioInformation.h"
#include"AudioDump.h"

AudioInformation::AudioInformation()
{
	AudioDump ad;
	ad.dump();
	stripInformation();
}


void AudioInformation::stripInformation()
{
	std::fstream readAudio;
	readAudio.open("audio.txt", std::ios::in);
	
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
			volume = atoi(data.c_str());
			break;
		}
	}

	readAudio.close();
	readAudio.open("currentVolume.txt", std::ios::out);

	readAudio << volume;

	readAudio.close();
}


unsigned short AudioInformation::getVolume() const
{
	return volume;
}
