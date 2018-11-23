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


bool operator<(const Review & r1, const Review & r2);
bool decrese(const Review & r1, const Review & r2);
bool fillReview(Review & r);
void showReview(const Review & r);

int main(void)
{
    using namespace std;
    using std::string;
    vector<Review> reviews;
    reviews.push_back(*(new Review("b", 2)));
    reviews.push_back(*(new Review("a", 1)));
    reviews.push_back(*(new Review("c", 3)));
    reviews.push_back(*(new Review("d", 4)));
    reviews.push_back(*(new Review("e", 5)));
    
    cout << "Original" << endl;
    for_each(reviews.begin(), reviews.end(), showReview);

    cout << "Sort " << endl;
    std::sort(reviews.begin(), reviews.end());

    cout << "After Sort" << endl;
    for_each(reviews.begin(), reviews.end(), showReview);

    cout << "Sort by rating" << endl;
    std::sort(reviews.begin(), reviews.end(), decrese);

    cout << "After Sort" << endl;
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


bool operator<(const Review & r1, const Review & r2)
{
    if (r1.title < r2.title)
        return true;
    if (r1.title == r2.title && r1.rating < r2.rating)
        return true;

    return false;
};

bool decrese(const Review & r1, const Review & r2){
    if (r1.rating > r2.rating)
        return true;
    return false;
};
