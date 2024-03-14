//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//struct Student {
//	int m_DNI;
//	std::string m_name;
//	int* pointer;
//	Student(int DNI) {
//		
//		m_DNI = DNI;
//		m_name = "SIIU";
//	}
//
//	Student(int DNI, std::string name) {
//		m_DNI = DNI;
//		m_name = name;
//	}
//};
////struct vector {
////	int* pointer;
////	int size;
////	//Constructor de vector
////	vector(int n) {
////		pointer = new int[n];
////	}
//// int size() {return size;}
//// int push_back(int n);
//// void pop_back;
////};
//void CreateEnemies(int n) {
//	int a = 5;
//	float f = 4.5f;
//	// We use new to create n elements internally
//	std::vector<int> enemies(n);// new enemies[n]
//	//Apply logic to enemies
//
//	// We delete vector, use delete[] operator
//}
//
//
//
//int main() {
//	//CREATE
//	std::vector<int> myIntVector = { 10, 5, 3, 2 };
//	std::vector<int> myIntVector2 = { -10, -5, -10, -10 };
//	std::vector<float> myFloatVector(10, -3.4f); //Primero numero de elementos y segundo el valor que asignamos a todas las casillas
//	std::vector<int> myIntVector3(myIntVector);
//	std::cout << "Size vector:" << std::endl;
//	std::cout << myIntVector.size() << std::endl;
//
//	std::vector<Student> myStudents;
//	Student s1(22345521);
//	myStudents.push_back(s1); //Es un vector Struct
//
//	//READ
//	//Iteradors
//	std::cout << "Printing using iterators" << std::endl;
//	std::vector<int>::iterator it = myIntVector.begin();//Els iteradors serveix per iterar; sap en tot moment on esta el begin() i el end(). Et aquest cas està apuntant a l'inici, al 10.
//	++it;
//	it = myIntVector.insert(it, 5);//Posa un 5 a la posicio de it; crea un nou iterador, que crea una nova posicio a l'array, en aquest cas al principi, ja que it=begin(). Sobreescribim el iterador perquè no quedi invalidat i no peti (igualar) :)
//	//Si fem ++it insterarà el 5 al lloc del 10, ja que el it = a la casella anterior del begin i l'incrementem .
//	std::sort(myIntVector.begin(), myIntVector.end()); //Incloure llibreria algorithm. std::sort, ordena de menor a major
//	
//	for (it = myIntVector.begin(); it < myIntVector.end(); ++it)//Funciona molt similar com un array estàtic; imprimeix totes les posicions de l'array
//	{//Si declarem it començarà a imprimir desde el 10, i imprimirà el 5 del insert a la següent posició.
//		std::cout << *it << " ";
//	}	
//	std::cout << std::endl;
//	std::cout << "-------------" << std::endl;
//	for (int elem : myIntVector) {//Fa el mateix que el bucle de dalt, imprimir tot l'array. 
//		std::cout << elem << " ";
//	}
//	
//	//CLASSE 13/03/24
//	for (int i = 0; i < myStudents.size(); ++i) {
//		std::cout << myStudents[i].m_DNI << " " << myStudents[i].m_name;
//	}
//	std::cout << std::endl;
//
//	for (int i = 0; i < myFloatVector.size(); ++i) {
//		std::cout << myFloatVector[i] << " ";
//	}
//	std::cout << std::endl;
//
//	//UPDATE
//	myIntVector[3] = -57;
//	//for (int i = 0; i < myIntVector.size(); i++) {
//	// myIntVector[i] = -1;
//	//}
//	std::cout << std::endl;
//
//	for (int elem : myIntVector) { //for range-based, no indices. El elem : myIntVector coge el valor, no el tamaño. No se puede escribir myIntVector[elem]
//		std::cout << elem << " ";
//	}
//	std::cout << std::endl;
//
//	//DELETE
//	myFloatVector.pop_back(); //Para eliminar la ultima casilla del vector y reducir el tamaño en 1
//
//	myIntVector.resize(2);
//	for (int elem : myIntVector) { //for range-based, no indices. El elem : myIntVector coge el valor, no el tamaño. No se puede escribir myIntVector[elem]
//		std::cout << elem << " ";
//	}
//	std::cout << std::endl;
//
//	//Vector destroys itself automatically
//}