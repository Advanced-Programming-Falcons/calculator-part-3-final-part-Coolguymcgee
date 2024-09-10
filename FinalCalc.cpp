#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;
double input1;
double input2;
char operation;
string equation;
string finished;
double fin;
string history;
int check1=1;
int check2;

double sum(double num1, double num2){
    double ans;
    ans=num1+num2;
    cout<<ans;
    return ans;
}
double diff(double num1, double num2){
    double ans;
    ans=num1-num2;
    cout<<ans;
    return ans;
}
double product(double num1, double num2){
    double ans;
    ans=num1*num2;
    cout<<ans;
    return ans;
}
double quotiant(double num1, double num2){
    double ans;
    ans=num1/num2;
    cout<<ans;
    return ans;
}
bool parseInput(){
    istringstream iss(equation);
    if (iss>>input1>>operation>>input2){
    return true;
    }
    else{
        return false;
    }


}
bool ParseInput(){
istringstream iss(finished);
    if (iss>>input1>>operation>>input2){
    return true;
    }
    else{
        return true;

    }

}

int main (void){
    while(true){
        if (check1 ==1){
        cout << "welcome to my calculator please insert an equation (+,-,*,/|ex:2+2 no spaces)"<<endl;}
        getline(cin, equation);
        if (parseInput()){
            switch(operation) {
            case '+':
            fin=sum(input1,input2);
            history=history+to_string(fin)+ '\n';
            break;
            case '-':
            fin=diff(input1,input2);
            history=history+to_string(fin)+ '\n';
            break;
            case '*':
            fin=product(input1,input2);
            history=history+to_string(fin)+ '\n';
            break;
            case '/':
            fin=quotiant(input1,input2);
            history=history+to_string(fin)+ '\n';
            break; }
        }
        else if(finished=="n"){
        string finished="";
        check1=1;
        continue;}
        else{
            cout<<"you've inputed an invalid equation"<<endl;
            continue;
        }
        
        while(true){
        cout<< " would you like to be done? y/n or h for calculator history";
    cin >> finished;
            if(finished=="y"){
                break;
            }
            else if(finished=="h"){
                cout<<history;
                continue;
            }
            else if(finished=="n"){
                break;
            } 
            else{
                continue;
            }           
        }
        if(finished=="n"){
            check1=0;
        }
        if(finished=="n"){
            continue;
        }
        break;
    }
     return 0;

}

