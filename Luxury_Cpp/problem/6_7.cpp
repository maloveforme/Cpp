#include <iostream>
using namespace std;

class Random
{
public:
    static void seed()
    {
        srand((unsigned)time(NULL));
    }

    static int nextInt(int min = 0, int max = 32767)
    {
        return (rand() % (max - min + 1)) + min;
    }

    static char nextAlphabet()
    {
        char c;
        int choiceAlphabet = rand() % 2;

        if (choiceAlphabet == 0) // 대문자인 경우
        {
            return (rand() % 26) + 65;
        }

        else // 소문자인 경우
        {
            return (rand() % 26) + 97;
        }
    }

    static double nextDouble()
    {
        return rand() / (static_cast<double>(RAND_MAX + 1));
    }

};

int main()
{
    Random::seed();
    cout << "최솟값 입력: ";
    int min;
    cin >> min;

    cout << "최댓값 입력: ";
    int max;
    cin >> max;

    int size = 10;

    cout << min << "부터 " << max << "까지 랜덤한 정수 " << size << "개 출력합니다." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << Random::nextInt(min, max) << ' ';
    }

    cout << endl << "알파벳을 랜덤하게 " << size << "개 출력합니다." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << Random::nextAlphabet() << ' ';
    }

    cout << endl << "랜덤한 실수 " << size << "개 출력합니다." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << Random::nextDouble() << ' ';
    }
}