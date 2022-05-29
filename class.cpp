#include <iostream>
using namespace std;

class animal
{
private:
    int gender, colour, age;

public:
    int species, sound, size;
    void setData(int, int, int); // Declaration
    void getData()
    {
        cout << "The gender of animal is " << gender << endl;
        cout << "The colour of animal is " << colour << endl;
        cout << "The age of animal is " << age << endl;
        cout << "The species of animal is " << species << endl;
        cout << "The sound of animal is " << sound << endl;
        cout << "The size of animal is " << size << endl;
    }
};
void animal ::setData(int, int, int) //--------> '::' is called scope resolution operator
{ 
    gender = 1;
    colour = 2;
    age = 3;
}

int main()
{
    animal husky;
    // husky.gender=1; ----> This will throw error as it is private
    husky.species = 06;
    husky.sound = 80;
    husky.size = 85;
    husky.setData(1, 2, 3);
    husky.getData();

    return 0;
}