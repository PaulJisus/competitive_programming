#include "Web.h"

Web::Web() = default;

Web::Web(const string web_page, const int relevance)
{
    this->web_page = web_page;
    this->relevance = relevance;
}

Web::Web(const Web &o)
{
    this->web_page = o.web_page;
    this->relevance = o.relevance;
}

Web::~Web() = default;

string Web::getWeb_Page() const
{
    return this->web_page;
}

void Web::setWeb_Page(const string web_page)
{
    this->web_page =  web_page;
}

int Web::getRelevance() const
{
    return this->relevance;
}

void Web::setRelevance(const int relevance)
{
    this->relevance = relevance;
}

ostream& operator <<(ostream &output, const Web &o)
{
    output << o.getWeb_Page() << '\n';
    return output;
}
