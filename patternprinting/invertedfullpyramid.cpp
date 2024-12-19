#include<iostream>
using namespace std;
void InvertedPyramid(int n){
    //Outer loop
    for(int row=0;row<n;row=row+1){

         //Spaces print loop
        for(int col=0;col<row; col=col+1){
            cout<<" ";
        }
        

        //Stars loop 
        for (int col = 0; col < n-row; col=col+1)
        {
           cout<<"* ";
        }
         cout<<endl;

    }
     

}
int main(){
    int n;
    cout<<"Enter Number-:";
    cin>>n;
    InvertedPyramid(n);


}