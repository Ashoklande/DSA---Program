#include<iostream>

using namespace std;

int count = 0;
void printnum(){
    if(count == 3){
        return ;
    }
    cout<<count<<endl;
    count++;
}

int main(){

    printnum();
}