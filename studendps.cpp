// Student Management System using File handling in c++
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
class student
{
private:
  string name, roll_no, course, address, email_id, contact_no;

public:
  void menu();
  void insert();
};
void student::menu()
{
menustart:
  int choice;
  char x;
  system("cls");

  cout << "\t\t\t-------------------------------------" << endl;
  cout << "\t\t\t  |  STUDENT MANAGEMENT SYSTEM  |" << endl;
  cout << "\t\t\t-------------------------------------" << endl;
  cout << "\t\t\t 1.Enter New Record" << endl;
  cout << "\t\t\t 2.Display Record" << endl;
  cout << "\t\t\t 3.Modify Record" << endl;
  cout << "\t\t\t 4.Search Record" << endl;
  cout << "\t\t\t 5.Delete Record" << endl;
  cout << "\t\t\t 6.Exit" << endl;

  cout << "\t\t\t--------------------------" << endl;
  cout << "\t\t\tChoose Option:[1/2/3/4/5/6]" << endl;
  cout << "\t\t\t---------------------------" << endl;
  cout << "Enter Your Choose:";
  cin >> choice;

  switch (choice)
  {
  case 1:
    do
    {
      insert();
      cout << "\n\t\t\t Add Another Student Record(Y,N):";
      cin >> x;
    } while (x == 'y' || x == 'Y');

    break;
  case 6:
    exit(0);

  default:
    cout << "\n\t\t\t Invalid choice.....plese try again..";
  }
  getch();
  goto menustart;
}
void student::insert()
{
  system("cls");
  fstream file;
  cout << "\n-------Add Student Details-------" << endl;
  cout << "\t\t\tEnter Name: ";
  cin >> name;
  cout << "\t\t\tEnter Roll No.: ";
  cin >> roll_no;
  cout << "\t\t\tEnter Course: ";
  cin >> course;
  cout << "\t\t\tEnter Email Id: ";
  cin >> email_id;
  cout << "\t\t\tEnter Contact No: ";
  cin >> contact_no;
  cout << "\t\t\tEnter Address: ";
  cin >> address;
  file.open("studentRecord.txt",ios::app |ios::out);
  file<<" "<<name<<" "<<roll_no<<" "<<course<<" "<<email_id<<" "<<contact_no<<" "<<address<<"\n";
  file.close();
}
main()
{
  student project;
  project.menu();
  return 0;
}
