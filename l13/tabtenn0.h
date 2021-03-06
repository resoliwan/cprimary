#ifndef TABTENN0_H_
#define TABTENN0_H_
#include <iostream>
// firstname
// lastname
// hasTable
// ---
// Name
// HasTable
// ResetTable

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
#endif
