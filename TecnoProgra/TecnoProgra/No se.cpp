//#include <iostream>
//
//using namespace std;
//
//// dynamicArray -> Pointer to array
//// Capacity -> Size of dynamicArray
//int* resizeToDoubleCapacityArray(int* oldArray, int capacity) {
//	// Create new array in the heap
//	int* newArray = new int[capacity * 2];
//
//	//Copy values on new array
//	for (int i = 0; i < capacity * 2; ++i)
//	{
//		if (i < capacity) {
//			//[0...4], assuming capacity = 5
//			newArray[i] = oldArray[i];
//		}
//		else{
//			// [5...9]
//			newArray[i] = 7;
//		}
//	}
//
//	delete[] oldArray;
//	oldArray = nullptr;
//
//	return newArray;
//}
///*int main() {
//	int dynamicSize;
//	cout << "Enter array size" << endl;
//	cin >> dynamicSize;
//	int* dinamicArray1D = new int[dynamicSize];
//	cout << "Pointer value: " << dinamicArray1D << endl;
//	for (int i = 0; i < dynamicSize; ++i)
//	{
//		dinamicArray1D[i] = i;
//	}
//	for (int i = 0; i < dynamicSize; ++i)
//	{
//		cout << dinamicArray1D[i] << " ";
//	}
//	cout << endl;
//	cout << "enter size" << endl;
//	cin >> dynamicSize;
//	cout << dynamicSize << endl;
//	int oldDynamicSize = dynamicSize;
//	int* newArray = resizeToDoubleCapacityArray(dinamicArray1D, oldDynamicSize);
//
//	for (int i = 0; i < dynamicSize; ++i)
//	{
//		cout << newArray[i] << " ";
//	}
//
//	/*for (int i = 0; i < dynamicSize; ++i)
//	{
//		//CRASH
//		//dinamicArray1D[i] = i;
//	}*/
//
//	//Delete original array
//	//
//
//	/*delete[] dinamicArray1D;//dELETES ELEMENTS IN HEAP MEMORY
//	dinamicArray1D = nullptr;
//
//	dinamicArray1D = new int[dynamicSize]; //Creates new array with new size
//	cout << "NEW Pointer Value: " << dinamicArray1D << endl;
//}*/
