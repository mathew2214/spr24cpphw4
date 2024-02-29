#include <iostream>
#include <vector>
#include <string>
#include "tcell.h"
using namespace std;
class tboard {
private:
void prntCell(tcell tgt){
for (int i=0; i <= sizeof(*tgt.getCell()); i++){
cout << tgt.getCell()[i];
}
};
vector<vector<tcell>> brdclsx[1];
int boardsize=0;
public:
void nwbrd(int brdsz){
brdclsx->resize(brdsz);
for (int i=0; i<brdclsx->size();i++){
brdclsx->at(i).resize(brdsz);
}
boardsize=(brdclsx->size() * brdclsx->at(0).size());
int cnty=0;
int cntx=0;
for (int e=0; e<brdclsx->size();e++){
for (int y=0; y<brdclsx->at(e).size();y++){
if (cnty != 10){cnty++;}
if (cnty==10){cnty=0;cntx++;}
brdclsx->at(e)[y].setCell(cntx,cnty);
}}
};
void prntBd(){
cout <<"Current Board: "<<endl;
for (int e=0; e<brdclsx->size();e++){
for (int y=0; y<brdclsx->at(e).size();y++){
prntCell(brdclsx->at(e)[y]); cout << " ";
}
cout << endl;
}
};
int resx(int trgt){
int rsx=9999;
int countr=0;
for (int e=0; e<brdclsx->size();e++){
for (int y=0; y<brdclsx->at(e).size();y++){
countr++;
if(countr == trgt){rsx=e;}
}
}
return rsx;
}
int resy(int trgt){
int rsx=8888;
int countr=0;
//loop, counter variable, return counter as rsx
for (int e=0; e<brdclsx->size();e++){
for (int y=0; y<brdclsx->at(e).size();y++){
countr++;
if(countr == trgt){rsx=y;}
}
}
return rsx;
}
void editCL(int trgtx, int trgty, char ost, char tst){
brdclsx->at(trgtx)[trgty].editCell(ost,tst);
}
int howBig(){
return boardsize;
}
void clearBoard(){
int cnty=0;
int cntx=0;
for (int e=0; e<brdclsx->size();e++){
for (int y=0; y<brdclsx->at(e).size();y++){
if (cnty != 10){cnty++;}
if (cnty==10){cnty=0;cntx++;}
brdclsx->at(e)[y].setCell(cntx,cnty);
}}
}

int checkXwin(int e){
int vic=1;
vector<tcell> rowcheck;
for (int i=0; i<brdclsx->at(e).size();i++){
rowcheck.push_back(brdclsx->at(e)[i]);
}
for (int i=0; i<rowcheck.size();i++){
if(rowcheck.at(0).getChars() != rowcheck.at(i).getChars()){vic=0;}
}
return vic;
}

int checkYwin(int e){
int vic=1;
vector<tcell> rowcheck;
for (int i=0; i<brdclsx->size();i++){
rowcheck.push_back(brdclsx->at(i)[e]);
}
for (int i=0; i<rowcheck.size();i++){
if(rowcheck.at(0).getChars() != rowcheck.at(i).getChars()){vic=0;}
}
return vic;
}

};
