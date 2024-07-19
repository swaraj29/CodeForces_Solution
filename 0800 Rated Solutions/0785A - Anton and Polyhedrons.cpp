#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;

    int f = 0;
    for(int  i = 0; i < n; i++)
    {
        cin >> s;
        if(s == "Tetrahedron"){
            f += 4;
        }
        else if(s == "Cube"){
            f+= 6;
        }
        else if(s == "Octahedron"){
            f+= 8;
        }  
        else if(s == "Dodecahedron"){
            f+= 12;
        }
        else if(s == "Icosahedron" ){
            f+= 20;
        }         
    }
    cout << f;
}
