#include <iostream>  
#include <iomanip> 
using namespace std;
int main() { 
      int num1 = 10000, num2 = 200000, num3 = 50000, num4 = 0; 
      string kalimat; 
      cout << "Tabel Penjualan " << endl; 
      cout << "--------------------------------" << endl; 
      cout << setw(10) << left << "Bulan"  
      << setw(10) << right << "Penjualan" << endl; 
      cout << "--------------------------------" << endl; 
      cout << setw(10) << left << "Januari" 
      << setw(10) << right << num1 << endl; 
      cout << setw(10) << left << "Februari" 
      << setw(10) << right << num2 << endl; 
      cout << setw(10) << left << "Maret" 
      << setw(10) << right << num3 << endl; 
      cout << setw(10) << left << "April" 
      << setw(10) << right << num4 << endl; 
      cout << "--------------------------------" << endl; 
      return 0;  
}