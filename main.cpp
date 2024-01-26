#include <iostream>
#include <string>
using namespace std;

class Grade {
private:
    string subject;
    double score;
    string grade;

public:
    Grade() :subject(""), score(0), grade("") {}
    Grade(string& sub, double s, string& g);
    double getscore();
    double getgrade_d();
    double total_score();
    string getgrade();
    double change_g_d(string);
};

Grade::Grade(string& sub, double s, string& g) :
        subject{sub}, score(s), grade(g) {}

double Grade::getscore() {
    return score;
}
double Grade::getgrade_d() {
    return change_g_d(grade);
}
double Grade::total_score() {
    return change_g_d(grade) * score;
}
string Grade::getgrade() {
    return grade;
}
double Grade::change_g_d(string g) {
    if (g == "A+")
        return 4.5;
    if (g == "A0")
        return 4.0;
    if (g == "B+")
        return 3.5;
    if (g == "B0")
        return 3.0;
    if (g == "C+")
        return 2.5;
    if (g == "C0")
        return 2.0;
    if (g == "D+")
        return 1.5;
    if (g == "D0")
        return 1.0;
    else
        return 0.0;
}

int main() {
    string subject;
    double score;
    string grade;
    double total_score = 0;
    double total_sum = 0;
    Grade arr[20];

    for (int i = 0; i < 20; i++) {
        cin >> subject >> score >> grade;
        arr[i] = Grade(subject, score, grade);
        if (arr[i].getgrade() != "P") {
            total_score += arr[i].getscore();
            total_sum += arr[i].total_score();
        }
    }
    cout << total_sum / total_score;

}












