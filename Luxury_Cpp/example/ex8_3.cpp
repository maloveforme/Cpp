#include <iostream>
using namespace std;

class TV
{
    int size;

public:
    TV(int size) : size(size = 20) { }
    int getSize() { return size; }
};

class WideTV : public TV
{
    bool videoIn;

public:
    WideTV(int size, bool videoIn) : TV(size), videoIn(videoIn) { }
    bool getVideoIn() { return videoIn; }
};

class SmartTV : public WideTV
{
    string ipAddr;

public:
    SmartTV(string ipAddr, int size) : ipAddr(ipAddr), WideTV(size, true) { }
    string getIpAddr() { return ipAddr; }
};

int main()
{
    SmartTV htv("192.0.0.1", 32);
    cout << "size: " << htv.getSize() << endl;
    cout << "videoIn: " << boolalpha << htv.getVideoIn() << endl;
    // boolalpha: bool 값을 true, false로 출력
    cout << "IP: " << htv.getIpAddr() << endl;
}