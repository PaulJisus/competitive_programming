#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    int v{}, t{};
    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    while(cin >> v >> t)
    {
        cout << (2 * v * t) << '\n';
    }
}
