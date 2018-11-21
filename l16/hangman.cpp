#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::string;
using std::cin;

const int MAX = 3;

int main(void)
{
    std::string words[MAX] = {
        "ababaa",
        "bcbcbb",
        "abcccc"
    };

    std::srand(std::time(0));

    string word = "------";
    string badGuesses = "";
    while (true) {
        char answer;
        cout << "Will you play a word game? <y/n>?" << endl;
        cin >> answer;
        if (answer == 'y')
        {
            int idx = std::rand() % MAX;
            string target = words[idx];
            cout << "Gussy my serect word. It has 6 letters," << endl;
            cout << "and you gusss one letter at a time. You get 6 wrong gussess." << endl;
            cout << "Target: " << target << endl;
            for (int i = 0; i < 6; ++i) 
            {
                cout << "Your word: " << word << endl;
                cout << "Guess a letter: " << endl;
                cin >> answer;
                std::string::size_type occIdx = 0;
                for (int i = 0; i < 6; ++i) 
                {
                    occIdx = target.find(answer, occIdx);
                    // cout << "occIdx: " << occIdx <<endl;
                    if (occIdx == std::string::npos) 
                    {
                        badGuesses += answer;
                        break;
                    }
                    else 
                    {
                        word[occIdx] = answer;
                        occIdx++;
                    }
                }

                if (word == target)
                    break;

                if (target.find(answer) == std::string::npos) 
                    cout << "Bad choices: " << badGuesses << endl;
                else 
                    cout << "Good guess!: " << endl;
            }

            if (word == target)
                cout << "That's right!" << endl;
            else
                cout << "Your are wrong!" << endl;
        } 
        else
            break;
    }

    cout << "Done\n";

    return 0;
}
