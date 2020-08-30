//
// string-converter.cpp
//
// Simple example for coverting strings between UTF-8 and GB2312. 
//
// g++ -g -Wall -o string-converter string-converter.cpp -L/opt/boost/lib -lboost_system -lboost_locale -std=c++11 && ./string-converter
//
#include <string>
#include <iostream>
#include <iomanip>
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;

int main(int argc, char** argv) {
    // Create system default locale
    generator gen;
    locale loc=gen(""); 
    locale::global(loc); 
    cout.imbue(loc);

    string source = "中文abc";
    cout << "--------------------------------------------------------------" << endl;
    cout << "Source: " << source << endl;
    cout << "Expected GB2312 code points: 0xD6 0xD0 0xCE 0xC4 0x61 0x62 0x63" << endl;
    cout << "Expected UTF-8 code points: 0xE4 0xB8 0xAD 0xE6 0x96 0x87 0x61 0x62 0x63 " << endl;
    cout << "--------------------------------------------------------------" << endl;

    string gb2312 = boost::locale::conv::between(source, "GB2312", "UTF-8");
    // cout << "GB2312: " << gb2312 << endl;
    cout << "Conversion result:\nGB2312 code points: ";
    for (auto c : gb2312)
    {
        cout << "0x" << std::uppercase << std::hex << std::setw(2) << +(uint8_t)c << " ";
    }

    cout << endl << endl;

    string utf8 = boost::locale::conv::between(gb2312, "UTF-8", "GB2312");
    cout << "UTF-8: " << utf8 << endl;
    cout << "UTF-8 code points: ";
    for (auto c : utf8)
    {
        cout << "0x" << std::uppercase << std::hex << std::setw(2) << +(uint8_t)c << " ";
    }

    cout << endl;
    cout << "--------------------------------------------------------------" << endl;

    return 0;
}
