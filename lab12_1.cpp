#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int a;
    string grade[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    cout << "Press Enter 3 times to reveal your future.";
    for(int b = 0; b < 3; b++)
        cin.get();
    srand(time(0));
    a = rand()%9;
    cout << "You will get " << grade[a] << " in this 261102.";
    return 0;
}