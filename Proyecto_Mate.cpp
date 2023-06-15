// Proyecto_Mate.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Cat

#include <iostream>
#include <random>
#include <vector>


struct Item {
    std::string name;
    int rarity;

    Item(const std::string& n, int r) : name(n), rarity(r) {}
};


Item gachaPull(const std::vector<Item>& itemList) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::discrete_distribution<> distribution;

    
    std::vector<double> weights;
    for (const Item& item : itemList) {
        weights.push_back(1.0 / item.rarity);
    }

    distribution = std::discrete_distribution<>(weights.begin(), weights.end());

  
    int index = distribution(gen);
    return itemList[index];
}

int main() {
   
    std::vector<Item> itemList;
    itemList.emplace_back("Yamcha", 50);
    itemList.emplace_back("Krillin", 25);
    itemList.emplace_back("Piccoro", 15);
    itemList.emplace_back("Vegeta", 10);
    itemList.emplace_back("Goku", 5);

   
    Item result = gachaPull(itemList);
    std::cout << "Felicidades! Obtuviste una figura de " << result.name << "!" << std::endl;

    return 0;
}
