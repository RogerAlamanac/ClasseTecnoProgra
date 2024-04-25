//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//bool compareFunc(int& a, int& b)
//{
//    return a > b;
//}
//
//bool compareSize(std::string& a, std::string& b)
//{
//    return a.size() < b.size();
//}
//
//struct Person
//{
//    std::string name;
//    int age;
//};
//
//bool comparePersonaNameAndAge(const Person& a, const Person& b)
//{
//    // Caso 1: Por nombre
//    if (a.name != b.name)
//    {
//        return a.name < b.name;
//    }
//
//    // Caso 2: Por edad
//    return a.age > b.age;
//}
//
//int main()
//{
//    std::cout << "Hello World!\n";
//    std::vector<int> v = { 55, 19 ,15 ,5 };
//    std::sort(v.begin(), v.end(), compareFunc);
//
//    for (int i = 0; i < v.size(); ++i)
//    {
//        std::cout << v[i] << " ";
//    }
//    std::cout << std::endl;
//
//
//    std::vector<std::string> words = { "Zebra", "Banana", "Carrot", "Dog", "Zebra" };
//    std::sort(words.begin(), words.end(), compareSize);
//
//    for (int i = 0; i < words.size(); ++i)
//    {
//        std::cout << words[i] << " ";
//    }
//    std::cout << std::endl;
//
//
//    std::vector<Person> personas = { {"Ana", 30}, {"Manish", 29}, {"Jordi", 21}, {"Ana", 17} };
//    std::sort(personas.begin(), personas.end(), comparePersonaNameAndAge);
//
//    for (int i = 0; i < personas.size(); ++i)
//    {
//        for (int j = 0; j < personas.size(); ++j)
//        {
//            //std::cout << personas[i][j] << " ";
//        }
//    }
//    std::cout << std::endl;
//
//
//}