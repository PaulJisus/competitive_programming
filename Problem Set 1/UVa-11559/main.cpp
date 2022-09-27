#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    int N{}, B{}, H{}, W{};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin >> N >> B >> H >> W)
    {
        int minimun_cost{};
        for (int i{}; i < H; i++)
        {
            int p{};
            cin >> p;
            for (int j{}; j < W; j++)
            {
                int a{};
                cin >> a;
                if(a >= N && p * N <= B)
                {
                    minimun_cost = p * N;
                }
            }
        }
        if(minimun_cost != 0)
        {
            cout << minimun_cost << '\n';
        }
        else
        {
            cout << "stay home\n";
        }
    }
}
