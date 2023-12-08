#include <bits/stdc++.h>
#define ll long long
using namespace std;
int konversi(char str)
{
    ll nilai = 0;
    switch (str)
    {
    case 'I':
        nilai = 1;
        break;
    case 'V':
        nilai = 5;
        break;
    case 'X':
        nilai = 10;
        break;
    case 'L':
        nilai = 50;
        break;
    case 'C':
        nilai = 100;
        break;
    case 'D':
        nilai = 500;
        break;
    case 'M':
        nilai = 1000;
        break;
    case '\0':
        nilai = 0;
        break;
    default:
        nilai = -1;
    }
    return nilai;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string romawi;
    cin >> romawi;
    ll i = 0;
    ll total = 0;
    while (romawi[i])
    {
        if (konversi(romawi[i]) >= konversi(romawi[i + 1]))
        {
            total += konversi(romawi[i]);
        }
        else
        {
            total += (konversi(romawi[i + 1]) - konversi(romawi[i]));
            i++;
        }
        i++;
    }
    cout << total << endl;
    return 0;
}
