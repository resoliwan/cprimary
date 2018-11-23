#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

const int MAX = 3;
const std::string words[MAX] = {
    "ababaa",
    "bcbcbb",
    "abcccc"
};

int main(void)
{
    using std::cout;
    using std::endl;
    using std::string;
    using std::cin;
    std::srand(std::time(0));

    while (true) {
        char answer;
        cout << "Will you play a word game? <y/n>?" << endl;
        cin >> answer;
        if (answer == 'y')
        {
            string target = words[std::rand() % MAX];
            int length = target.length();
            int attCnt = 0;
            string attempt(length, '-');
            string badGuesses = "";
            cout << "Gussy my serect word. It has 6 letters," << endl;
            cout << "and you gusss one letter at a time. You get 6 wrong gussess." << endl;
            cout << "Target: " << target << endl;
            while (attCnt++ < length && attempt != target)
            {
                cout << "Your word: " << attempt << endl;
                cout << "Guess a letter: " << endl;
                cin >> answer;
                int loc = 0;
                loc = target.find(answer, loc);
                if (loc == (int)string::npos) 
                {
                    cout << "Bad choices: " << badGuesses << endl;
                    badGuesses += answer;
                }
                else 
                {
                    cout << "Good guess!: " << endl;
                    while(loc != (int)string::npos)
                    {
                        attempt[loc] = answer;
                        loc = target.find(answer, loc + 1);
                    }
                }

                if (attempt == target)
                    cout << "That's right!" << endl;
                else
                    cout << "Your are wrong!" << endl;
            }
        } 
        else
            break;
    }

    cout << "Done\n";

    return 0;
}
