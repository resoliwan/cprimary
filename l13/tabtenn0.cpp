#include "tabtenn0.h"

TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht)
  : fristname(fn), lastname(ln), hasTable(ht) {}

void TableTennisPlayer::Name() const {
  std::cout << lastname << ", " << fristname;
}
