#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <cstring>
using namespace std;


int main(){
    char cuvant[]="bbbbaa";

    string str;
    cout <<"for S:" << endl;
    getline(cin, str);
    map<char, string> grami;
    grami.insert(pair<char, string>('S',str));
    cout << "for A:" << endl;
    getline(cin, str);
    grami.insert(pair<char, string>('A',str));
    map<char, string, std::less<int> >::iterator itr;
    for( itr = grami.begin(); itr != grami.end(); ++itr){
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
    return 0;
}
