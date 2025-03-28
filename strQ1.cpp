#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    char word[n];
    cin >> word;
    int indx = 0;
    char alpha = ' ';
    cin >> indx >> alpha;
    word[indx] = alpha;

    cout << word << endl;

    return 0;
}