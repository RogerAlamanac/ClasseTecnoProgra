// Set.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <unordered_map>

#include <set>
#include <unordered_set>
int main()
{
    //CRUD
    //CREATE
    std::map<int, std::string> map1;
    std::map<std::string, std::string> map2;
    std::unordered_map <std::string, std::vector<int>> map3;

    std::vector<int> v = { 138939, 101, 100, 1000585, 4999 };
    std::vector<int> v1 = { 190845, 2201, 101, 100, 87894 };

    map3.emplace("Jordi", v);
    map3.emplace("Ester", v1);
    for (const std::pair<std::string, std::vector<int>> keyValue : map3)
    {
        std::cout << "Name: " << keyValue.first << std::endl;
        for (int i = 0; i < keyValue.second.size(); i++) {
            std::cout << keyValue.second[i] << std::endl;
        }
        std::cout << std::endl;
    }



    map1.emplace(916, "Jordi");
    map1.emplace(5, "Manish");
    map1.emplace(5899, "David");
    map1.emplace(222, "Joaquin");
    map1.emplace(1888, "Ester");
    map1.insert(map1.begin(), std::pair<int, std::string>(10, "Josh"));

    std::map<int, std::string>::iterator it = map1.find(7);
    if (it == map1.end()) {
        //We haven't found the key
        map1.emplace(7, "Raul");
    }
    else {
        //We've found the key
        map1[7] = "Tommy";
    }
    //UPDATE
    map1[9000] = "Joan";

    std::cout << map1[7] << std::endl;
    map1.erase(7); //Borrem a Raul 7 per merengue
    std::cout << map1[9000] << std::endl;
    for (const std::pair<int, std::string> keyvalue : map1 )
    {
        std::cout << keyvalue.first << " " << keyvalue.second << std::endl;
    }

    std::set<int> mySetOfInts;
    mySetOfInts.insert(10);
    mySetOfInts.insert(243);
    mySetOfInts.insert(74);
    mySetOfInts.insert(79);

    std::set<std::string> mySetOfStrings;
    mySetOfStrings.insert("orange");
    mySetOfStrings.insert("Peer");
    mySetOfStrings.insert("Watermelon");
    mySetOfStrings.insert("orange");

    //for range based loop
    for (std::string s : mySetOfStrings) {
        std::cout << s << std::endl;
    }

    std::cout << "PROBLEMA 2" << std::endl;
    std::string s1 = "murcielago";
    std::string s2 = "ordenador";

    std::unordered_set<char> mySetOfChars;
    for (int i = 0; i < s2.size(); ++i) {
        mySetOfChars.insert(s2[i]);
    }

    //Imprimeix les lletres que hi ha en ORDENADOR sense repetir (output : ordena)
    std::unordered_set<char>::iterator itSet = mySetOfChars.begin();
    while (itSet != mySetOfChars.end()) {
        std::cout << *itSet << std::endl;
        ++itSet;
    }

    //Busca les lletres repetides en s1 i s2
    for (char c : s1) {
        std::unordered_set<char>::iterator itSet2 = mySetOfChars.find(c);
        if (itSet2 != mySetOfChars.end()) {
            //FOUND THE LETTER in ORDENADOR
            std::cout << c << " ";
        }
    } std::cout << std::endl;
}

