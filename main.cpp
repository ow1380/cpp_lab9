#include <iostream>

using namespace std;

// шаблонная функция поиска минимума и максимума в массиве типа T
template <typename T>
pair<T, T> find_min_max(T arr[], size_t arr_size) {
    if (arr_size == 0) {
        throw invalid_argument("The array is empty");
    }
    T min = arr[0];
    T max = arr[0];
    for (size_t i = 1; i < arr_size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    return {min, max};
}

template <typename T>
void print_arr_mm(T arr[], size_t arr_size, auto min_max) {
    cout << "arr: {";
    for (size_t i = 0; i < arr_size; i++) {
        cout << arr[i];
        if (i != arr_size - 1) cout << ", ";
    }
    cout << "}" << endl;
    cout << "min: " << min_max.first << endl;
    cout << "max: " <<  min_max.second << endl;
}

int main() {

    int arr_int[] {1, 2, 768, 3, 4, -56, 5};
    print_arr_mm(arr_int, size(arr_int), find_min_max(arr_int, size(arr_int)));
    cout << endl;

    double arr_double[] {1.1, 168.34, 2.2, 3.3, 0.98, 4.4, 5.5};
    print_arr_mm(arr_double, size(arr_double), find_min_max(arr_double, size(arr_double)));
    cout << endl;

    char arr_char[] {'A', 'B', '0', 'C', 'Z', 'D'};
    print_arr_mm(arr_char, size(arr_char), find_min_max(arr_char, size(arr_char)));
    cout << endl;

    string arr_string[] {"ABC", "A", "DEF", "QWERTY", "GHI"};
    print_arr_mm(arr_string, size(arr_string), find_min_max(arr_string, size(arr_string)));

    return 0;
}