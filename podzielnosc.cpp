#include <iostream>
#include <algorithm>

using namespace std;

int nwd(int a, int b){
    int liczba = min(a,b);
    while(liczba>1){
        if(a%liczba==0 && b%liczba==0){
	    break;
	}
      liczba--;
    }
    return liczba;
}

int main(){
    int a,b;
    cin >> a >> b;
    if(a<0 || b < 0){
        cout << "Wartosci nie sa dodatnie" << endl;
	return -1;
    }
    cout << a << ',' << b << endl;
    cout << "gcd: " << nwd(a,b) << endl;
    return 0;
}
