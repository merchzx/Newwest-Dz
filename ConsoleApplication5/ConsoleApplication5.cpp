#include <iostream>
#include <random>
using namespace std;
class Drob {
	float znam;
	float chisl;
public:
	void Prov(int a, int b) {
		znam = b;
		chisl = a;
		if (b == 0) {
			cout << "Znamenatel is can`t be ZERO!!!";
		}
	}
	void Rand() {
		srand(time(0));
		znam = rand() % 100 + 3;
		chisl = rand() % 100 + 3;
	}
	void Show() {
		cout << chisl << "/" << znam << " = " << chisl / znam;
	}

	void SetX(int x) {
		znam = x;
	}

	void SetY(int y) {
		chisl = y;
	}

	int GetX() {
		return znam;
	}

	int GetY() {
		return chisl;
	}
};
int main()
{
	srand(time(0));
	Drob k;
	Drob f;
	f.Prov(4, 5);
	f.Show();
	cout << endl;
	k.Rand();
	k.Show();
	cout << endl;
	int g = k.GetX();
	int n = k.GetY();
	cout << "Znam ->" << n<<endl<<"Chisl ->"<<g<<endl;
	cout << k.GetX() + k.GetY();
}
