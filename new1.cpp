#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream iofile("hello.txt", ios::in | ios::out);

    if (!iofile.is_open())
    {
        cerr << "Error opening file.\n";
        exit(1);
    }

    // string s;
    // iofile >> s;
    // cout << s << '\n';

    // cout << "File pointer pos (after read): " << iofile.tellp() << '\n';

    // // Reset error flags caused by reading before writing
    // iofile.clear();
    // iofile.seekp(0, ios::beg);  // Move write pointer to beginning

                                        // iofile << "Aayush!";
                                        // iofile << "XYZ";
                                        // iofile << "XYZ";

    // cout << "File pointer pos (after write): " << iofile.tellp() << '\n';

    char c;
    // iofile >> c;
    while (iofile.get(c))
    {
        if (c == 'A' || c == 'a' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        {
            iofile.seekg(-1,ios::cur);
            cout<<c<<endl;
            iofile<<"*";
        }
    }

    iofile.close();
    return 0;
}
