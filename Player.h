#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

class player{
    public:
        string color;
        int x;
        int y;
        float width;
        float height;
        player(string color, int x, int y, float width, float height, int health, vector<int> bullets);
        void draw(sf::Window window);  
};