// //constructor initializer list and delegating constructor

#include <iostream>
#include <string>

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    //overloaded constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player()
    :Player{ "None",0,0 } {
    std::cout << "NO args constructor " << std::endl;
}
Player::Player(std::string name_val)
    : Player{name_val,0,0 } {
    std::cout << "Single args constructor called " << std::endl;
}
Player::Player(std::string name_val, int health_val, int xp_val)
    : name{ name_val }, health{ health_val }, xp{ xp_val }{
    std::cout << "Three args constructor called " << std::endl;
}

int main()
{
    Player frank;
    Player rohit{ "rohit" };
    Player shyam{ "shyam", 3, 7 };

    return 0;
}
