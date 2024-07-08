#include <iostream>
using namespace std;
class MasukUniversitas {
public:
 // isi access modifier disini

		int uangPendaftaran;
 int uangPendaftaran;
 // isi daftar variable yang dibutuhkan di bawah ini
 SNBP(int pBiaya) :
	 biaya(pUmur)
  {
	 cout << "biaya pendaftaran" << biaya << "\n" << endl;
  }
public:
 MasukUniversitas() {
 uangPendaftaran = 100000 ;
 
 pendaftaran(int pBiaya) :
	 SNBP(pBiaya)
 {
	 cout << "masuk SNBP biaya 100000\n" << endl;
 }
 // isi nilai default variable yang dibutuhkan di bawah ini
 }
 virtual void namaJalurMasuk() {
	 cout << "SNBP bayar semester pertama 1000000"
 }
 // isi disini dengan fungsi virtual yang dibutuhkan
 void setUangPendaftaran(int nilai) {   
 this->uangPendaftaran = nilai;
 } 
 float getUangPendaftaran() {
 return uangPendaftaran;
 }
 // isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
 // isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas {
 // isi disini untuk melengkapi class SNBP
};
int main() {
 // isi disini untuk fungsi main
}