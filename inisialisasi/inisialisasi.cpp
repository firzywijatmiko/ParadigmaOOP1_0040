#include <iostream>
#include <string>
using namespace std;

//ripositori : pradigmaoop1-
// minimal comit 19

class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;

public:
	mahasiswa(int pid, string pNama, float pNilai) :id(pid), nama(pNama), nilai(pNilai){
		//definisi

	}

	~mahasiswa() {
		cout << "id  = " << id << endl;
		cout << "nama = " << nama << endl;
		cout << "nilai = " << nilai << endl;
	}


};

int main() {
	mahasiswa mhs(12, "Faris", 90.5);

	return 0;
} 

