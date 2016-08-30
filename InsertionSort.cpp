using namespace std;

void insertionSort(int A[], const int SIZE) {
    for (int i = 1; i < SIZE; i++) {
        int key = A[i];
        int j = i-1;
        
        while ((j >= 0) && (A[j] > key)) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}
