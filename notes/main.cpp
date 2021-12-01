#include <iostream>
#include "include/Note.h"
#include <string>


using namespace std;

int main() {
    //notatka 1
    TextNote text_note;

    text_note.setTitle("notatka tekstowa");

    string line;
    getline(cin, line);
    text_note.setContent(line);

    cout << endl;

    //notatka 2
    ListNote list_note2;

    list_note2.setTitle("notatka tekstowa 2");

    string line2;
    getline(cin, line2);
    list_note2.setContent(line2);

    //lista notatek
    //dodawanie i pokazanie listy notatek
    NoteDirector noteDirector;
    noteDirector.addNote(text_note);
    noteDirector.addNote(list_note2);

    cout << "\nlista notatek: " << endl;
    noteDirector.showNotesList();

    //edytowanie notatki
    TextNote text_note3;

    text_note3.setTitle("notatka tekstowa 3");

    string line3;
    getline(cin, line3);
    text_note3.setContent(line3);
    noteDirector.editNote(0, text_note3);

    cout << "\nlista notatek: " << endl;
    noteDirector.showNotesList();


    //usuniecie konkretnej notatki i pokazanie listy notatek
    noteDirector.deleteNote(1);

    cout << "\nlista notatek: " << endl;
    noteDirector.showNotesList();

    //usuniecie wszystkich notatek i pokazanie listy notatek
    noteDirector.clearNotesList();

    cout << "\nlista notatek: " << endl;
    noteDirector.showNotesList();

    return 0;
}