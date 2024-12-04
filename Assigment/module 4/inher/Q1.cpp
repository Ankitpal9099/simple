//  Assume a class cricketer is declared. Declare a derived class batsman from
// cricketer. Data member of batsman. Total runs, Average runs and best
// performance. Member functions input data, calculate average runs, Display
// data. (Single Inheritance)
#include <iostream>
#include <string>

using namespace std;


class Cricketer {
protected:
    string name;
    int matchesPlayed;

public:
    
    void inputCricketerData() {
        cout << "Enter cricketer's name: ";
        cin >> name;
        cout << "Enter number of matches played: ";
        cin >> matchesPlayed;
    }
};

// Derived class
class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    // Function to input batsman data
    void inputData() {
        inputCricketerData(); // Call base class function
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter best performance (highest runs in a match): ";
        cin >> bestPerformance;
        calculateAverageRuns(); // Calculate average runs after input
    }

    // Function to calculate average runs
    void calculateAverageRuns() {
        if (matchesPlayed > 0) {
            averageRuns = static_cast<float>(totalRuns) / matchesPlayed;
        } else {
            averageRuns = 0.0;
        }
    }

    // Function to display batsman data
    void displayData() {
        cout << "\nBatsman Information:\n";
        cout << "Name: " << name << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << " runs" << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    batsman.displayData(); 

    return 0;
}