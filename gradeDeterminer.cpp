#include <iostream>
using namespace std;
int main(){
double score;
cout<< "Enter your score: "<<endl;
cin>> score;

//Using if-else structure
if (score >= 80){
    cout<<"Your grade is A"<<endl;
}else if (score >= 70){
        cout<<"Your grade is B"<<endl;
}else if (score >= 60){
    cout<<"Your grade is c"<<endl;
}else if (score >= 50){
    cout<<"Your grade is D"<<endl;
}else if (score >= 40){
    cout<<"Your grade is E"<<endl;
}else if (score < 40){
    cout<<"Ohh...you got an F"<<endl;
}else {
    cout<<"Invalid input entered. Check and try again."<<endl;
}
return 0;
}