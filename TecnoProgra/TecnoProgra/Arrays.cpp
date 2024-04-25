//#include <iostream>
//using namespace std;
//
//void arrays(){
//	const int NUM_COL = 3;
//	float myArrayFloats[NUM_COL] = { 3.0f, 4.7f, 5.1f };
//
//	char myArrayChars[NUM_COL];
//	myArrayChars[0] = 'H';
//	myArrayChars[1] = 'D';
//	myArrayChars[2] = 'P';
//
//	const int ROW = 4;
//	const int COL = 3;
//
//	double my2DArray[ROW][COL] = {
//		{3.0f, 4.7f, 5.1f}, //ROW1
//		{3.0f, 5.2f, 5.1f}, //ROW2
//		{3.0f, 4.7f, 2.9f}, //ROW3
//		{3.0f, 4.7f, 5.1f}, //ROW4
//	};
//
//	double my2DArray2[ROW][COL];
//	my2DArray2[0][0] = 7.6f;
//	my2DArray2[0][1] = 7.6f;
//	my2DArray2[0][2] = 7.6f;
//
//	for (int i = 0;i<ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			my2DArray2[i][j] = rand() % 100;
//		}
//	}
//
//	int numElem;
//	cin >> numElem;
//
//	float* myArray = new float[numElem];
//
//	for (int i = 2; i < numElem; ++i)
//	{
//		myArray[i] = numElem * i;
//	}
//	delete[] myArray;
//	myArray = nullptr;
//
//	int** my2DArray3;
//
//	my2DArray3 = new int* [ROW];
//
//	for (int i = 0; i < ROW; ++i)
//	{
//		my2DArray3[i] = new int[COL];
//	}
//	//Delete array
//	for (int i = 0; i < ROW; ++i)
//	{
//		delete[] my2DArray3[i];
//	}
//
//	delete[] my2DArray3;
//	my2DArray3 = nullptr;
//}
//
//void DinamicArray2D() {
//	int numColumns;
//	int numRows;
//	cin >> numRows;
//	cin >> numColumns;
//
//	int** my2DArray = nullptr;
//
//	my2DArray = new int* [numRows];
//
//	for (int i = 0; i < numRows; ++i)
//	{
//		my2DArray[i] = new int[numColumns];
//	}
//	//Read values
//	int* row2=nullptr;
//	for (int i = 0; i < numRows; i++)
//	{
//		if (i == 2) {
//			row2 = my2DArray[i];
//		}
//		for (int j = 0; j < numColumns; ++j)
//		{	
//			my2DArray[i][j] = 8;
//		}
//	}
//	if (row2 != nullptr) {
//		for (int i = 0; i < numColumns; ++i)
//		{
//			row2[i] = 7;
//		}
//	}
//	for (int i = 0; i < numRows; i++)
//	{
//		for (int j = 0; j < numColumns; ++j)
//		{
//			cout<<my2DArray[i][j]<<" ";
//		}
//		cout << endl;
//	}
//}
//
//
///*int main() {
//	DinamicArray2D();
//}*/
