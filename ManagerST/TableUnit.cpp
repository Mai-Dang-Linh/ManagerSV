#include "TableUnit.h"

TableUnit::TableUnit(){
    Member.clear();
}
string TableUnit::ToString()
{
    ToMapMember();
    map<string,string>::iterator it;
    string s("");
    for(it = Member.begin(); it!=Member.end();it++)
    {
        s += it->second + ", ";
    };
    s.resize(s.size()-2);
    s = "{" + s + " }";
    return s;
}