#include "Sinhvien.h"

Sinhvien::Sinhvien(){}

Sinhvien::Sinhvien(string masv, string hoten,string ngaysinh,string gioitinh)
{
     MaSV = masv;
     HoTen = hoten;
     Ngaysinh = ngaysinh; 
     Gioitinh = gioitinh;
}
void Sinhvien::FromMapMember()
{ // if MaSV type int
    // MaSV = stoi (Member["MaSV"]);
    MaSV = Member["MaSV"];
    HoTen = Member["HoTen"];
    Ngaysinh = Member["Ngaysinh"];
    Gioitinh = Member["Gioitinh"];

}
void Sinhvien::ToMapMember()
{ //  if MaSV type int
    //Member["MaSV"] = to_string(MaSV);
    Member["MaSV"] = MaSV;
    Member["HoTen"] = HoTen;
    Member["Ngaysinh"] = Ngaysinh;
    Member["Gioitinh"] = Gioitinh;
}
TableUnit *Sinhvien::clonePtr(){
    TableUnit *pU = new Sinhvien();
    return pU;
}
