

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


int main()
{
    double lat, lon;
    ifstream stream("coordinates.txt", ios::in);

    if (stream.is_open()) {
        string line;
        while (getline(stream,line)) {
            stringstream s(line);
            s.ignore(1);
            s >> lat;
            s.ignore(2);
            s >> lon;
            if (lat >= 50 && lat <= 80 && lon >= 20 && lon <= 45) {
                cout << lat << ", " << lon << endl;
            }      



        }
    }
}

