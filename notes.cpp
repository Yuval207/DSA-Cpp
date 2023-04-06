#include<iostream>
using namespace std;
int main(){
    int amnt;
    cout << "Enter the amount:" << endl;
    cin >> amnt;
    int one_notes, hundred_notes, twenty_notes, fifty_notes;
    one_notes = hundred_notes = twenty_notes = fifty_notes = 0;
    switch (amnt >= 100)
    {
    case 1:
        hundred_notes = amnt/100;
        amnt -= hundred_notes*100;
        break;
    }
    switch (amnt >= 50)
    {
    case 1:
        fifty_notes = amnt/50;
        amnt -= fifty_notes*50;
        break;
    }
    switch (amnt >= 20)
    {
    case 1:
        twenty_notes = amnt/20;
        amnt-= twenty_notes*20;
        break;
    }
    switch (amnt >= 1)
    {
    case 1:
        one_notes = amnt;
        amnt -= one_notes;
        break;
    }
    cout << "Number of 100 ruppee notes are:" << hundred_notes << endl;
    cout << "Number of 50 ruppee notes are:" << fifty_notes << endl;
    cout << "Number of 20 ruppee notes are:" << twenty_notes << endl;
    cout << "Number of 1 ruppee notes are:" << one_notes << endl;
}