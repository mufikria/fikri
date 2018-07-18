//======================================================================TUGAS AKHIR SEMESTER 2 PEMOGRAMAN=====================================================================================
// MEMBUAT PROGRAM OOP CLASS AND OBJECT
//Nama : Muhammad Fikri Aminullah
//NIM  : 17.11.1579
#include<iostream>
using namespace std;

class luas{
public:
		double panjang;// panjang luas objek
		double lebar;// lebar luas panjang
		double alas;// pajang alas objek
		double tinggi;// tinggi objek
		double sisi;//sisi objek
		double phi=22/7;//phi rumus lingkaran 
		double r;//jari jari lingkaran
		void print()
		{
			
	}
};

int main()
{
cout<<"++++++++++++++++++++++++++++++++++++++++TUGAS AKHIR SEMESTER 2 PEMOGRAMAN++++++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<"\n=============================================="<<endl;
cout<<"		luas objek :		"<<endl;
cout<<"=============================================="<<endl;

	luas objek1,objek2,objek3,objek4,objek5;// deklarasi 2 objek obj1 dan obj2 untuk kelas box
	double Luas = 0.0; // menyimpan Luas objek
	
	
	//spesifikasi luas objek1(persegi panjang)
	objek1.panjang = 6.0;
	objek1.lebar = 3.0;
	
	//spesifikasi luas objek2(segitiga)
	objek2.alas = 10.0;
	objek2.tinggi = 5.0;
	
	//spesifikasi luas objek3(jajar genjang)
	objek3.alas = 2.0;
	objek3.tinggi = 5.0;

	//spesifikasi luas objek4(persegi
	objek4.sisi = 2.0;
	
	//spesifikasi luas objek5(persegi
	objek5.r = 7.0;
	
	
	//Luas objek bidang datar 1 = persegi panjang 
	Luas = objek1.panjang * objek1.lebar;
	cout<<"Persegi panjang  : "<< Luas <<endl;
	
	//Luas objek bidang datar 2 = segitiga 
	Luas =  (objek2.alas * objek2.tinggi)/2;// rummus: (alas x tinggi)/2
	cout<<"Segitiga	 : " << Luas <<endl;
	
	//Luas objek bidang datar3 = jajar genjang 
	Luas =  objek3.alas * objek3.tinggi;// rumus: (alas jajar genjang x tinggi tinggi jajar genjang)
	cout<<"Jajar genjang    : " << Luas <<endl;
	
	//Luas objek bidang datar 4 = persegi
	Luas =  objek4.sisi * objek4.sisi;//rumus : Sisi x sisi
	cout<<"Persegi   	 : " << Luas <<endl;
	
	//Luas objek bidang datar 5 = persegi
	Luas =  objek5.phi * objek5.r * objek5.r;//rumus : Sisi x sisi
	cout<<"Lingkaran   	 : " << Luas <<endl;
	
}
