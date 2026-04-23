#pragma once
#include <iostream>
using namespace std;

class DaThuc
{
	int bac;
	float* heso;
	void ChuanHoa();
public:
	DaThuc();
	DaThuc(const DaThuc&);
	~DaThuc();
	float getHeSo(int);
	void setHeSo(int, float);
	DaThuc operator+(const DaThuc& b);
	DaThuc operator-(const DaThuc& b);
	DaThuc operator*(const DaThuc& b);
	DaThuc operator/(const DaThuc& b);
	DaThuc operator%(const DaThuc& b);
	bool operator== (const DaThuc& b);
	bool operator!= (const DaThuc& b);
	DaThuc& operator=(const DaThuc& b);
	friend istream& operator>> (istream& is, DaThuc& a) {
		cout << "Hay nhap bac cua da thuc: ";
		is >> a.bac;

		delete[] a.heso;
		a.heso = new float[a.bac + 1];
		
		cout << "Hay nhap he so tu bac " << a.bac << " den bac 0: ";
		for (int i = a.bac; i >= 0; i--) {
			is >> a.heso[i];
		}

		return is;
	}
	friend ostream& operator<< (ostream& os, const DaThuc& a) {
        bool flag = true;

        for (int i = a.bac; i >= 0; i--) {
            if (a.heso[i] != 0) {
                if (a.heso[i] < 0) {
					os << " - ";
                }
                else {
					if (!flag) {
						os << " + ";
					}
                }

                float temp = abs(a.heso[i]);
                if (temp != 1 || i == 0) {
                    os << temp;
                }

                if (i > 0) {
                    os << "x";
                    if (i > 1) os << "^" << i;
                }

                flag = false;
            }
        }

        if (flag) {
            os << "0";
        }

        return os;
    }
};

