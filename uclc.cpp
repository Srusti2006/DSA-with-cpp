#include <iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter a character : ";
    cin>>x;
    if(x>='a'&& x<='z'){
        cout<<"lowercase\n";
    }
    else{
        cout<<"uppercase\n";
    }
    //with ASCII values 
    if(x>=65 && x<=90){
        cout<<"UPPERCASSE\n";
    }
    else{
        cout<<"LOWERCASE\n";
    }
    return 0;

}


