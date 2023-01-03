#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int i = 0;
    double sum = 0;
    double sum2 = 0;
    string data;
    ifstream source("score.txt");
    ofstream dest("check.txt");

    while(getline(source,data))
    {
        sum += atof(data.c_str());
        sum2 += pow(atof(data.c_str()),2);
        i++;
    }
    double mean,sd;
    mean = sum/i;
    sd = sqrt((sum2/i) - pow(mean,2));

    cout << "Number of data = " << i << endl;
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;
    //cout << "sum pow 2 / N = " << sd;

    source.close();
    dest.close();
}
