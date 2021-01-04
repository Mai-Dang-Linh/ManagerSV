#ifndef TableUnit_H_
#define TableUnit_H_
#include <map>
#include <string>

using namespace std;
class TableUnit{
protected:
    map<string,string> Member;
public:
    TableUnit();
    virtual void ToMapMember() = 0;
    virtual void FromMapMember() = 0;
    virtual TableUnit* clonePtr() = 0;

    string ToString();
};
#endif