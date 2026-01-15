#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main()  {
	setlocale(LC_ALL, "Turkish");
	
	double a, b, c;
	double delta, x1 ,x2;
	
	cout <<"Ýkinci dereceden denklem (ax^2 + bx + c = 0) çözümü için katsayýlarý giriniz." << endl;
	
	cout <<"a Katsayýsýný Giriniz: ";
	cin >> a;
	
	cout <<"b Katsayýsýný Giriniz: ";
	cin >> b;
	
    cout <<"c Katsayýsýný Giriniz: ";
	cin >> c;
	
	delta = (b * b) - (4 * a * c);
	cout << "\n---------------------------------------" << endl;
	cout << "Diskriminat (Delta): " << delta << endl;
	cout << "----------------------------------------" << endl;
	
	if (delta < 0) {
		cout << "Sonuç: Delta < 0 olduðundan iki farklý gerçek kök yoktur." << endl;
	}
	else if (delta == 0) {
		x1 = -b / (2 * a);
		cout << "Sonuç: Delta < 0 olduðundan tek bir gerçek kök vardýr." <<endl;
		cout << "Kök (x): " << x1 << endl;
	}
    else {
    	x1 = (-b + sqrt(delta)) / (2 * a);
    	x2 = (-b - sqrt(delta)) / (2 * a);
			
    	cout << "Sonuç: Delta > 0 olduðundan iki farklý gerçek kök vardýr." << endl;
    	cout << "Birinci Kök (x1): " << x1 << endl;
    	cout << "Ýkinci Kök (x2): " << x2 << endl;
	}
	
	cout << "\n---------------------------------------" << endl;
	cout << " Çýkmak için bir tuþa basýnýz..." << endl;
	
	cin.ignore();
	cin.get();
	
	return 0;
}
