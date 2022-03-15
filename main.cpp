#include "PetShop.h"
#include "Pet.h"
#include <iostream>

int main() {
    Cat* cat1 = new Cat("qwe", "asd", 12);
    Cat* cat2 = new Cat("wer", "asd", 11);
    Dog dog1("dog", "qwe", 11);
    //Pet pet1("qwe", "qwe", 11);
    cat1->say();
    cat2->play();
    std::cout << cat1 << "\n";
    std::cout << cat2 << "\n";
    PetShop shop1 = PetShop("shop1");
    PetShop shop2 = PetShop("shop2");
    shop1.put(cat1);
    shop1.put(cat2);
    shop1[0]->say();
    shop1[1]->getSpeacies();
    std::cout << shop1[0] << "\n";
    




    return 0;
}

