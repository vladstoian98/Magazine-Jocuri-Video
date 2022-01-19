//
// Created by AC on 1/19/2022.
//

#include "consola_video.h"

consola_video::consola_video(const string &firma, const string &model, const string &releaseDate,
                             const vector<string> &exclusiveTitles, int pret) : firma(firma), model(model),
                                                                                release_date(releaseDate),
                                                                                exclusive_titles(exclusiveTitles),
                                                                                pret(pret) {}

ostream &operator<<(ostream &os, const consola_video &video) {
    os << video.firma << "  " << video.model << " " << video.release_date
       << " " << video.pret << endl;
    for(const auto& i : video.exclusive_titles)
        os << i << " ";
    os << "\n\n";
    return os;
}

consola_video consola_video_factory::nintendo_switch() {
    return consola_video("Nintendo", "Switch", "3 Martie 2017", {"Mario Kart 8 Deluxe", "The Legend of Zelda Breath of the Wild"}, 1500);
}

consola_video consola_video_factory::ps5() {
    return consola_video("Sony", "PS5", "12 Noiembrie 2020", {"Forspoken", "Astro's Playroom"}, 2000);
}

consola_video consola_video_factory::xbox_series_x() {
    return consola_video("Microsoft", "Xbox Series X", "10 Noiembrie 2020", {"Forza Horizon 5", "Halo Infinite"}, 1999);
}
