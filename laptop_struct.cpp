#include <iostream>
#include <string>

using namespace std;

// ساختار برای ذخیره اطلاعات لپ‌تاپ
struct LaptopInfo {
    string operatingSystem;
    int ram; // به گیگابایت
    int storage; // به گیگابایت
    string gpu;
    string cpu;
    float screenSize; // به اینچ
    string displayQuality;
    string resolution;
};

// تابع برای نمایش اطلاعات لپ‌تاپ
void displayLaptopInfo(const LaptopInfo& laptop) {
    cout << "laptopinformation:\n" << endl;
    cout << "operatingSystem: " << laptop.operatingSystem << endl;
    cout << "ram: " << laptop.ram << "GB" << endl;
    cout << "storage: " << laptop.storage << "GB" << endl;
    cout << "gpu: " << laptop.gpu << endl;
    cout << "cpu: " << laptop.cpu << endl;
    cout << "screenSize: " << laptop.screenSize << "inch" << endl;
    cout << "displayQuality: " << laptop.displayQuality << endl;
    cout << "resolution: " << laptop.resolution << endl;
}

int main() {
    LaptopInfo laptop;
    
    cout << "please enter the desired laptop information:" << endl;
    cout << "operatingSystem (Windows/Linux/MacOS): ";
    cin >> laptop.operatingSystem;
    cout << "ram: ";
    cin >> laptop.ram;
    cout << "storage: ";
    cin >> laptop.storage;
    cout << "gpu: ";
    cin >> laptop.gpu;
    cout << "cpu: ";
    cin >> laptop.cpu;
    cout << "screenSize: ";
    cin >> laptop.screenSize;
    cout << "displayQuality: ";
    cin >> laptop.displayQuality;
    cout << "resolution: ";
    cin >> laptop.resolution;

    displayLaptopInfo(laptop);

    return 0;
}
