#include <iostream>
#include "../include/Note.h"

using namespace std;

//Note
string Note::getTitle() {
    return title;
}

void Note::setTitle(string title) {
    this->title = title;
}

//TextNote
TextNote::TextNote() : content("puste") {}

string TextNote::getContent() {
    return content;
}

void TextNote::setContent(string content) {
    this->content = content;
}

//ListNote
ListNote::ListNote() : content("puste") {}

string ListNote::getContent() {
    return content;
}

void ListNote::setContent(string content) {
    this->content = content;
}

//NoteDirector

void NoteDirector::addNote(const Note &note){
    notesList.push_back(note);
}

void NoteDirector::clearNotesList() {
    notesList.clear();
}

void NoteDirector::showNotesList() {
    for (int i = 0; i < int(notesList.size()); i++){
        cout << notesList[i].getContent() << endl;
    }
}
void NoteDirector::deleteNote(int notePosition) {
    notesList.erase(notesList.begin()+notePosition);
}

void NoteDirector::editNote(int notePosition,const Note &note) {
    notesList[notePosition] = note;
}
