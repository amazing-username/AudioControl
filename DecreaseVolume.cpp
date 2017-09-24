#include"stdio.h"
#include"stdlib.h"

#include"AudioInformation.h"
#include"DecreaseVolume.h"

DecreaseVolume::DecreaseVolume()
{
	AudioInformation vol;

	volume = vol.getVolume();

	newVolume();
	updateVolume();
	updateTheCurrentVolume();
}


void DecreaseVolume::newVolume()
{
	if ((volume - AFFECTAMOUNT) > playBackOrigin)
	{
		volume = volume - AFFECTAMOUNT;		
	}
	else
	{
		volume = 0;	
	}
}
void DecreaseVolume::updateVolume()
{
	std::string command = "amixer -c 1 set Master ";
	command.append(std::to_string(volume));
	system(command.c_str());
}
