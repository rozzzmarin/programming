#include <iostream>
#include <vector>
#include <string>
#include <ctime>

enum ItemType {
    COIN, RUNE, WEAPON, ARMOR
};
enum Element {
    FIRE, WATER, EARTH, AIR
};

struct Coin {
    unsigned int count;
};

struct Rune {
    unsigned short level;
    Element element;
};

struct Weapon {
    unsigned int damage;
    unsigned short critical;
    unsigned short durability;
};

struct Armor {
    unsigned int guard;
    unsigned short durability;
};

struct Item;
typedef std::vector<Item> LootBox;

std::ostream& operator<<(std::ostream& out, const LootBox& item);

struct Item {
    ItemType type;
    union {
        Coin coin;
        Rune rune;
        Weapon weapon;
        Armor armor;
    };

    Item& operator++();

    friend LootBox& operator<<(LootBox& box, const Item& item);

    friend std::ostream& operator<<(std::ostream& out, const Item& item);
};

LootBox generateLootBox();

int main() {
    setlocale(LC_ALL, "Russian");
    std::string request;
    srand(time(NULL));
    while (true) {
        std::cout << "Открыть лутбокс? Yes/No" << std::endl;
        std::cin >> request;
        auto first_letter = request[0];
        auto lowercase_first_letter = std::tolower(first_letter);
        request[0] = lowercase_first_letter;
        if (request == "y" || request == "yes") {
            LootBox lb = generateLootBox();
            std::cout << lb << std::endl;
        }
        else if (request == "n" || request == "no") {
            break;
        }
    }
    return 0;
}

std::string toRuneString(Rune rune) {
    std::string result = "Rune of ";
    switch (rune.element) {
    case AIR:
        result.append("air");
        break;
    case EARTH:
        result.append("earth");
        break;
    case FIRE:
        result.append("fire");
        break;
    case WATER:
        result.append("water");
        break;
    }
    result.append(" ");
    result.append(std::to_string(rune.level));
    result.append(" lvl");
    return result;
}

std::ostream& operator<<(std::ostream& out, const Item& item) {
    auto type = item.type;
    switch (type) {
    case COIN:
        out << item.coin.count << " gold";
        break;
    case RUNE:
        out << toRuneString(item.rune);
        break;
    case WEAPON: {
        Weapon weapon = item.weapon;
        out << "Weapon(damage = " << weapon.damage
            << ", durability = " << weapon.durability
            << ", critical = " << weapon.critical << ")";
        break;
    }
    case ARMOR: {
        Armor armor = item.armor;
        out << "Armor(guard = " << armor.guard
            << ", durability = " << armor.durability << ")";
        break;
    }
    }
    return out;
}

std::ostream& operator<<(std::ostream& out, const LootBox& items) {
    for (auto& item : items) {
        out << item << std::endl;
    }
    return out;
}

Item& generateItem();

void generateRuneItem(Item* pItem, int random, int i);

Item& Item::operator++() {
    return generateItem();
}

LootBox& operator<<(LootBox& box, const Item& item) {
    box.push_back(item);
    return box;
}

LootBox generateLootBox() {
    LootBox box;
    auto random_item = generateItem();
    box << random_item;
    box << ++random_item;
    box << ++random_item;
    return box;
}

Item& generateItem() {
    Item* pItem = new Item;
    int random = rand() % 10000; //random 1 => probability 0.01%, random 10_000 => probability 100%
    if (random >= 5000) { //between 9999 and 5000
        pItem->type = COIN;
        pItem->coin = { 1000 };
    }
    else if (random >= 560) { //between 4999 and 560
        generateRuneItem(pItem, random, 560);
    }
    else if (random >= 420) {
        pItem->type = WEAPON;
        pItem->weapon = { 100, 0, 100 };
    }
    else if (random >= 280) {
        pItem->type = WEAPON;
        pItem->weapon = { 75, 50, 100 };
    }
    else {
        pItem->type = ARMOR;
        pItem->armor = { 50, 100 };
    }

    return *pItem;
}

//offset = начало рандом когда генерируются руны чтобы начать с 0
void generateRuneItem(Item* pItem, int random, int offset) {
    pItem->type = RUNE;
    random -= offset;

    if (random < 14) {//probability 0.14
        pItem->rune = { 10, AIR };
    }
    else if (random < 21) { //0.14+0.7
        pItem->rune = { 10, EARTH };
    }
    else if (random < 34) { //21+13
        pItem->rune = { 10, WATER };
    }
    else if (random < 40) { //34+6
        pItem->rune = { 10, FIRE };
    }
    else if (random < 180) { //40+140
        pItem->rune = { 5, AIR };
    }
    else if (random < 250) {//180+70
        pItem->rune = { 5, EARTH };
    }
    else if (random < 380) {//250+130
        pItem->rune = { 5, WATER };
    }
    else if (random < 440) {//380+60
        pItem->rune = { 5, FIRE };
    }
    else if (random < 1840) {//440+1400
        pItem->rune = { 1, AIR };
    }
    else if (random < 2540) {//1840+700
        pItem->rune = { 1, EARTH };
    }
    else if (random < 3840) {//2540+1300
        pItem->rune = { 1, WATER };
    }
    else {
        pItem->rune = { 1, FIRE };
    }
}