#ifndef TV_H_
#define TV_H_

class Tv
{
public:
  friend class Remote;
  enum {Off, On};
  enum {MinVal = 0, MaxVal = 20};
  enum {Antena, Cable};
  enum {TV, DVD};

  Tv (int s = Off, int mc = 125): state(s), volume(5), 
        maxchannel(mc), channel(2), mode(Cable), input(TV) {};
  void onoff() { state = (state == On) ? Off : On; };
  bool ison() { return state == On; }
  int volup();
  int voldown();
  int chanup();
  int chandown();
  int set_mode() { return mode = (mode == Antena) ? Cable : Antena; };
  int set_input() { return input = (input == TV) ? DVD : TV; };
  void settings() const; // display all settings
private:
  int state;
  int volume;
  int maxchannel;
  int channel;
  int mode;
  int input;
};

class Remote
{
public:
  Remote (int m = Tv::TV): mode(m) {};
  void onoff(Tv & t) { t.onoff(); };
  int volup(Tv & t) { return t.volup(); };
  int voldown(Tv & t) { return t.voldown(); };
  int chanup(Tv & t) { return t.chanup(); };
  int chandown(Tv & t) { return t.chandown(); };
  int set_chan(Tv & t, int c) { t.channel = c; return t.channel; };
  int set_mode(Tv & t) { return t.set_mode(); };
  int set_input(Tv & t) { return t.set_input(); };
private:
  int mode;
};

#endif /* ifndef TV_H_ */
