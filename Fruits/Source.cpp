#include "Header.hpp"
#include "PotatoGrass.hpp"
#include "AppleTree.hpp"
#include "BlueberryBush.hpp"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));
    std::vector<Crop> basket;

    PotatoGrass potat("Куст Картохи", "Картоха");
    PotatoGrass potat2("Куст Картохишиши", "Легендарная картоха");

    AppleTree appl("Яблоня дефолт", "Яблочко");
    AppleTree appl2("Яблоня легенда", "Легенда яблоко");

    BlueberryBush blueberr("Черничкоко", "Черника");
    BlueberryBush blueberr2("Легендарная черникоко", "Легендарная черника");

    basket.push_back(potat.Harvest());
    std::cout << potat.GetName() << " " << potat.GetHeight() << " " << potat.GetCrops() << "\n";
    basket.push_back(potat2.Harvest());
    std::cout << potat2.GetName() << " " << potat2.GetHeight() << " " << potat2.GetCrops() << "\n";
    basket.push_back(appl.Harvest());
    std::cout << appl.GetName() << " " << appl.GetHeight() << " " << appl.GetCrops() << "\n";
    basket.push_back(appl2.Harvest());
    std::cout << appl2.GetName() << " " << appl2.GetHeight() << " " << appl2.GetCrops() << "\n";
    basket.push_back(blueberr.Harvest());
    std::cout << blueberr.GetName() << " " << blueberr.GetHeight() << " " << blueberr.GetCrops() << "\n";
    basket.push_back(blueberr2.Harvest());
    std::cout << blueberr2.GetName() << " " << blueberr2.GetHeight() << " " << blueberr2.GetCrops() << "\n";


    for (int i = 0; i < basket.size(); i++)
    {
        std::cout << basket[i].GetName() << " ";
    }
}

