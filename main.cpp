#include <iostream>

using namespace std;

int main() {

    string opcion;
    getline( cin, opcion );
    if ( opcion == "char" ){
        cout<<sizeof(char)<<endl;
    } else if ( opcion == "int" ){
        cout<<sizeof(int)<<endl;
    } else if ( opcion == "short" ){
        cout<<sizeof(short)<<endl;
    } else if ( opcion == "float" ){
        cout<<sizeof(float)<<endl;
    } else if ( opcion == "double" ){
        cout<<sizeof(double)<<endl;
    } else if ( opcion == "long" ){
        cout<<sizeof(long)<<endl;
    } else {
        cout<<"Bye"<<endl;
    }

    return 0;
}