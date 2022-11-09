// PROGRAM MENULISKAN ULANG INPUTAN -'ALFEUS MARTINUS'

#include <iostream>
using namespace std;
int main()
{
    string nama;
    int input_nim;
        cout << "Program menuliskan ulang Inputan \n \n"<<endl;
        cout << "Nama : ";
        getline(cin, nama);

        cout << "NIM : ";
        cin >> input_nim;

        cout << "Hai " <<nama << ",, " << "NIM kamu adalah " <<input_nim;
    cin.get();
    return 0;
}