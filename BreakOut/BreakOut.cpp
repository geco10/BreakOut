#include <SFML/Graphics.hpp>
#include"Configs.h"
#include"Controller.h"
int main()
{
    Controller controller;
    globalConfigs.setScreen(sf::Vector2i(800, 600));
    // Create a window
    sf::RenderWindow window(sf::VideoMode(globalConfigs.getScreen<int>().x, globalConfigs.getScreen<int>().y), "SFML Window");
    // Main loop
    sf::View view = window.getDefaultView();
    while (window.isOpen())
    {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Right)
                    controller.movePlatform(sf::Vector2f(7, 0));
            }
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Left)
                    controller.movePlatform(sf::Vector2f(-7, 0));
            }
            if (event.type == sf::Event::Resized) {
                view.setSize({
                   static_cast<float>(event.size.width),
                   static_cast<float>(event.size.height)
                });
                window.setView(view);
                globalConfigs.setScreen(sf::Vector2i(event.size.width, event.size.height));
                
            }
        }

        // Clear the 
        window.display();
    }

    return 0;
}
