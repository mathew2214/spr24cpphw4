#include <iostream>
#include "tboard.h"
#include <string>
#include <chrono>
#include <thread>
#include <cmath>
using namespace std;
int vct=0;
int vctry(tboard chk){
int sz=sqrt(chk.howBig());
for (int w=0;w<sz;w++){
if(chk.checkXwin(w)){cout << "victory detected in X direction"<<endl;vct=1;}}
for (int w=0;w<sz;w++){
if(chk.checkYwin(w)){cout << "victory detected in Y direction"<<endl;vct=1;}}
return vct;
}

int main(){
int sz=0;
cout <<"size? (between 3 and 9 inclusive): "<<endl;
cin >>sz;
tboard mn;
mn.nwbrd(sz);
system("clear");
mn.prntBd();
cout << endl;
char PLy1Sm[2]={'X','X'};
char PLy2Sm[2]={'O','O'};


//board editor testing
for (int i =1; i <= mn.howBig();i++){
std::this_thread::sleep_for(std::chrono::seconds(1));
system("clear");
mn.editCL(mn.resx(i), mn.resy(i), PLy1Sm[0], PLy1Sm[1]);
mn.prntBd();
cout <<"iteration: "<< (i)<< endl;
vctry(mn);
}
system("clear");
mn.clearBoard();
mn.prntBd();
std::this_thread::sleep_for(std::chrono::seconds(1));
for (int i =1; i <= mn.howBig();i++){
std::this_thread::sleep_for(std::chrono::seconds(1));
system("clear");
mn.editCL(mn.resx(i), mn.resy(i), PLy2Sm[0], PLy2Sm[1]);
mn.prntBd();
cout <<"iteration: "<< (i)<< endl;
vctry(mn);
}
system("clear");
mn.clearBoard();
mn.prntBd();
std::this_thread::sleep_for(std::chrono::seconds(1));
for (int i =1; i <= mn.howBig();i++){
std::this_thread::sleep_for(std::chrono::seconds(1));
system("clear");
mn.editCL(mn.resy(i), mn.resx(i), PLy1Sm[0], PLy1Sm[1]);
mn.prntBd();
cout <<"iteration: "<< (i)<< endl;
vctry(mn);
}
system("clear");
mn.clearBoard();
mn.prntBd();
std::this_thread::sleep_for(std::chrono::seconds(1));
for (int i =1; i <= mn.howBig();i++){
std::this_thread::sleep_for(std::chrono::seconds(1));
system("clear");
mn.editCL(mn.resy(i), mn.resx(i), PLy2Sm[0], PLy2Sm[1]);
mn.prntBd();
cout <<"iteration: "<< (i)<< endl;
vctry(mn);
}

//board editor testing*/



return 0;
}
