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
    return 0;

}