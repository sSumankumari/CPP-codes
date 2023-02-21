#include<iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0; // do-nothing function --> pure virtual function
};

class CWHVideo : public CWH
{
    int videoLength;

public:
    CWHVideo(string s, float r, int vL) : CWH(s, r)
    {
        videoLength = vL;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        // cout << "This is an amazing text tutorial with title " << title << endl;
        // cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << 
        // cout << "No. of words in this tutorial is: " << words << "words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // For Code with Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // For Code with Harry Video
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}