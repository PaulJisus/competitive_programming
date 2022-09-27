#include <iostream>
#include <string>
#include "Web.h"

#define TAM 10

using std::cin;
using std::cout;
using std::ios_base;
using std::string;

int main()
{
    int t{};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for(int i{1}; i <= t; i++)
    {
        Web arr[TAM];
        string web_page{};
        int may{}, relevance{}, j{};
        while(j != TAM)
        {
            cin >> web_page >> relevance;
            arr[j].setWeb_Page(web_page);
            arr[j].setRelevance(relevance);
            if(arr[j].getRelevance() > may)
            {
                may = arr[j].getRelevance();
            }
            j++;
        }
        j = 0;
        cout << "Case " << i << ": " << '\n';
        while(j != TAM)
        {
            if(arr[j].getRelevance() == may)
            {
                cout << arr[j];
            }
            j++;
        }
    }
}
