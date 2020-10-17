#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

class Book {
  public:
  char name[20];
  char author[20];
  int a;
  void getData();
  void show();
};

void Book::getData () {

  cout<<"\n\"        \"ENTER DETAILS ABOUT BOOK U WANT TO PURCHASE\" :\"";
  cout<<"\n\n\n\t\tEnter Name Of Book  :\t";
  cin>>name;
  cout<<"\n\t\tEnter Name Of Author    :\t";
  cin>>author;
  fflush(stdin);
  cout<<"\n\t\tEnter No. Of Copies  :\t";
  cin>>a;
};

void Book::show () {
  cout<<"BOOK      :"<<name;
  cout<<"\nAUTHOR  :"<<author;
  cout<<"\nCOPIES  :"<<a;
};

int main() {
  system("clear");
  cout << "\t\t------------------------------" << endl;
  cout << "\t\tBOOK STORE MANAGEMENT SYSTEM" << endl;
  cout << "\t\t------------------------------" << endl;

  Book b1;
  fstream f;
  int a;
z:
  f.open("book",ios::in|ios::out|ios::ate|ios::app);
  cout << "\t\t\t 1. TO BUY" << endl;
  cout << "\t\t\t 2. TO SHOW ALL BOOKS"<< endl;
  cout << "\t\t\t 3. TO CHECK AVAILABILITY"<< endl;
  cout << "\t\t\t 4. TO MODIFY"<< endl;
  cout << "\t\t\t 5. TO DELETE"<< endl;
  cout << "\t\t\t 6. TO EXIT"<< endl;
  cout << endl;
  cout << "\t\t-----------------------------" << endl;
  cout << "\t\tEnter your choice: ";
  f.seekg(0);
  cin>>a;

  switch (a)
  {
    case 1:
      system("clear");
      cout << " You made choice TO BUY the book: " << endl;
      fstream f;
      f.open("book",ios::in|ios::out|ios::ate|ios::app|ios::binary);
      char ans;
      b1.getData();
      f.write((char *) &b1, sizeof(b1));
      ans=getchar();
      if (ans == 'y' || ans == 'Y')
      {
        goto z;
      } else {
          break;
      }

    case 2:
      fstream f;
      f.open("book",ios::in|ios::out|ios::ate|ios::app|ios::binary);
      char ans;
      f.seekg(0);
      int ctr = 0;
      while( f.read((char *)&b1,sizeof(b1)) )
      {
        ctr=ctr+1;
        if(ctr==8)
        {
          getchar();
          system("clear");
          ctr=0;
        }
        b1.show();
        if(f.eof()==1)
        {
          break;
        }
      }
      f.close();
      cin>>ans;
      if(ans=='y'|| ans=='Y')
      {
        goto z;
      }
      else
      {
        exit(1);
      }

  }

  return 0;
}
