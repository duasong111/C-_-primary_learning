方法一:
#include <iostream>
using namespace std;
int main(){
 string m;
 cin >> m;
for (int i = 0; i < m.size(); i++) {
        if (m[i] > 'A' && m[i] < 'Z') {
            m[i]+=32;
            cout << m[i] << endl;
        }
        else {
            cout << m[i] << endl;
        } 
    }
return 0;
}
方法二:
#include <iostream>
#include<ctype.h>
using namespace std;
int main(){
string m;
    cin >> m;
    for (auto &c : m) {
        c = tolower(c); //这个是库函数
        cout << c << endl;
    }
return 0；
}
方法三:
#include <iostream>
#include<ctype.h>
using namespace std;
void xiaoxie(string &t){
for(auto &c:t){
c = tolower(c);
cout<<c<<endl;
}
int main(){
string m;
cin >> m;  
return 0；
}
