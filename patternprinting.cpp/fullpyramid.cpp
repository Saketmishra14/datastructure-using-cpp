#include<iostream>
using namespace std;
void Pyramid(int n){
    //Outer loop
    for(int row=0;row<n;row=row+1){

        //Space loop 
        for (int col = 0; col < n-row-1; col=col+1)
        {
           cout<<"  ";
        }

        //Stars print loop
        for(int col=0;col<row+1; col=col+1){
            cout<<" * ";
        }
        cout<<endl;
        

    }
}
int main(){
    int n;
    cout<<"Enter Number-:";
    cin>>n;
    Pyramid(n);


}