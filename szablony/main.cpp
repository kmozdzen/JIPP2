#include <iostream>

using namespace std;

template<typename type>
type min_value(type a, type b){
    return (a < b) ? a : b;
}

template<typename type>
type max_value(type a, type b){
    return (a > b) ? a : b;
}

template<typename type>
void printArray(type *a, int n){
    for(int i = 0; i < n; i++){
        cout << *(a + i) << " ";
    }
    cout << endl;
}

template<typename type>
void printMatrix(type **a, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
    cout << endl;
    }
}

int **allocate(int **a, int number_of_rows, int number_of_columns){
    a = new int*[number_of_rows];
    for(int i =0; i < number_of_rows; i++){
        a[i] = new int[number_of_columns];
    }
    return a;
}

double **allocate(double **a, int number_of_rows, int number_of_columns){
    a = new double*[number_of_rows];
    for(int i =0; i < number_of_rows; i++){
        a[i] = new double[number_of_columns];
    }
    return a;
}

void fill(int **a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = i + j;
        }
    }
}

void fill(double **a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = i + j + 0.3;
        }
    }
}
template<typename type, int size>
class Array{
private:
    type *tab;
public:
    Array(){
        tab = new type[size];
    }
    ~Array(){
        delete [] tab;
    }
};

template<typename type>
class Vector{
private:
    type *tab;
    int size;
public:
    Vector(){
        size = 0;
        tab = new type[size];
    }

    ~Vector(){
        delete [] tab;
    }

    void push_back(const type& value){
        tab[size] = value;
        size++;
        type *tab2 = new type[size];
        for(int i = 0; i < size; i++){
            tab2[i] = tab[i];
        }
        delete [] tab;
        tab = tab2;
    }

    void pop_back(){
        size--;
        type *tab2 = new type[size];
        for(int i = 0; i < size; i++){
            tab2[i] = tab[i];
        }
        delete [] tab;
        tab = tab2;
    }

    void print() const{
        for (int i = 0; i < size; i++)
            cout << tab[i] << " ";
        cout << endl;
        cout << "size = " << size << endl;
    }

    type *pointer(){
        return tab;
    }
};

int main() {
    cout << "Zadanie 1" << endl;
    cout << "min:" << endl;
    cout << min_value(3, 5) << endl;
    cout << min_value(6.6, 4.1) << endl;

    cout << "\nmax:" << endl;
    cout << max_value(3, 5) << endl;
    cout << max_value(6.6, 4.1) << endl;

    cout << "\nprintArray:" << endl;
    int a[6] = {1, 3, 7, 2, 6, 5}, n = 6;
    double aa[6] = {1.3, 3.6, 7.1, 2.2, 6.5, 5.9};
    printArray(a, n);
    printArray(aa, n);

    cout << "\nprintMatrix:" << endl;
    int nn = 2, m = 3;
    int **b, **c;
    double **bb, **cc;
    c = allocate(b, n, m);
    cc = allocate(bb, n, m);
    fill(c, n, m);
    fill(cc, n, m);
    printMatrix<int>(c, nn, m);
    cout << endl;
    printMatrix<double>(cc, nn, m);

    cout << "\nZadanie 3" << endl;
    Vector<int> vec;
    vec.push_back(1);
    vec.push_back(5);
    vec.push_back(2);
    vec.pop_back();
    vec.print();

    return 0;
}
