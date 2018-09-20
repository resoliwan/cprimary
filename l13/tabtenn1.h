#ifndef TABTENN0_H_
#define TABTENN0_H_
#include <iostream>

using std::string;

class TableTennisPlayer 
{
private:
  string fristname;
  string lastname;
  bool hasTable;
public:
  TableTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = false);
  void Name() const;
  bool HasTable() const { return hasTable; };
  void ResetTable(bool ht) { hasTable = ht; };
};

class RatedPlayer: public TableTennisPlayer 
{
private:
  unsigned int rating;
public:
  RatedPlayer(unsigned int r = 0,
      const string & fn = "none", const string & ln = "none", bool ht = false);
  RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
  unsigned int Rating() const { return rating; };
  void ResetRating(unsigned int r) { rating = r; };
};
#endif
