#ifndef WEB_H_
#define WEB_H_

#include <string>
#include <iostream>

using std::string;
using std::ostream;

class Web
{
    public:
        Web();
        Web(const string, const int);
        Web(const Web&);
        ~Web();
        string getWeb_Page() const;
        void setWeb_Page(const string);
        int getRelevance() const;
        void setRelevance(const int);
    private:
        string web_page;
        int relevance;
};

ostream& operator <<(ostream &output, const Web &o);

#endif
