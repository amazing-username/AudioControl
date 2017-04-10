#ifndef VOLUME_H
#define VOLUME_H

#include<string>

class Volume
{
public:

	Volume()
	{
	
	}
	void setVolume(const unsigned short& volume)
	{
		this->volume = volume;
	}

	unsigned short getVolume() const
	{
		return volume;
	}
	void updateTheCurrentVolume();
	virtual void updateVolume() = 0;
	virtual void newVolume() = 0;

protected:

	short volume;
	unsigned short playBackOrigin = 0;
	unsigned short playBackEnd = 127;
	const unsigned short AFFECTAMOUNT = 20;

private:	
};

#endif
