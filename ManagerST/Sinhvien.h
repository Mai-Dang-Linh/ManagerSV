#ifndef Sinhvien_H_
#define Sinhvien_H_
#include <string>
#include "TableUnit.h"

using namespace std;
class Sinhvien:public TableUnit{
private:
    string MaSV;
    string HoTen;
    string Ngaysinh;
    string Gioitinh;
public:
    Sinhvien();
    Sinhvien(string masv, string hoten,string ngaysinh,string gioitinh);
    void ToMapMember();
    void FromMapMember();
    TableUnit* clonePtr();

};
#endif