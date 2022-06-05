#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*
    const size_t arrSize = 5;
    int arr[arrSize] = { 1,2,3,4,5 };
    cout << arr[3] << endl;
    arr[3] = 78.8;
    cout << arr[3] << endl;
    */

    /*
    const size_t arrSize = 10;
    int arr[arrSize];
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    */

    /*
    const size_t arrSize = 7;
    double summ=0;
    int arr[arrSize];
    for (int i = 0; i < arrSize; i++) {
        cout << "Enter " << i << " element\n";
        cin >> arr[i];
    }
    for (int i = 0; i < arrSize; i++) {
        summ += arr[i];
    }
    cout << "Среднее арифметическое элементов массива: " << summ / arrSize << endl;
    */

    /*
    const size_t arrSize=10;
    int arr[arrSize];
    

    for (int i = 0; i < arrSize; i++)
    {
        cout << "Введите " << i << "элемент массива";
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < arrSize; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Minimum " << min << endl;
    */

    /*
    double summ = 0;
    const int arrSize = 10;
    int count = arrSize;
    int arr[arrSize] = {7, 9, 2, 0, 4, 6, 0, 4,3,1};
    for (int i=0; i < arrSize; i++)
    {
        summ += arr[i];
        if (arr[i] == 0)
        {
            count--;
        }
    }
    cout << "Average: " << summ / count;
    */
    
    //среднее арифметическое без максимумов и минимумов цикла

    /*
    double summ = 0;
    const int arrSize = 10;
    int max, min, count=0;
    int arr[arrSize] = { 7, 9, 2, 0, 4, 6, 0, 4, 3, 9 };
    
    max = arr[0], min = arr[0];
    
    

    for (int i = 0; i < arrSize; i++)
    {
        if (max < arr[i]) max = arr[i];
        if (min > arr[i]) min = arr[i];
    }
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == max || arr[i] == min) {
            count += 1;
        }
        else {
            summ += arr[i];
        }
    }
   
    cout << "Average: " << summ / (arrSize-count);
    */

    /*
    const int arrSize = 5;
    double arrStudent[arrSize] = { 152.6, 174, 160.05, 155.78, 147.99 };
    double average_height;
    int more_than_average=0;
    double summ = 0;
    for (int i = 0; i < arrSize; i++)
    {
        summ += arrStudent[i];
    }
    average_height = summ / arrSize;
    
    for (int i = 0; i < arrSize; i++)
    {
        if (arrStudent[i] > average_height) more_than_average++;
    }

    cout << more_than_average;
    */
    
    // не получилось, 2 массива создать третий без повторений в 1 и 2м
    /*
    
    const int s = 5;
    int s1 = 0;
    int temp = 0;
    int arr[s] = {7,8,9,1,5};
    int arr2[s] = { 2,6,7,2,1 };

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            if (arr[i] == arr[j])
                temp++;
            if (arr[i] == arr2[j])
                temp++;
            }
        if (temp == 1) s1++;
        temp = 0;
        
    }
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            if (arr2[i] == arr2[j])
                temp++;
            if (arr2[i] == arr[j])
                temp++;
            
        }
        if (temp == 1) s1++;
        temp = 0;
       
    }
    cout << s1;
    int* arr3 = new int[s1];
    int temp_arr = 0;

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s i++) {
            if(arr2[i] == arr2[j])
    }
    */

    /*
    int number_for_find = 0;
    bool is_in_arr = false;
    int arr[10] = { 7,9,2,0,4,6,0,4,3,9 };
    cout << "Введите число ->";
    cin >> number_for_find;
    for (int i = 0; i < 10; i++) {
        if (number_for_find == arr[i]) {
            is_in_arr = true;
            break;
        }
    }
    if (is_in_arr == true) {
        cout << "Есть в массиве!";
    }
    else {
        cout << "отсутсвует в массиве!";
    }
    */

    

}