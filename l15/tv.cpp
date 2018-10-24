#include <iostream>
#include "tv.h"

int Tv::volup()
{
  if (volume < MaxVal)
    volume++;
  return volume;
}

int Tv::voldown()
{
  if (volume > MinVal)
    volume--;
  return volume;
}

int Tv::chanup()
{
  if (channel < maxchannel)
    channel++;
  else
    channel = 1;
  return channel;
}

int Tv::chandown()
{
  if (channel > 1)
    channel--;
  else
    channel = maxchannel;
  return channel;
}

void Tv::settings() const
{
  std::cout << "state: " << (state == On ? "On" : "Off")
    << ", volume: " << volume
    << ", maxchannel: " << maxchannel
    << ", channel: " << channel
    << ", mode: " << (mode == Antena ? "Antena" : "Cable")
    << ", input: " << (input == TV ? "TV" : "DVD") 
    << std::endl;
}





