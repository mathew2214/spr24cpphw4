#include <iostream>
#include "tboard.h"
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main(){
int sz=0;
cout <<"size?: "<<endl;
cin >>sz;
tboard mn;
mn.nwbrd(sz);
cout << endl;
mn.prntBd();
cout << endl;
char PLy1Sm[2]={'S','S'};
char PLy2Sm[2]={'T','T'};
/*//resolver testing
cout <<"test resolver: ";
int tgt=0;
cin >> tgt;
cout << mn.resx(tgt) << " " << mn.resy(tgt) << endl;;
//resolver testing*/

//board editor testing
for (int i =1; i <= mn.howBig();i++){

std::this_thread::sleep_for(std::chrono::seconds(1));
system("clear");
cout <<"iteration: "<< (i)<< endl;
mn.editCL(mn.resx(i), mn.resy(i), PLy1Sm[0], PLy1Sm[1]);
if(mn.checkXwin()){cout << "victory detected in X direction";}
mn.prntBd();
}
mn.clearBoard();
mn.prntBd();
std::this_thread::sleep_for(std::chrono::seconds(1));
/*
for (int i =1; i <= mn.howBig();i++){

std::this_thread::sleep_for(std::chrono::seconds(1));
system("clear");
cout <<"iteration: "<< (i)<< endl;
mn.editCL(mn.resx(i), mn.resy(i), PLy2Sm[0], PLy2Sm[1]);
mn.prntBd();
}

//board editor testing*/

return 0;
}
