#include <iostream>
#include <vector>

using namespace std;

  /*
  To debug this I first read the problem statemnt, ran the program and noticed that the output should
  have been 500 but it only outputed 400.  Since we were off by 100 that probably meant that the apartment
  calculation was off.  So I looked at the apartment initialization and thought it was wrong and tried to
  edit it.  That did not work and after a quick google search it seemed that it did it correctly.  So then 
  I put a cout statement in the get_price sections and found that the get_price section of the hotelApartment
  was not getting called.  SO then i realized I needed to make the get_price function in the hotelRoom class
  a virtual function so that I could call the get_price function in the HotelApartment class
  */
class HotelRoom {
public:
    HotelRoom(int bedrooms, int bathrooms) 
    : bedrooms_(bedrooms), bathrooms_(bathrooms) {}
    
    virtual int get_price() {
        return 50*bedrooms_ + 100*bathrooms_;
    }
protected:
    int bedrooms_;
    int bathrooms_;
};

class HotelApartment : public HotelRoom {
public:
    HotelApartment(int bedrooms, int bathrooms)
    : HotelRoom(bedrooms, bathrooms) {}

    int get_price() {
        return HotelRoom::get_price() + 100;
    }
};

int main() {
    int n;
    std::cin >> n;
    vector<HotelRoom*> rooms;
    for (int i = 0; i < n; ++i) {
        std::string room_type;
        int bedrooms;
        int bathrooms;
        std::cin >> room_type >> bedrooms >> bathrooms;
        if (room_type == "standard") {
            rooms.push_back(new HotelRoom(bedrooms, bathrooms));
        } else {
            rooms.push_back(new HotelApartment(bedrooms, bathrooms));
        }
    }

    int total_profit = 0;
    for (auto room : rooms) {
        total_profit += room->get_price();
    }
    std::cout << total_profit << endl;

    for (auto room : rooms) {
        delete room;
    }
    rooms.clear();

    return 0;
}
