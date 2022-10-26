#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string insert_characters(string s)
{
    int n = s.size();

    if (n == 0)
        return "";

    string t = s;
    reverse(t.begin(), t.end());

    for (int i = 1; i < n; i++)
    {
        if (s.substr(i).compare(t.substr(0, n - i)) == 0)
            return s.substr(0, i) + t;
    }

    return t;
}

int main()
{
    string s = "race";
    cout << insert_characters(s) << endl;
    return 0;
}