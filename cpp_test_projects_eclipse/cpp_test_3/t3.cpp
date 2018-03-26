#include <iostream>
#include <string>
#include <typeinfo>

using std::string;
using namespace std;

bool m_greater_or_equal (string & a, string & b){ //is a greater than or equal to b?
    if (a.length()!=b.length()){
        return a.length()>b.length();
    }
    for (int i = 0;i<a.length();i++){
        if (a[i]!=b[i]){
            return a[i]>b[i];
        }
    }
    return true;
}

string add (string& a, string& b){
    if (!m_greater_or_equal(a,b)) return add(b,a);
    string x = string(a.rbegin(),a.rend());
    string y = string(b.rbegin(),b.rend());
    string result = "";
for (int i = 0;i<x.length()-y.length()+1;i++){
    y.push_back('0');
}

int carry = 0;
for (int i =0;i<x.length();i++){
    char c = x[i]+y[i]+carry-'0'-'0';
    carry = c/10;
    c%=10;
    result.push_back(c+'0');
}
if (carry==1) result.push_back('1');
return string(result.rbegin(),result.rend());

}

string multiply (string&a, string&b){
    string row = b, tmp;
    string result = "0";

    for (int i = a.length()-1;i>=0;i--){

        for (int j= 0;j<(a[i]-'0');j++){
            tmp = add(result,row);
            result = tmp;
        }
        row.push_back('0');
    }
    return result;
}

//long counter = 0;

string m_pow (string&a, int exp){
//    counter++;
    if(exp==1){
        return a;
    }
    if (exp==0){
        return "1";
    }
    string p = m_pow(a,exp/2);
    string res;
    if (exp%2==0){
        res = "1";  //a^exp%2 is a^0 = 1
    } else {
        res = a;   //a^exp%2 is a^1 = a
    }
    string x = multiply(p,p);
    return multiply(x,res);
    //return multiply(multiply(p,p),res); Doesn't work because multiply(p,p) is not const

}


//-9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
int main(){


    string x ="2";

    cout<<m_pow(x,5000)<<endl<<endl;
//    cout<<counter<<endl;

    return 0;
}
