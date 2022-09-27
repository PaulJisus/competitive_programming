#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::string;
using std::vector;

int main()
{
    int t{}, n{};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
    {
        cin >> n;
        int pos{};
        string instruccion{};
        vector<int> arr;
        arr.reserve(n);
        for(int i{}; i < n; i++)
        {
            cin >> instruccion;
            if(instruccion == "LEFT")
            {
                pos--;
                arr.push_back(-1);
            }
            else if(instruccion == "RIGHT")
            {
                pos++;
                arr.push_back(1);
            }
            else
            {
                int num{}, aux{};
                cin >> instruccion >> num;
                aux = arr[num - 1];
                pos += aux;
                arr.push_back(aux);
            }
        }
        cout << pos << '\n';
    }
}
