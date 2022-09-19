#include<iostream>
using namespace std;
int main (){
int x;
cin>>x;
int percent = (x*15)/100;
double result  = x/percent ;

int year=0;
cin>>year;

x+=percent;


cout<<percent<<endl;
int note_1000needed= 0,note_500needed=0,note_200needed=0,note_100needed=0,note_50needed=0,note_10needed=0,note_5needed=0,note_1needed=0;
note_1000needed = percent/1000;
percent = percent%1000;

note_500needed = percent/500;
percent = percent%500;

note_200needed = percent/200;
percent = percent%200;

note_100needed = percent/100;
percent = percent%100;

note_50needed = percent/50;
percent = percent%50;

note_10needed = percent/10;
percent = percent%10;

note_5needed = percent/5;
percent = percent%5;

note_1needed = percent/1;
percent = percent%1;

cout<<"note 1000 ->"<<note_1000needed*(year*12)<<endl;
cout<<"note 500  ->"<<note_500needed*(year*12)<<endl;
cout<<"note 200  ->"<<note_200needed*(year*12)<<endl;
cout<<"note 100  ->"<<note_100needed*(year*12)<<endl;
cout<<"note 50   ->"<<note_500needed*(year*12)<<endl;
cout<<"note 10   ->"<<note_10needed*(year*12)<<endl;
cout<<"note 5    ->"<<note_5needed*(year*12)<<endl;
cout<<"note 1    ->"<<note_1needed*(year*12)<<endl;
cout << (int) result << " " <<"months needed";
return 0;

}