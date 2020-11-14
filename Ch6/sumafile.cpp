//
// Created by HaoyuPan on 2020/11/7 0007.
//

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

const int SIZE = 60;

int main() {
    char filename[60];
    ifstream inFile;
    cout << "Enter name of data file:";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "File open failed" << endl;
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;
//    inFile >> value;
    /*
     * 注意此处如果scores.txt最后一个数据之后不加换行，则会导致读最后一个数据的时候直接遇到eof
     * 无法读取最后一个数据。
     */
    while (inFile >> value) {
        cout << value << endl;
        ++count;
        sum += value;
//        inFile >> value;
    }
    if (inFile.eof()) {
        cout << "End of file reached." << endl;
    }
    cout << "sum: " << sum << endl;
    cout << "count: " << count << endl;
    cout << "average: " << sum / count << endl;
    inFile.close();
    return 0;
}