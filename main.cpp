#include <iostream>

using namespace std;

// шаблонная функция поиска минимума и максимума в массиве типа T
template <typename T>
void find_min_max(T arr[], size_t arr_size) {
    if (arr_size == 0) {
        cout << "The array is empty" << endl;
        return;
    }
    T min = arr[0];
    T max = arr[0];
    cout << "arr: {";
    for (size_t i = 0; i < arr_size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
        cout << arr[i];
        if (i != arr_size - 1) cout << ", ";

    }
    cout << "}" << endl;
    cout << "min: " << min << endl;
    cout << "max: " <<  max << endl;
}

int main() {

    int arr_int[] {1, 2, 768, 3, 4, -56, 5};
    find_min_max(arr_int, size(arr_int));
    cout << endl;

    double arr_double[] {1.1, 168.34, 2.2, 3.3, 0.98, 4.4, 5.5};
    find_min_max(arr_double, size(arr_double));
    cout << endl;

    char arr_char[] {'A', 'B', '0', 'C', 'Z', 'D'};
    find_min_max(arr_char, size(arr_char));
    cout << endl;

    string arr_string[] {"ABC", "A", "DEF", "QWERTY" "GHI"};
    find_min_max(arr_string, size(arr_string));

    return 0;
}