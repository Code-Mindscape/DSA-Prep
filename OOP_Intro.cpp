#include <iostream>
// #include"OOP_Class.cpp"
using namespace std;
int main()
{
    class Hero
    {
        int health;

    public:
        char level;

        void setHealth(int h)
        {
            health = h;
        }
        void setLevel(char ch)
        {
            level = ch;
        }
        int getHealth()
        {
            return health;
        }
        char getLevel()
        {
            return level;
        }
    };
    Hero hero1;
    hero1.setHealth(97);
    hero1.setLevel('A');

    cout << "health: " << hero1.getHealth() << endl;
    cout << "level: " << hero1.getLevel() << endl;

    return 0;
}