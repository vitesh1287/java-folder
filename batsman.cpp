#include <iostream>
#include <cstring>
using namespace std;

class batsman {
private:
    int bcode;      // 4 अंकों का कोड
    char bname[20]; // बल्लेबाज़ का नाम
    int innings, notout, runs; // इनिंग्स, नॉट आउट पारियां, बनाए गए रन
    float batavg;   // बल्लेबाज़ी औसत

    void calcavg() { // बल्लेबाज़ी औसत की गणना
        
public:
if (innings - notout != 0)
            batavg = (float) runs / (innings - notout);
        else
            batavg = 0;
    }
    void readdata() {
        cout << "Enter Batsman Code (4 digits): ";
        cin >> bcode;
        cin.ignore(); // इनपुट बफर को साफ़ करने के लिए

        cout << "Enter Batsman Name: ";
        cin.getline(bname, 20);

        cout << "Enter Innings Played: ";
        cin >> innings;

        cout << "Enter Not Out Innings: ";
        cin >> notout;

        cout << "Enter Runs Scored: ";
        cin >> runs;

        calcavg(); // बल्लेबाज़ी औसत की गणना
    }

    void displaydata() {
        cout << "\nBatsman Details" << endl;
        cout << "Batsman Code: " << bcode << endl;
        cout << "Batsman Name: " << bname << endl;
        cout << "Innings Played: " << innings << endl;
        cout << "Not Out Innings: " << notout << endl;
        cout << "Total Runs: " << runs << endl;
        cout << "Batting Average: " << batavg << endl;
    }
};

// मुख्य प्रोग्राम
int main() {
    batsman player;
    player.readdata();    // डेटा इनपुट लेना
    player.displaydata(); // डेटा आउटपुट दिखाना
    return 0;
}
