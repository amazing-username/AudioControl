#ifndef AUDIOINFORMATION_H
#define AUDIOINFORMATION_H

#include<string>

using std::string;

class AudioInformation
{
public:
	AudioInformation();

	unsigned short getVolume() const;

	
	static string audioConfigPath;
private:
	void stripInformation();
	
	string audioInfoPath;
	string currentVolumnPath;
	unsigned short volume = 0;
	unsigned short count = 0;
	const unsigned short MAXCOUNTS = 3;
};

#endif
