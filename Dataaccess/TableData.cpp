#include "TableData.h"
#include <iostream>
TableData::TableData(TableUnit* ptU)
{
    tableUnit = ptU;
}
// TableData::TableData(string FileName)
// {
//     return 0;
// }
string TableData::ToString()
{
    string s("");
    for(TableUnit* unit:data)
    {
        s += unit->ToString();
        s += "\n";
        cout<<"Hello";
    }
    return s;
}
int TableData::Push(TableUnit *)
{
    TableUnit * unit;
    data.push_back(unit);
    size++;
    return size;
}