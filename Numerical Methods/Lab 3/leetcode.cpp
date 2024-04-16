#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    string var;
    cout << "Enter a string of containing multiple spaces: ";
    cin >> var;
    // int len=var.length();
    int space_position = 0;
    for (int i = 0; i < var.length(); i++)
    {
        if (var[i] == ' ')
        {

            space_position = i;
            cout << "i value" << i << endl;
        }
    }
    // counting the word length now
    int counter = 0;
    for (int i = space_position; i < var.length(); i++)
    {
        counter++;
        cout << "helo";
    }
    cout << "totol length= " << var.length() << endl;
    cout << endl
         << "The wordlength of last word is: " << counter;
}