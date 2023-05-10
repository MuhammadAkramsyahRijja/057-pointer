#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method

};

void mahasiswa::showNim() { //inplementasi nethod diluar Class
	cout << "No induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };
	mhs.showNim();

	mahasiswa ref = mhs;
	ref.nim = 2;
	mhs.showNim();

	mahasiswa* pMhs = &mhs;
	pMhs->nim = 3;
	pMhs->showNim();
	system("pause");
	


}

