#include<bits/stdc++.h>
using namespace std;

//class : Lớp
//thuộc tính : attribute
//Phương thức : method , behavior
// object : đối tượng
//constructor : hàm khởi tạo
//destructor : hàm hủy
//Encapsulation : Đóng gói
//Access modifier 
//private : Thuộc tính
//public  : phương thức
//protected
                                           // setter getter
                                          //This pointer : con trỏ This
//nhập thông tin và in thông tin cho 1 sinh viên


class Sinhvien { //ra ngoài thuộc tính class thì private : không thể truy cập được

private: // mặc định là phương thức này
	string id, ten, ngaysinh;
	double gpa;

public:
	Sinhvien();
	Sinhvien(string, string, string, double); 
	void nhap();
	void in();
	double getGPA(); //lấy gpa từ trong private double gpa
	~Sinhvien(); 
};

//Implementation
Sinhvien::Sinhvien() { 
	//cout << "Doi tuong mac dinh duoc tao o day !\n";
	this->id = this->ten = this->ngaysinh = "";
	this->gpa = 0;
}

Sinhvien::Sinhvien(string id, string ten, string ngayinh, double gpa) {
	this->id = id;
	this->ten = ten;
	this->ngaysinh = ngayinh;
	this->gpa = gpa;
}

Sinhvien::~Sinhvien() {
	//cout << "Doi tuong duoc huy tai day!\n";
}

void Sinhvien::getGPA() {
	return this->gpa;
}

bool cmp(Sinhvien a, Sinhvien b) {
	return a.getGPA() > b.getGPA();
}


void Sinhvien::nhap() { //tác dụng cảu con trỏ this để hiểu đâu là tham số(parameter) đâu là thuộc tính class Sinhvien
	cout << "Nhap id :"; cin >> this->id;
	cin.ignore();
	cout << "Nhap ten :"; getline(cin, this->ten);
	cout << "Nhap ngay sinh :"; cin >> this->ngaysinh;
	cout << "Nhap diem :"; cin >> this->gpa;
}

void Sinhvien::in() {
	cout << this->id << " " << this->ten << " " << this->ngaysinh << " " << fixed << setprecision(2) << this->gpa << endl;
}

void abc() { 
	Sinhvien x;
}

int main()
{
	cout << "Nhap so luong sinh vien :";
	int n; cin >> n;
	Sinhvien a[100];
	for (int i = 0; i < n; i++) a[i].nhap();

	for (int i = 0; i < n; i++) a[i].in();


	return 0;
}

