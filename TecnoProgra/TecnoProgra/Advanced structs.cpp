//#include <iostream>
//using namespace std;
//enum class EnemyType {
//	WARRIOR,
//	SORCERER,
//	COUNT,
//	INVALID
//};
//
//
//struct Enemy {
//	int m_health = 1000;
//	EnemyType m_enemyType = EnemyType::INVALID;
//	//Constructor, 0 parametros
//	Enemy(int health){
//		m_health = health;
//		//m_enemyType = enemyType;
//	}
//
//	/*int receiveDamage(int damageAmount) {
//		if (m_enemyType == EnemyType::WARRIOR) {
//			m_health -= damageAmount;
//			cout << "Warrior's health is now " << m_health << endl;
//		}
//
//		else if (m_enemyType == EnemyType::SORCERER) {
//			m_health -= damageAmount;
//			cout << "Sorcerers's health is now " << m_health << endl;
//		}
//		return m_health;
//	}*/
//};
//
//Enemy* initEnemy(){
//	Enemy* e4 = new Enemy(1700);
//	return e4;
//}
//Enemy initEnemyCopy() {
//	Enemy e(1900); //Health 1900
//
//	return e; //e ya no existe
//}
///*int main() {
//	Enemy e1(500);
//	//e1.receiveDamage(500);
//	Enemy e2(1200);
//	//e2.receiveDamage(300);
//	
//	Enemy e3(e1);//Clonar enemic
//
//	Enemy* e4 = new Enemy(1700); //HEAP ALLOCATION
//	//iu: comenta les coses rata
//}*/