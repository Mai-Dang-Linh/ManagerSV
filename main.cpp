#include <iostream>
#include <string>
#include "ManagerST/TableUnit.h"
#include "ManagerST/Sinhvien.h"
#include "Dataaccess/TableData.h"


using namespace std;
int main()
{
    TableData *data;
    Sinhvien* sv1 = new Sinhvien{"SV001","Do Thi Ha","1999-12-22","Nu"};
    Sinhvien* sv2 = new Sinhvien{"Sv002","Le Binh Minh","2000-08-19","Nam"};
    Sinhvien* sv3 = new Sinhvien{"SV003","Nguyen Minh Canh","1997-04-09","Nam"};
    Sinhvien* sv4 = new Sinhvien{"SV004","Le Huu Long","2000-01-02","Nam"};
    data->Push(sv1);
    data->Push(sv2);
    data->Push(sv3);
    data->Push(sv4);

    cout << data->ToString();

    cout<< "hello ";
    return 0;
}