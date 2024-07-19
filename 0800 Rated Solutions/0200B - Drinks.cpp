#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    double  r = 0;
    double k;
    for(int i = 0; i < n; i++)
    {   
        double p;
        cin >> p;
        
        r += p;
    }
    k = r / n;
    cout << setprecision(12) << k << endl; 
}
