#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float a,b,hasil;
	char operasi;
	
	cout << "                ====Kalkulator Sederhana====\n";
	cout << " Masukan Bilangan Pertama :";
	cin >> a;
	cout << "=====List Operasi Aritmatika=====" <<endl;
	cout << "+ Tambah\n";
	cout << "- Kurang\n";
	cout << "x Kali\n";
	cout << ": Bagi\n";
	cout << "Masukan Operasi Aritmatika :";
	cin >> operasi;
    cout << "Masukan Bilangan Kedua :";
    cin >> b;
    
    if(operasi == '+'){
    	hasil = a + b;
	} else if (operasi == '-') {
	    hasil = a - b;
	} else if (operasi == 'x') {
		hasil = a * b;
	} else if (operasi == ':'){
		hasil = a / b;
	} else {
		cout << "Maaf , Input Yang Anda Masukan Salah X" << endl;
	}
	
	cout << "Hasil Dari Operasi tersebut Adalah: " << hasil << endl;
}
