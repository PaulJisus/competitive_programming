#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    int t{}, n{}, c{};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
    {
        cin >> n;
        int may{}, s{};
        while(n--)
        {
            cin >> s;
            if(may < s)
            {
                may = s;
            }
        }
        cout << "Case " << ++c << ": " << may << '\n';
    }
}
