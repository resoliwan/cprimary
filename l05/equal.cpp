#include<iostream>

int main() {
  using namespace std;

  int quizscore[10] = {1,1,1,1,2,1,1,1,1,2};

  for (int i = 0; quizscore[i] == 1; i++) {
    cout << "i: " << i << "score: " << quizscore[i] << endl;
  }

  // for (int i = 0; quizscore[i] = 1; i++) {
  //   cout << "i: " << i << "score: " << quizscore[i] << endl;
  // }

  return 0;
}

