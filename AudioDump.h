#ifndef AUDIODUMP_H
#define AUDIODUMP_H

#include<string>
#include"stdio.h"
#include"stdlib.h"

class AudioDump
{
public:	
	AudioDump() { }

	void dump()
	{
		//system("amixer -c 1 get Master > " + audioDump);
		command += audioDump;
		system(command.c_str() );
	}

private:
	std::string command{"amixer -c 1 get Master > "};
	std::string audioDump{"/usr/lib/AudioControl/audio.txt"};	
};

#endif
