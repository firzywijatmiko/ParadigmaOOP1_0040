#ifndef ANAK_H
#ifndef ANAK_H

class anak {
public:
	string nama;
	anak(string pNama) :nama(pNnama) {
		cout << "anak \"" << nama << "\" ada\n";
	}
	~anak() {
		cout << "anak \"" << nama << "\" tidak ada\n";
	}
};
#endif
