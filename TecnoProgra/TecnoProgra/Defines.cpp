//#include <iostream>
//
//#define A 10
//#define B 5
//#define max(a,b) ((a>b) ? a : b)//Et torna el valor maxim
////#define DEBUG_MODE //Si ho comentes, el ifdef no executa
//
//int maxWithoutDefine(int a, int b) {
//	return (a > b) ? a : b;
//}
////int Foo() {
////	int A = 90;//Dona error perquè es com si posesim 10=90 i no es true :( dani puto
////}
//int main() {
//	const int C = 3;
//
//	int result = A + B;
//#ifdef DEBUG_MODE //If si esta definit
//	std::cout << result << std::endl;
//#endif
//	int x=1;
//	int y = 2;
//#ifdef DEBUG_MODE
//	std::cout << max(x, y) << std::endl;//Si incrementes les variables aqui, t'ho incrementara dos vegades, ja que la funció fa dues accions, donant com a resultat un 4
//#endif 	
//	//result = B * A; //Amb els defines el * per multiplicar es pot confundre per un punter
//	result = C * A;
//}
