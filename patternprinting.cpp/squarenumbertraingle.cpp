#include<iostream>
using namespace std;
void Numbertraingel(int n){
    for(int i=1;i<=n;i++){
        for (int j = 1; j<=n; j++)
        {
          cout<<j<<"  ";
        }
        cout<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter value of n-:";
    cin>>n;
    Numbertraingel(n);

}