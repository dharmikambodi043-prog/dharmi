#include <iostream.h>
#include<conio.h>

struct Student {
    int id;
    string name;
    float marks;
clrscr();
};

int main() {
    Student s[100];
    int n = 0;
    int choice;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Show Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter ID: ";
            cin >> s[n].id;
            cout << "Enter Name: ";
            cin >> s[n].name;
            cout << "Enter Marks: ";
            cin >> s[n].marks;
            n++;
            cout << "Student Added Successfully!\n";
            break;

        case 2:
            for(int i = 0; i < n; i++) {
                cout << "\nID: " << s[i].id;
                cout << "\nName: " << s[i].name;
                cout << "\nMarks: " << s[i].marks;

                // Grade logic
                if(s[i].marks >= 80)
                    cout << "\nGrade: A";
                else if(s[i].marks >= 60)
                    cout << "\nGrade: B";
                else if(s[i].marks >= 40)
                    cout << "\nGrade: C";
                else
                    cout << "\nGrade: Fail";

                cout << "\n------------------";
            }
            break;

        case 3:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice!";
        }

    } while(choice != 3);

    getch();
}