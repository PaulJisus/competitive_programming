#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    int N{}, F{}, A{};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    while(N--)
    {
        cin >> F >> A;
        for(int i{1}; i <= F; i++)
        {
            for(int j{1}; j <= A; j++)
            {
                for(int k{1}; k <= j; k++)
                {
                    cout << j;
                }
                cout << "\n";
            }
            for(int j{A-1}; j >= 1; j--)
            {
                for(int k{1}; k <= j; k++)
                {
                    cout << j;
                }
                cout << "\n";
            }
            cout << '\n';
        }
        if(N)
        {
            cout << '\n';
        }
    }
    return 0;
}
