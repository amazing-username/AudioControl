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

	unsigned short volume;
	const unsigned short AFFECTAMOUNT = 20;

private:	
};

#endif
