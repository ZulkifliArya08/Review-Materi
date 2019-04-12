#include <iostream>
using namespace::std;

double Nilai(string text)
{
    double angka;
    cout<<"masukkan angka"<<text<<" : ";cin>>angka;
    return angka;
}


double hasil (int uts, int uas, int tugas, int absen)
{
double total;
total=uts*0.2 + uas*0.3 + tugas*0.35 + absen*0.15;
cout<<"total : "<<total;
return total;
}

void huruf(double total)
{
    float nhuruf;
    if(total>=81)
        cout<<"\nA";
    else if(total>=61)
        cout<<"\nB";
    else if(total>=41)
        cout<<"\nC";
    else if(total>=21)
        cout<<"\nD";
    else
        cout<<"SADAR";
}
main()
{
    double uts, uas, tugas, absen, total;

    uts=Nilai(" uts ");
    uas=Nilai(" uas ");
    tugas=Nilai(" tugas ");
    absen=Nilai(" absen ");
    total=hasil(uts, uas, tugas, absen);
}

