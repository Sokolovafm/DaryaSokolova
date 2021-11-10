// Исключение C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float num1, num2, res;
    try
    {
        cout << "Введите первое число:";
        cin >> num1;
        cout << "Введите второе число:";
        cin >> num2;
        if (num2 == 0)
        {
            throw - 1;
        }
        cout << "Результат:" << (res = num1 / num2)
            << endl;
    }
   /* catch (double num2)
    {
        if (num2 == 0)
        {
            throw "На ноль делить нельзя";
            cout << "Ошибка" <<
                endl;
            cout << "Делить на 0 нельзя" <<
                endl;
        }
    }*/
    catch (invalid_argument)
    {
        cout << "Ошибка операции" <<
            endl;
    }
    catch (...) 
    {
        cout << "Ошибка операции1" <<
            endl;
    }
}  
