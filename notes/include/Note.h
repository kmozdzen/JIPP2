
#ifndef LAB8_NOTE_H
#define LAB8_NOTE_H

#include <vector>
using namespace std;

class Note{
protected:
    string title;
public:
    string getTitle();
    void setTitle(string title);

    virtual string getContent();
    virtual void setContent(string content);
};

class TextNote : public Note {
private:
    string content;
public:
    TextNote();

    string getContent();
    void setContent(string content);
};

class ListNote : public Note {
private:
    string content;
public:
    ListNote();

    string getContent();
    void setContent(string content);
};

class NoteDirector {
private:
    vector<Note> notesList;
public:
    void addNote(const Note& note);
    void showNotesList();
    void deleteNote(int notePosition);
    void clearNotesList();
    void editNote(int notePosition,const Note& note);

};

#endif //LAB8_NOTE_H
