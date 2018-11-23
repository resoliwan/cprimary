#include <iostream>
#include <vector>
#include <string>

const int SIZE = 2;

struct Review {
    Review() {};
    Review(std::string s, int r): title(s), rating(r) {};
    std::string title;
    int rating;
};

bool fillReview(Review & r);
void showReview(const Review & r);

int main(void)
{
    using namespace std;
    using std::string;
    vector<Review> reviews;
    // Review temp;
    // while (fillReview(temp)) 
    //     reviews.push_back(temp);

   reviews.push_back(*(new Review("a", 1)));
   reviews.push_back(*(new Review("b", 1)));
   reviews.push_back(*(new Review("c", 1)));
   reviews.push_back(*(new Review("d", 1)));
   reviews.push_back(*(new Review("e", 1)));
    
    vector<Review> reviews2 = reviews;
     
    //Is the only way to explicty convert to int?
    // for (int i = 0; i < (int)reviews.size(); ++i) {
    //     showReview(reviews[i]);
    // }

    cout << "Original" << endl;
    for_each(reviews.begin(), reviews.end(), showReview);

    cout << "Delete 3 records" << endl;
    reviews.erase(reviews.begin(), reviews.begin() + 3);

    cout << "After delete" << endl;
    for_each(reviews.begin(), reviews.end(), showReview);

    cout << "Insert 2 records at the end" << endl;
    reviews.insert(reviews.begin(), reviews2.begin(), reviews2.begin() + 3);

    cout << "After insert" << endl;
    for_each(reviews.begin(), reviews.end(), showReview);


    return 0;
}

bool fillReview(Review & r)
{
    using namespace std;
    using std::string;
    cout << "Enter the title (quit to quit): ";
    getline(cin, r.title);
    if (r.title == "quit" || r.title == "q")
        return false;
    cout << "Enter your rating (0-10) : ";
    cin >> r.rating;

    if (!cin)
        return false;

    while (cin.get() != '\n')
        continue;

    return true;

};

void showReview(const Review & r) 
{
    using namespace std;
    cout << r.title << " / " << r.rating << endl;
};
