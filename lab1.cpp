#include <iostream>

using namespace std;

int main (){
int id1, id2, id3;
string title1, title2, title3;

// book 1
cout<<"enter book 1 ID:";
cin>>id1;

cin.ignore();
cout<<"enter book 1 title:";
getline(cin,title1);

// book 2
cout<<"enter book 2 ID:";
cin>>id2;

cin.ignore();
cout<<"enter book 2 title:";
getline(cin,title2);

// book 3
cout <<"enter book 3 ID:";
cin>>id3;

cin.ignore();
cout<<"enter book 3 title:";
getline(cin,title3);

// display

cout<< "\n\n====================lab";
cout<< "\n book ID1 = "<<id1;
cout<< "\t book title1 = "<<title1;
cout<< "\n book ID2 = "<<id2;
cout<< "\t book title2 = "<<title2;
cout<< "\n book ID3 = "<<id3;
cout<< "\t book title = "<<title3;

return 0;
}
