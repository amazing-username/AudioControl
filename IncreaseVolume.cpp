#include"stdio.h"
#include"stdlib.h"

#include"IncreaseVolume.h"
#include"AudioInformation.h"

IncreaseVolume::IncreaseVolume()
{
	AudioInformation vol;

	volume = vol.getVolume();
	
	newVolume();
	updateVolume();
	updateTheCurrentVolume();
}


void IncreaseVolume::newVolume()
{
	volume = volume + AFFECTAMOUNT;
}
void IncreaseVolume::updateVolume()
{
	std::string command = "amixer -c 1 set DAC0 ";
	command.append(std::to_string(volume));
	system(command.c_str());
}
