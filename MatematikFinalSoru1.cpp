#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main()  {
	setlocale(LC_ALL, "Turkish");
	
	double a, b, c;
	double delta, x1 ,x2;
	
	cout <<"İkinci dereceden denklem (ax^2 + bx + c = 0) çözümü için katsayıları giriniz." << endl;
	
	cout <<"a Katsayısını Giriniz: ";
	cin >> a;
	
	cout <<"b Katsayısını Giriniz: ";
	cin >> b;
	
    cout <<"c Katsayısını Giriniz: ";
	cin >> c;
	
    cout << "\nFonksiyon '" << a << "x^2";
    
    if (b >= 0) cout << " + " << b << "x";
    else cout << " - " << -b << "x";
    
    if (c >= 0) cout << " + " << c;
    else cout << " - " << -c;
    
    cout << "' Olarak tanımlandı!" << endl;

	delta = (b * b) - (4 * a * c);
	cout << "\n---------------------------------------" << endl;
	cout << "Diskriminat (Delta): " << delta << endl;
	cout << "----------------------------------------" << endl;
	
	if (delta < 0) {
		cout << "Sonuç: Delta < 0 olduğundan iki farklı gerçek kök yoktur." << endl;
	}
	else if (delta == 0) {
		x1 = -b / (2 * a);
		cout << "Sonuç: Delta = 0 olduğundan tek bir (çift katlı) gerçek kök vardır." <<endl;
		cout << "Kök (x): " << x1 << endl;
	}
    else {
    	x1 = (-b + sqrt(delta)) / (2 * a);
    	x2 = (-b - sqrt(delta)) / (2 * a);
			
    	cout << "Sonuç: Delta > 0 olduğundan iki farklı gerçek kök vardır." << endl;
    	cout << "Birinci Kök (x1): " << x1 << endl;
    	cout << "İkinci Kök (x2): " << x2 << endl;
	}
	
	cout << "\n---------------------------------------" << endl;
	cout << " Çıkmak için bir tuşa basınız..." << endl;
	
	cin.ignore();
	cin.get();
	
	return 0;
}
