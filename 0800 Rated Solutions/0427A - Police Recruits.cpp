#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int event; 
    int officier = 0;
    int untreated = 0;
    
    for(int i = 0; i < n; i++){
        cin >> event;
        
        if(event == -1){
            if(officier > 0){
                officier --;
            }else{
                untreated ++;
            }
        }
        else{
            officier += event;
        }
    }
    cout << untreated;
}
