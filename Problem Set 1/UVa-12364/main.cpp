#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

const int minimo(const int& a, const int& b)
{
    return (b < a) ? b : a;
}

int main()
{
    int N{}, m{}, n{};
    char c{};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    while(N--)
    {
        cin >> c >> m >> n;
        int aux{}, aux_1{(((m + 1)/2) * ((n+ 1)/2))};
        if(c == 'r')
        {
            aux = minimo(m, n);
        }
        else if(c == 'Q')
        {
            aux = minimo(m, n);
        }
        else if(c == 'k')
        {
			aux = aux_1 + (((m)/2) * ((n)/2));
		}
		else
		{
			aux = aux_1;
		}
        cout << aux << '\n';
    }
}
