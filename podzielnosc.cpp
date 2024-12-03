#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a<0 || b < 0){
        cout << "Wartosci nie sa dodatnie" << endl;
	return -1;
    }
    cout << a << ',' << b << endl;
    return 0;
}
