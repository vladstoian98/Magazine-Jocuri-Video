//
// Created by AC on 1/19/2022.
//

#ifndef MAGAZINE_JOCURI_VIDEO_CONSOLA_VIDEO_H
#define MAGAZINE_JOCURI_VIDEO_CONSOLA_VIDEO_H

#include <string>
#include <vector>
#include <ostream>

using namespace std;

class consola_video {
    string firma;
    string model;
    string release_date;
    vector<string> exclusive_titles;
    int pret;
public:
    consola_video(const string &firma, const string &model, const string &releaseDate,
                  const vector <string> &exclusiveTitles, int pret);

    friend ostream &operator<<(ostream &os, const consola_video &video);
};

class consola_video_factory {
public:
    static consola_video nintendo_switch();

    static consola_video ps5();

    static consola_video xbox_series_x ();
};




#endif //MAGAZINE_JOCURI_VIDEO_CONSOLA_VIDEO_H
