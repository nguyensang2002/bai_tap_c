/*
#include<bits/stdc++.h>
using namespace std;

//class : Lớp
//thuộc tính : attribute
//Phương thức : method , behavior
// object : đối tượng

//Encapsulation : Đóng gói
//Access modifier
//private : Thuộc tính
//public  : phương thức
//protected

class Sinhvien { //ra ngoài thuộc tính class thì private : không thể truy cập được

	//private : // mặc định là phương thức này
	//	string id, ten, ngaysinh;
		//double gpa;

	public:
		void xinchao();
		void dihoc();

	public: // mặc định là phương thức này
		string id, ten, ngaysinh;
		double gpa;

};

//Implementation
void Sinhvien::xinchao() { //chuyền toán tử phạm vi để sử dụng public
	cout << "Hello !\n";
}

void Sinhvien::dihoc() {
	cout << "Di hoc !\n";
}


int main()
{
	Sinhvien x;
	x.dihoc();
	x.xinchao();
	cout << x.id << endl; // nếu mà public thì sử dụng được
	cout << x.gpa << endl;


	return 0;
}


*/