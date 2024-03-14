#include <iostream>
#include <vector>

int posMin(std::vector<int>& v, int left, int right){
	int minIndex = left;
	for (int i = left + 1; i <= right; ++i) {
		if (v[i] < v[minIndex]) {
			minIndex = i;
		}
	}
	return minIndex;
}

void swap(int& min, int& count) {
	int aux= min;
	min = count;
	count = aux;

}
void SelectionSort(std::vector<int>& v) {//Un algoritme que selecciona el primer numero del array i el canvia de posicio amb el numero mes petit que esta desordenat per ordenar-los de més petit a més gran
	int last = v.size() - 1;
	for (int i = 0; i < last; ++i)
	{
		int minIndex = posMin(v, i, last);
		swap(v[minIndex], v[i]);
	}
}

void InsertionSort(std::vector<int>& v) {//Ordena els numeros en la seva posicio cada cop que pasa per una casella
	for (int i = 1; i < v.size(); ++i)
	{
		//Elemento a evaluar
		int x = v[i];
		//New index, used for comparing previous ordered elements
		int j = 1;
		while (j > 0 && v[j - 1] > x) {
			v[j] = v[j - 1];
			--j;
		}
		v[j] = x;
	}
}

void BubbleSort(std::vector<int>& v) {//Va movent els numeros de les caselles per ordre si el següent es més petit. -
	int n = v.size();
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (v[j] > v[j + 1]) {
				swap(v[j], v[j + 1]);
			}
		}
	}
}

void merge(std::vector<int>& v, int l, int m, int r) {
	std::vector<int> b(r - l + 1);
	int i = l;
	int j = m + 1;
	int k = 0;
	while (i<= m && j<=r)
	{
		if (v[i] <= v[j]) {
			b[k++] = v[i++];
		}
		else {
			b[k++] = v[j++];
		}
		while (i <= m) {
			b[k++] = v[i++];
		}
		while (j <= r) {
			b[k++] = v[j++];
		}
		for ( k = 0; k <= r-l; k++)
		{
			v[l + k] = b[k];
		}
	}
}

void MergeSort(std::vector<int>& v, int l, int r) {
	if (l < r) {
		int m = (l + r) / 2;
		MergeSort(v, l, m);
		MergeSort(v, m+1, r);
		merge(v, l, m, r);
	}
}

void QuickSort() {
}
/*int main() {
	// SORTING ALGORITHMS
	//3 10 7 -1 0
	std::vector<int> v = { 3,10,7,-1 };
	std::cout << "SELECTION SORT:" << std::endl;
	SelectionSort(v);
	for (int i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;
	std::vector<int> w = { 4,1,2,-1 };
	std::cout << "INSERTION SORT:" << std::endl;
	InsertionSort(w);
	for (int i = 0; i < w.size(); ++i)
	{
		std::cout << w[i] << " ";
	}
	std::cout << std::endl;
	std::vector<int> z = { 6,3,2,5,1 };
	std::cout << "BUBBLE SORT:" << std::endl;
	BubbleSort(z);
	for (int i = 0; i < z.size(); ++i)
	{
		std::cout << z[i] << " ";
	}
	std::cout << std::endl;

}*/