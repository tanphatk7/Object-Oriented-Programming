#include "DaThuc.h"

DaThuc::DaThuc() {
	bac = 0;
	heso = new float[1];
	heso[0] = 0;
}
DaThuc::DaThuc(const DaThuc& b) {
	this->bac = b.bac;
	this->heso = new float[this->bac + 1];
	for (int i = 0; i <= this->bac; i++) {
		this->heso[i] = b.heso[i];
	}
}
DaThuc::~DaThuc() {
	delete[] heso;
}
float DaThuc::getHeSo(int so_mu) {
	if (so_mu >= 0 && so_mu <= bac) {
		return heso[so_mu];
	}
	return 0;
}
void DaThuc::setHeSo(int so_mu, float val) {
	if (so_mu >= 0 && so_mu <= bac) {
		heso[so_mu] = val;
	}
}
DaThuc DaThuc::operator+(const DaThuc& b) {
	DaThuc res;
	if (this->bac > b.bac) {
		res.bac = this->bac;
	}
	else {
		res.bac = b.bac;
	}

	delete[] res.heso;
	res.heso = new float[res.bac + 1];

	for (int i = 0; i <= res.bac; i++) {
		res.heso[i] = 0;
		if (i <= this->bac) {
			res.heso[i] += this->heso[i];
		}
		if (i <= b.bac) {
			res.heso[i] += b.heso[i];
		}
	}
	return res;
}
DaThuc DaThuc::operator-(const DaThuc& b) {
	DaThuc res;
	if (this->bac > b.bac) {
		res.bac = this->bac;
	}
	else {
		res.bac = b.bac;
	}

	delete[] res.heso;
	res.heso = new float[res.bac + 1];

	for (int i = 0; i <= res.bac; i++) {
		res.heso[i] = 0;
		if (i <= this->bac) {
			res.heso[i] += this->heso[i];
		}
		if (i <= b.bac) {
			res.heso[i] -= b.heso[i];
		}
	}
	return res;
}
DaThuc DaThuc::operator*(const DaThuc& b) {
	DaThuc res;
	res.bac = this->bac + b.bac;

	delete[] res.heso;
	res.heso = new float[res.bac + 1];

	for (int i = 0; i <= res.bac; i++) {
		res.heso[i] = 0;
	}

	for (int i = 0; i <= this->bac; i++) {
		for (int j = 0; j <= b.bac; j++) {
			res.heso[i + j] += this->heso[i] * b.heso[j];
		}
	}
	res.ChuanHoa();
	return res;
}
DaThuc DaThuc::operator/(const DaThuc& b) {
	DaThuc thuong;
	DaThuc du = *this;

	if (du.bac < b.bac) return thuong; // Nếu đa thức bị chia có bậc nhỏ hơn đa thức chia -> Thương = 0

	thuong.bac = du.bac - b.bac;
	delete[] thuong.heso;
	thuong.heso = new float[thuong.bac + 1];

	for (int i = 0; i <= thuong.bac; i++) {
		thuong.heso[i] = 0;
	}

	while (du.bac >= b.bac && du.bac != 0 && du.heso[0] != (float)0.0) {
		int delta_bac = du.bac - b.bac;
		float delta_heso = du.heso[du.bac] / b.heso[b.bac];

		thuong.heso[delta_bac] = delta_heso;

		DaThuc temp; // Đa thức chứa kết quả của thương vừa tìm được nhân cho đa thức chia
		temp.bac = delta_bac + b.bac;
		delete[] temp.heso;
		temp.heso = new float[temp.bac + 1];
		for (int i = 0; i <= temp.bac; i++) {
			temp.heso[i] = 0;
		}

		for (int i = 0; i <= b.bac; i++) {
			temp.heso[i + delta_bac] = b.heso[i] * delta_heso;
		}

		du = du - temp; // Dư = Đa thức bị chia - tích vừa nhân được
		du.ChuanHoa(); 
	}

	thuong.ChuanHoa();
	return thuong;
}
DaThuc DaThuc::operator%(const DaThuc& b) {
	if (b.bac == 0 && b.heso[0] == (float)0.0) { // Trường hợp đa thức chia là 0
		return *this;
	}

	DaThuc du = *this;
	if (du.bac < b.bac) return du;

	while (du.bac >= b.bac && !(du.bac == 0 && abs(du.heso[0]) < 1e-5)) {
		int khoang_cach_bac = du.bac - b.bac;
		float ti_le_he_so = du.heso[du.bac] / b.heso[b.bac];

		DaThuc temp;
		temp.bac = khoang_cach_bac + b.bac;
		delete[] temp.heso;
		temp.heso = new float[temp.bac + 1];
		for (int i = 0; i <= temp.bac; i++) temp.heso[i] = 0;

		for (int i = 0; i <= b.bac; i++) {
			temp.heso[i + khoang_cach_bac] = b.heso[i] * ti_le_he_so;
		}

		du = du - temp;
		du.ChuanHoa();
	}

	return du;
}
bool DaThuc::operator== (const DaThuc& b) {
	if (this->bac != b.bac) return false;
	for (int i = 0; i <= this->bac; i++) {
		if (this->heso[i] != b.heso[i]) {
			return false;
		}
	}
	return true;
}
bool DaThuc::operator!= (const DaThuc& b) {
	if (this->bac != b.bac) return true;
	for (int i = 0; i <= this->bac; i++) {
		if (this->heso[i] != b.heso[i]) {
			return true;
		}
	}
	return false;
}
DaThuc& DaThuc::operator=(const DaThuc& b) {
	delete[] this->heso;

	this->bac = b.bac;
	this->heso = new float[this->bac + 1];
	for (int i = 0; i <= this->bac; i++) {
		this->heso[i] = b.heso[i];
	}
	return *this;
}

DaThuc DaThuc::operator++(int) {
	DaThuc res(*this);
	this->heso[0] += 1;
	return res;
}
DaThuc& DaThuc::operator++() {
	this->heso[0] += 1;
	return *this;
}

DaThuc DaThuc::operator--(int) {
	DaThuc res(*this);
	this->heso[0] -= 1;
	return res;
}
DaThuc& DaThuc::operator--() {
	this->heso[0] -= 1;
	return *this;
}

void DaThuc::ChuanHoa() {
	int bac_thuc_te = bac;
	while (bac_thuc_te > 0 && heso[bac_thuc_te] == (float)0.0) { // Tìm lại bậc của đa thức
		bac_thuc_te--;
	}

	if (bac_thuc_te != bac) { // Nếu bậc có thay đổi
		float* heso_moi = new float[bac_thuc_te + 1];
		for (int i = 0; i <= bac_thuc_te; i++) {
			heso_moi[i] = heso[i];
		}
		delete[] heso;
		heso = heso_moi;
		bac = bac_thuc_te;
	}
}