#include<iostream>
#include<vector>
using namespace std;

void die(const string &s = "BAD INPUT!") {
    cout << s << endl;
    exit(EXIT_FAILURE);
}

int main() {
    const int MIN = 0;
    const int MAX = 1'000'999;

    vector<string> digits = { "ZERO", "ICHI", "NI", "SAN", "YON", "GO", "ROKU", "NANA", "HACHI", "KYUU" };
    vector<string> powers = { "JYUU", "HYAKU", "SEN", "MAN" };

    int startNum = 0;
    cout << "Please enter a number to start with: " << endl;
    cin >> startNum;
    if (!cin || startNum < MIN || startNum > MAX) die();

    int endNum = 0;
    cout << "Please enter a number to end with: " << endl;
    cin >> endNum;
    if (!cin || endNum < startNum || endNum > MAX || endNum < 0) die();

    int stepSz = 0;
    cout << "Please enter your step size: " << endl;
    cin >> stepSz;
    if (!cin || stepSz < 0) die();

    for (int i = startNum; i <= endNum; i += stepSz) {
        int copy = i;
        cout << i << " ";
        if (copy >= 1'000'000) {
            int mill = copy / 1'000'000;
            if (mill == 1) cout << powers[1] << " " << powers[3];
            else cout << digits[mill] << " " << powers[0] << " " << powers[3];
            copy -= mill * 1'000'000;
            if (copy) cout << " ";
        }
        if (copy >= 100'000) {
            int hunTh = copy / 100'000;
            if (hunTh == 1) cout << powers[0] << " " << powers[3];
            else cout << digits[hunTh] << " " << powers[0] << " " << powers[3];
            copy -= hunTh * 100'000;
            if (copy) cout << " ";
        }
        if (copy >= 10'000) {  // Corrected from 10'0000 to 10'000 (10,000)
            int tenTh = copy / 10'000;
            if (tenTh == 1) cout << powers[3];
            else cout << digits[tenTh] << " " << powers[3];
            copy -= tenTh * 10'000;
            if (copy) cout << " ";
        }
        if (copy >= 1'000) {  // Check for 1,000 next
            int thous = copy / 1'000;
            if (thous == 1) cout << powers[2];
            else if (thous == 3) cout << "SAN BYAKU";
            else if (thous == 8) cout << "HASSEN";
            else cout << digits[thous] << " " << powers[2];
            copy -= thous * 1'000;
            if (copy) cout << " ";
        }
        if (copy >= 100) {
            int hundreds = copy / 100;
            if (hundreds == 1) cout << powers[1];
            else if (hundreds == 3) cout << "SAN BYAKU";
            else if (hundreds == 6) cout << "ROPPYAKU";
            else if (hundreds == 8) cout << "HAPPYAKU";
            else cout << digits[hundreds] << " " << powers[1];
            copy -= hundreds * 100;
            if (copy) cout << " ";
        }
        if (copy >= 10) {
            int tens = copy / 10;
            if (tens == 1) cout << powers[0];
            else cout << digits[tens] << " " << powers[0];
            copy -= tens * 10;
            if (copy) cout << " ";
        }
        if (copy > 0 || i == 0) {
            if (i == 0) cout << digits[0];
            else if (copy > 0 && copy < 10) cout << digits[copy];
        }
        cout << endl;
    }
}
