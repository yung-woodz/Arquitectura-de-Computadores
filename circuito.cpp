#include<iostream>

using namespace std;

int main(){

    int p, q, r;

    do {
        cout << "Ingrese p y q: ";
        cin >> p >> q;
    } while ((p != 0 && p != 1) || (q != 0 && q != 1));

    do {
        cout << "Ingrese r: ";
        cin >> r;
    } while (r != 0 && r != 1);

    bool result;


    if(p && q){

        if(r){
            result = true;
            cout << result;    
        }else{
            result = true;
            cout << result;
        }

    }else{

        if(r){
            result = true;
            cout << result;    
        }else{
            result = false;
            cout << result;
        }

    }


}