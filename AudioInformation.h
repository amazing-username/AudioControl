#ifndef AUDIOINFORMATION_H
#define AUDIOINFORMATION_H

#include<string>

class AudioInformation
{
public:
	AudioInformation();

	unsigned short getVolume() const;

private:
	void stripInformation();
	
	std::string audioInfoPath{"/usr/lib/AudioControl/audio.txt"};
	unsigned short volume = 0;
	unsigned short count = 0;
	const unsigned short MAXCOUNTS = 3;
};

#endif
