#ifndef AUDIOINFORMATION_H
#define AUDIOINFORMATION_H

class AudioInformation
{
public:
	AudioInformation();

	unsigned short getVolume() const;

private:
	void stripInformation();
	
	unsigned short volume = 0;
	unsigned short count = 0;
	const unsigned short MAXCOUNTS = 3;
};

#endif
