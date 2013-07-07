#include "myNotepad.cpp"
#include <iostream>

using namespace std;

int main()
{
	MyNotepad Notepad1;
	int option;
	string title, val, hold;
	bool exit = false;

	do
	{
		cout << endl << "My Notepad" << endl
			<< "1) Create new note" << endl
			<< "2) Delete existing note" << endl
			<< "3) Edit existing note" << endl
			<< "4) List all notes" << endl
			<< "5) Read existing note" << endl
			<< "6) Quit" << endl
			<< "Option: ";
		cin >> option;
		cin.ignore(10, '\n');
		cout << endl;
		if(option == 1)
		{
			cout << "Title of new note: ";
			getline(cin, title);
			Notepad1.createNote(title);
			cout << endl << "The note \"" << title << "\" has been successfully created!" << endl;
		}
		else if(option == 2)
		{
			cout << "Title of note to delete: ";
			getline(cin, title);
			val = Notepad1.deleteNote(title);
			cout << endl << "The note \"" << title << "\" has been successfully deleted!" << endl;
		}
		else if(option == 4)
		{
			Notepad1.listNotes();
		}
		else if(option == 6)
		{
			exit = true;
		}
	}
	while(!exit);

	return 0;
}