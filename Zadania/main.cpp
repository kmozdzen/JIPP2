#include <iostream>
#include <list>
#include <vector>
#include "include/Music.h"

using namespace std;

int main(){
    //zadanie 1
    string zdanie = "losowe zdanie";
    string::iterator i;
    for (i = zdanie.begin(); i != zdanie.end(); i++){
        if(*i >= 'a' && *i <= 'z')
            *i -= 32;
    }
    cout << zdanie << endl;
    cout << "\n\n";

    //zadanie 2
    MusicPlayer musicPlayer("Mixtape");

    musicPlayer.addSong(new Song("White song"));
    musicPlayer.addSong(new Song("Black song"));
    musicPlayer.addSong(new Song("Yellow song"));
    musicPlayer.addSong(new Song("Pink song"));
    musicPlayer.showSongs();

    musicPlayer.removeSong();
    cout << endl;
    musicPlayer.showSongs();

    cout << endl;

    musicPlayer.nextSong();
    musicPlayer.nextSong();
    musicPlayer.previousSong();

    return 0;
}