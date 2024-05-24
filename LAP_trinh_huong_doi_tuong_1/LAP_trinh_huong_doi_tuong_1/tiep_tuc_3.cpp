/*
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

							   //nhập thông tin và in thông tin cho 1 sinh viên


class Sinhvien { //ra ngoài thuộc tính class thì private : không thể truy cập được

private: // mặc định là phương thức này
	string id, ten, ngaysinh;
	double gpa;

public:
	Sinhvien();//constructor
	Sinhvien(string, string, string, double); // contructor
	void nhap();
	void in();
	~Sinhvien(); //destructor : hàm hủy // kết thúc sẽ có hàm này
};

//Implementation
Sinhvien::Sinhvien() { // khởi tạo trong Sinhvien();//constructor
	//cout << "Doi tuong mac dinh duoc tao o day !\n";
	id = ten = ngaysinh = "";
	gpa = 0;
}

Sinhvien::Sinhvien(string ma, string name, string birth, double scores) {
	cout << "Ham khoi tao co tham so duoc dong goi !\n";
	id = ma;
	ten = name;
	ngaysinh = birth;
	gpa = scores;
}

Sinhvien::~Sinhvien() {
	//cout << "Doi tuong duoc huy tai day!\n";
}

void Sinhvien::nhap() {
	cout << "Nhap id :"; cin >> id;
	cin.ignore();
	cout << "Nhap ten :"; getline(cin, ten);
	cout << "Nhap ngay sinh :"; cin >> ngaysinh;
	cout << "Nhap diem :"; cin >> gpa;
}

void Sinhvien::in() {
	cout << id << " " << ten << " " << ngaysinh << " " << fixed << setprecision(2) << gpa << endl;
}

void abc() { // tạo trong Sinhvien::Sinhvien() rồi hết sang hàm hủy
	Sinhvien x;
}

int main()
{
	Sinhvien x;
	x.nhap();
	x.in();


	return 0;
}


*/