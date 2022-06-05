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
    int count_of_number = 0;
    int arr[10] = { 7,9,2,0,4,6,0,4,3,9 };
    cout << "Введите число ->";
    cin >> number_for_find;
    for (int i = 0; i < 10; i++) {
        if (number_for_find == arr[i]) {
            is_in_arr = true;
            count_of_number++;            
        }
    }
    if (is_in_arr == true) {
        cout << "Есть в массиве! И повторяется " << count_of_number << " раз!";
    }
    else {
        cout << "отсутсвует в массиве!";
    }
    */

    /*
    const int s = 10;
    int arr[s] = { 7,9,2,0,4,6,0,4,3,9 };
    int number_for_find = 0;
    bool f = false;
    cout << "Введите число ->";
    cin >> number_for_find;

    for (int i = 0; i < s-1; i++)
    {
        for (int j = i+1; j < s; j++)
        {
            if (arr[i] == number_for_find && arr[i] == arr[j]) {
                f = true;
                break;
            }
        }
        if (f == true) { cout << "Данное число повторяется в массиве!\n"; break; }
    }
    */

    /*
    double arr[6];
    double for_month = 0;
    double summ = 0;
    for (int i = 0; i < 6; i++) {
        cout << "Введите доход за " << i + 1 << " месяц-> ";
        cin >> arr[i];
    }
    for (int i = 0; i < 6; i++) {
        summ += arr[i];
    }

    cout << "Доход за 6 месяцев составил " << summ << " руб." << endl;
    */
    
    /*
    const int s = 10;
    int arr[s] = { 7,9,2,0,4,6,0,4,3,9 };

    for (int i = s-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    */
    
    /*
    double arr[5] = { 0 };
    double summ = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Введите " << i + 1 << " сторону пятиугольника->";
        cin >> arr[i];
        summ += arr[i];
    }
    cout << "Периметр пятиугольника равен " << summ << " см.\n";
    */

    
    string month[12] = { "January", "February", "March",
                         "April", "May", "June",
                         "July", "August", "September",
                         "October", "November", "December" };
    double money_month[12];
    cout << "ведите прибыль в 1 месяц->";
    cin >> money_month[0];
    double max= money_month[0], min= money_month[0];

    for (int i = 1; i < 12; i++) {
        cout << "Введите прибыль в " << i + 1 << " месяц->";
        cin >> money_month[i];
        if (min > money_month[i]) min = money_month[i];
        if (max < money_month[i]) max = money_month[i];
    }

    for (int i = 1; i < 12; i++) {
        if (max == money_month[i]) cout << "Максимальная прибыль: " << max << " " << month[i] << endl;
        if (min == money_month[i]) cout << "Минимальная прибыль: " << min << " " << month[i] << endl;
    }
}