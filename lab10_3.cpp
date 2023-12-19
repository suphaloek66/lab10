#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

    int count = 0;
    double sum = 0;
    double Mean,Standarddeviation,num_2;
int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    while(getline(source,textline)){
    sum += atof(textline.c_str());
    num_2 += pow(atof(textline.c_str()),2);
    count++;
    }
    Mean = sum/count;
    Standarddeviation = sqrt((num_2/count)-pow(Mean,2));
    
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << Mean << endl;
    cout << "Standard deviation = " << Standarddeviation;
}