#include<iostream>

const int Cities = 5;
const int Years = 4;

int main() {
  using namespace std;
  const char * cities[Cities] = {
     "Gribble City", 
     "Gribbletown", 
     "New Gribble", 
     "San Gribble", 
     "Gribble Vista"
  };

  int maxtemps[Years][Cities] = {
    {96, 100, 87, 101, 105}, 
    {96, 98, 91, 107, 104},
    {97, 101, 93, 108, 107},
    {98, 103, 95, 109, 108}
  };

  cout << "Maximum temperatures for 2008 ~ 2011" << endl;
  for(int j = 0; j < Cities; j++) {
    cout << cities[j] << '\t';
    for (int i = 0; i < Years; i++) {
      cout << maxtemps[i][j] << '\t';
    }
    cout << endl;
  }

  return 0;
}

