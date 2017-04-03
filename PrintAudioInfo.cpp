#include <iostream>
#include <fstream>
#include <ios>
#include <string>

int main(int argc, char* argv[])
{
	std::fstream readAudio;
	unsigned short count;
	unsigned short volume;

	readAudio.open("audio.txt", std::ios::in);

	while (!readAudio.eof())
	{
		std::string data;
		readAudio >> data;

		//std::cout << data << " ";

		if (data.compare("Playback") == 0)
		{
			++count;
			std::cout << "Count incremented" << std::endl;
		}
		if (count == 3)
		{
			readAudio >> data;
			volume = atoi(data.c_str());
			std::cout << volume << " value of audio" << std::endl;
			break;
		}
	}
	std::cout << std::endl;

	readAudio.close();
	readAudio.open("currentVolume.txt", std::ios::out);

	readAudio << volume;

	readAudio.close();

	return 0;
}
