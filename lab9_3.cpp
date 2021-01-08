#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main(){
    double sum = 0,count = 0,ave,sumsum = 0;
    ifstream score;
    score.open("score.txt");
    string text;
    while(getline(score,text))
    {
        sum += stod(text); 
        sumsum += pow((stod(text)),2);
        count++;
    }
    ave = sum/count;
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << ave << "\n";
    cout << "Standard deviation = " << sqrt(1/count*(sumsum)-pow(ave,2));
}