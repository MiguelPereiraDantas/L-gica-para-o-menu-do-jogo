#include <SFML/Window.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Jogo em Terceira Pessoa");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Escape)
                {
                    std::cout << "Menu do Jogo Aberto!" << std::endl; // tenho q  implementar a lógica para abrir o menu do jogo
                }
            }
        }

        window.clear(sf::Color::Black); // Preenche a janela com a cor preta
        // Lógica do jogo aqui...

        window.display(); // Exibe a janela
    }

    return 0;
}
