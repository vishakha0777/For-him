#include<iostream>
#include<unistd.h>
using namespace std;

void printCake(){
    cout << "                 " << endl;
    cout << "        ` ` ` ` `    " << endl;
    cout << "        | | | | |    " << endl;
    cout << "       ===========   " << endl;
    cout << "      |   HAPPY   |  " << endl;
    cout << "      |  BIRTHDAY |  " << endl;
    cout << "      |   ILY ❤️   |  " << endl;
    cout << "      |___________|  " << endl;
    cout << "     (_____________)  " << endl;
}
int main(){
     cout << "Whishing You a Wonderful Bday My man🌍😚" << endl;
     sleep(1);
     printCake();
     sleep(1);
     cout << "   \n  May all Your DREAMS COME TRUE!!💟" << endl;
     return 0 ;
}