#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    char word[n];
    cin >> word;
    int freq[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int term = word[i];
        for (int j = 0; j < n; j++)
        {
            if (term == word[j])
            {
                freq[i] += 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << word[i] << " : " << freq[i] << endl;
    }

    return 0;
}