
#ifndef LAB9_MUSIC_H
#define LAB9_MUSIC_H

#include <list>
#include <iostream>

using namespace std;

class Song{
private:
    string name;
public:
    Song(const string &name);

    Song() {};

    void print();
};

class MusicPlayer{
private:
    string name;
    list<Song *> songs;
    list<Song *>::iterator i;
public:
    MusicPlayer(const string &name);
    void addSong(Song *song);
    void removeSong();
    void nextSong();
    void previousSong();
    void showSongs();
};

#endif //LAB9_MUSIC_H
