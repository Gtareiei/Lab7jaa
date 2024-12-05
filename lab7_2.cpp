//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, movie, day;
    int student_id, gear;

    // ฟ้าใสถามชื่อ
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    getline(cin, name);  // รับค่าชื่อจากผู้ใช้
    cout << "?????: " <<"Fahsai: Wow!!! " << name << " is a really cool name.\n";
//    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";

    // ฟ้าใสถามรหัสนักศึกษา
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cin >> student_id;
    gear = (student_id / 10000000) - 12;  // คำนวณ GEAR
    cout << name << ": " << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you.\n";;
  //  cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you.\n";

    // ฟ้าใสถามเกี่ยวกับการไปดูหนัง
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cin.ignore();  // ข้าม newline จากการรับ student_id
    getline(cin, movie);  // รับชื่อภาพยนตร์
    //cout << name << ": " << movie << "\n";

    // ฟ้าใสถามวันเวลาที่สะดวก
    cout<<name<<": "<< "Fahsai: So....which day are you free to go with me?\n";
    getline(cin, day);  // รับวันที่ที่สะดวก
    //cout << name << ": " << day << "\n";
    cout<<name<<": ""Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";

    // ข้อความสุดท้ายจากฟ้าใส
   // cout << name << ": May the Force be with you krub\n";
    cout<<name<<": ""Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/\n";

    return 0;
}
