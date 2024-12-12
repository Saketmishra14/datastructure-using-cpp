#include<iostream>
using namespace std;
void Reversenumber(int n){
    for(int i=1;i<=n;i++){
        for (int j = 1; j<=n; j++)
        {
          cout<<n-(j+1)<<"  ";
        }
        cout<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter value of n-:";
    cin>>n;
    Reversenumber(n);

}