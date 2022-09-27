#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    int n{};
    long long a{}, b{};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n != 0)
    {
        cin >> a >> b;
        if(a > b)
        {
            cout << char(62) << '\n';
        }
        else if(a < b)
        {
            cout << char(60) << '\n';
        }
        else
        {
            cout << char(61) << '\n';
        }
        n--;
    }
}
