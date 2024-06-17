#include <iostream>
#include <string>

struct Menu {
    std::string name;
    int price;
};

struct Cafe {
    std::string name;
    int menuCount;
    Menu* menuList;
};

void addCafe(Cafe &r1){
    std::cin >> r1.name ;
    std::cin >> r1.menuCount;
    r1.menuList = new Menu[r1.menuCount];
}
void addMenu(Menu &m1){
    std::cin >> m1.name ;
    std::cin >> m1.price;
}
void displayMenus(Cafe &r1){
    std::cout << "=====" << r1.name << "=====" << std::endl;
    for (int i = 0; i < r1.menuCount; ++i) {
        std::cout << r1.menuList[i].name << " " << r1.menuList[i].price << std::endl;
    }
    std::cout << "================" << std::endl;
}

int main(){
    Cafe c;
    addCafe(c);
    for(int i=0;i<c.menuCount;i++){
        addMenu(c.menuList[i]);
    }
    displayMenus(c);
    delete[]c.menuList;

    return 0;
}