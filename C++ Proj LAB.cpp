#include <iostream>
#include <string>
using namespace std;

int n = 0;  // n = number of books we have + one book (i.e. number of the next book to be registered) but starting from zero :0
int id[10], pages[10], quantity[10], year[10], price[10];
string title[10], firstAuth[10];
void main();
void AddBook();
void view();

void main() { // hi + choose from list

    int input;
    //  n += 1;
    //  cout << "\n book registered successfully\n";
      //menu

    cout << "Hi,please coose an option:\n[1] add new book \n[2] Exit \n[3] view books\n";
    cin >> input;
    if (input == 1)
    {
        AddBook();
    }
    else if (input == 2)
    {
        exit;
    }
    else if (input == 3) {
        view();
    }
    else {
        cout << "pls Enter a valid number \n";
       // n -= 1;
        main();
    }
    //bullzift
}
void AddBook(){
    cout << "Enter book Data \n ID Number: ";
    cin >> id[n];
    cin.ignore();
    cout << "\n title: ";
    getline(cin, title[n]);
  // cin.ignore();
    cout << "\n firstAuth: ";
    getline(cin, firstAuth[n]);
  //  cin.ignore();
    cout << "\n number of pages: ";
    cin >> pages[n];
  //  cin.ignore();

    cout << "\n quantity of copies: ";
    cin >> quantity[n];
 //   cin.ignore();

    cout << "\n year of publish: ";
    cin >> year[n];
 //   cin.ignore();

    cout << "\nprice in qa: ";
    cin >> price[n];
     
    cout<<"\n book registered successfully!\n";
    n += 1;
    main();
}
void view() 
{
    for (int i =0; i <= n; i++)
    {
        cout << "\n\nbook number"<<i<<"data: "<<"book ID " << id[i] << "\n title: " << title[i] << "\n first Authur name: " << firstAuth[i] <<
            "\n total pages" << pages[i] << "\n quantity of copies: " << quantity[i] << "\n year of publish: " << year[i] << "\n price in qa: " << price;
    }
    cout << "\n";
    main();
}

