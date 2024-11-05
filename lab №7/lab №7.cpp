#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

// задание 1
int sum(float a, float b) {
    return a + b;
}
int dif(float a, float b) {
    return a - b;
}
int pr(float a, float b) {
    return a * b;
}
// задание 2А
float dist(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
// задание 2Б
float dist0(float x1, float y1) {
    return sqrt(pow(0 - x1, 2) + pow(0 - y1, 2));

}
// задание 2В
float area(float x1, float y1, float x2, float y2, float x3, float y3) {
    float a = dist(x1, y1, x2, y2);
    float b = dist(x2, y2, x3, y3);
    float c = dist(x3, y3, x1, y1);
    float p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
// задание 3
float f(float x) {
    if (x < 0)
        return 7.0 / 3.0;
    else if (x >= 0 && x < 2 * M_PI)
        return (pow(x, 2) - 3);
    else
        return (1 + pow(x, 3)) / (2 * x);
}
// задание 4А
void star4() {
    char nums[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            nums[i][j] = '*';
            cout << nums[i][j]<< " ";
        }
        cout << endl;
    }
}
// задание 4Б
void starn(int n) {
    char** nums = new char* [n] {};
    for (int i = 0; i < n; i++)
        nums[i] = new char(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            nums[i][j] = '*';
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}
// задание 4В
void starnm(int n, int m) {
    char** nums = new char* [n] {};
    for (int i = 0; i < n; i++)
        nums[i] = new char(n);
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++)
                cout << " ";
        for (int j = 0; j < n; j++) {
            nums[i][j] = '*';
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}
// задание 4Г
void chess(int n, int m) {
    short cnt=0;
    char ch = '*';
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            for (int j = 0; j < n; j++) {
                if (cnt % 2 == 0)
                    ch = '*';
                else
                    ch = '=';
                for (int l = 0; l < m; l++) {
                    cout << ch << " ";
                }
                cout << "\t";
                cnt ++;
            }
            cout << endl;
            if (n % 2 != 0) // без данного условия с нечёт n не работает
                cnt++;
        }
        cout << endl << endl;
        cnt++;
    }
}
// задание 5А
float factorial(int n) {
    short cnt = 1;
    int fact = 1;
    while (cnt <= n) {
        fact *= cnt;
        cnt++;
    }
    return fact;
}
// задание 5Б
int power(int x, int n) {
    int nmb = 1, pwr = 1;
    while (pwr <= n) {
        nmb *= x;
        pwr++;
    }
    return nmb;
}
// задание 6
string sign(int x) {
    if (x > 0)
        return "плюс ";
    else
        return "минус ";
}
string number(int x) {
    x = abs(x);
    switch (x) {
    case 0: return "ноль "; break;
    case 1: return "один "; break;
    case 2: return "два "; break;
    case 3: return "три "; break;
    case 4: return "четыре "; break;
    case 5: return "пять "; break;
    case 6: return "шесть "; break;
    case 7: return "семь "; break;
    case 8: return "восемь "; break;
    case 9: return "девять "; break;
    case 10: return "десять "; break;
    }
}
int main()
{
    setlocale(LC_ALL, "RU");
    // задание 1
    /*float a, b; cin >> a >> b;
    cout << sum(pr(5, sum(a, b) - 2), pr(1000, a));*/

    // задание 2А
    /*float x1, x2, y1, y2; cin >> x1 >> x2 >> y1 >> y2;
    cout << dist(x1, x2, y1, y2);*/

    // задание 2Б
    /*float x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    cout << dist0(x1, y1) << endl << dist0(x2, y2);*/

    // задание 2В
    /*float x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << "Вершина 1: " << "(" << x1 << ", " << y1 << ")" << endl;
    cout << "Вершина 2: " << "(" << x2 << ", " << y2 << ")" << endl;
    cout << "Вершина 3: " << "(" << x3 << ", " << y3 << ")" << endl;
    cout << "Площадь треугольника: " << area(x1, y1, x2, y2, x3, y3);*/

    // задание 2Г
    /*float x1, y1, x2, y2, x3, y3, x4, y4; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    float area1 = area(x1, y1, x2, y2, x3, y3);
    float area2 = area(x3, y3, x4, y4, x1, y1);
    cout << area1 + area2;*/

    // задание 3А
    /*float a, b; cin >> a >> b;
    cout << 12.5 + f(2) - f(4) * f(10) + f(a) - f(b) + f(a * b);*/

    // задание 3Б
    //float numsx[7], numsy[7];
    //short cnt = 0, max_el = -32000;
    //for (int i = 0; i < 7; i++) // ввод элементов в массив
    //    cin >> numsx[i];
    //cout << "Элементы массива y: ";
    //for (int i = 0; i < 7; i++) {
    //    numsy[i] = f(numsx[i]);
    //    cout << numsy[i] << ", ";
    //    if (numsy[i] < 0)
    //        cnt++;
    //    if (numsy[i] > max_el)
    //        max_el = numsy[i];
    //}
    //cout << endl << "Кол-во отрицатьельных элементов: " << cnt << endl;
    //cout << "Максимальтный элемент: " << max_el;

    // задание 4А
    /*star4();*/

    // задание 4Б
    /*starn(10);*/

    // задание 4В
    /*starnm(5, 50);*/

    // задание 4Г
    /*chess(8, 3);*/

    // задание 5А
    /*short N, M; cin >> N >> M;
    cout << (factorial(N) * factorial(M)) / factorial(N + M);*/

    // задание 5Б
    //cout << power(6, 6);
    
    // задание 6
    short a; cin >> a;
    cout << sign(a) << number(a);

    return 0;
}

