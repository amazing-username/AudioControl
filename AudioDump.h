#ifndef AUDIODUMP_H
#define AUDIODUMP_H

#include"stdio.h"
#include"stdlib.h"

class AudioDump
{
public:	
	AudioDump()
	{
	
	}

	void dump()
	{
		system("amixer -c 1 get Master > audio.txt");
	}

};

#endif
