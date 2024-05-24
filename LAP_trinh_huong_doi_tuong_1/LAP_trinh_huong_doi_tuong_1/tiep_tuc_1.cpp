/*
#include<bits/stdc++.h>
using namespace std;

//class : Lớp
//thuộc tính : attribute
//Phương thức : method , behavior
// object : đối tượng
                                     //constructor : hàm khởi tạo

//Encapsulation : Đóng gói
//Access modifier
//private : Thuộc tính
//public  : phương thức
//protected

class Sinhvien { //ra ngoài thuộc tính class thì private : không thể truy cập được

	private : // mặc định là phương thức này
		string id, ten, ngaysinh;
		double gpa;

	public:
		Sinhvien();//constructor
		Sinhvien(string, string, string, double); // contructor
		void xinchao();
		void dihoc();

};

Sinhvien::Sinhvien() {
	id = ten = ngaysinh = "";
	gpa = 0;
}

//Implementation
//----------
void Sinhvien::xinchao() { //chuyền toán tử phạm vi để sử dụng public
	cout << "Hello !\n";
}
//--------------

void Sinhvien::dihoc() {
	cout << "Di hoc !\n";
}

Sinhvien::Sinhvien(string ma, string name, string birth, double scores) {
	cout << "Ham khoi tao co tham so duoc dong goi !\n";
	id = ma;
	ten = name;
	ngaysinh = birth;
	gpa = scores;

}

Sinhvien::Sinhvien() {
	cout << "Ham khoi tao duoc goi !\n";
}

int main()
{
	//	Sinhvien x;
	Sinhvien x("123", "NguyenHuuSang", "23/13/2002", 3.2); //nếu mà xóa Sinhvien trong public thì báo lỗi
	x.dihoc();
	x.xinchao();


	return 0;
}


*/