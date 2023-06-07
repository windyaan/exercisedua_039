#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar {
private:
	int x;
public:
	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukkan jejari : \n" << endl;
		cin >> x;
	}
	float Luas(int a) { 
		a*a*3,14;
		cout << "Luas Lingkaran = " << endl;
		return 0;
	}
	float Keliling(int a) { 
		(a + a)*3,14;
		cout << "Keliling Lingkaran = " << endl;
		return 0;
	}
	void setX(int a) { 
		this->x = a;
	}
	int getX() { 
		return x;
	}
};

class Bujursangkar :public bidangDatar { 
private:
	int y;
public:
	void input() {
		cout << "Bujursangkar dibuat" << endl;
		cout << "Masukkan sisi : \n" << endl;
		cin >> y;
	}
	float Luas(int a) { 
		a*a;
		cout << "Luas Bujursangkar = " << endl;
		return 0;
	}
	float Keliling(int a) { 
		a*4; 
		cout << "Keliling Bujursangkar = " << endl;
		return 0;
	}
	void setX(int a) {
		this->y = a;
	}
	int getX() {
		return y;
	}
};

int main() { 
	Lingkaran x;
	Bujursangkar y;



	return 0;
}