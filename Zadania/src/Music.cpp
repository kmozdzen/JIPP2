#include "../include/Music.h"

Song::Song(const string &name) : name(name) {};

void Song::print() {
    cout << name << endl;
}


void MusicPlayer::showSongs() {
    for(i = songs.begin(); i != songs.end(); i++) {
        (*i)->print();
    }
}

void MusicPlayer::addSong(Song *song) {
    songs.push_back(song);
}

void MusicPlayer::removeSong() {
    songs.pop_front();
}

void MusicPlayer::nextSong() {
    i = songs.begin();
    (*i)->print();
    songs.push_back(*i);
    songs.pop_front();

}

void MusicPlayer::previousSong() {
    i = songs.end();
    i--;
    (*i)->print();
}

MusicPlayer::MusicPlayer(const string &name) : name(name) {}