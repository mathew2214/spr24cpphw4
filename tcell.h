#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class tcell{
private: 
char xpos='x';
char ypos='y';
public:
char getCellx(){
return xpos;
};
char getCelly(){
return ypos;
};
char* getCell(){
char* cellInf[2]={&xpos,&ypos};
return *cellInf;
};
void setCell(int x,int y){
xpos = to_string(x)[0];
ypos = to_string(y)[0];
}
void editCell(char x,char y){
xpos = x;
ypos = y;
}
string getChars(){
stringstream oUt;
oUt << char(xpos);
oUt << char(ypos);
return oUt.str();
};
};
