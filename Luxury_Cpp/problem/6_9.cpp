#include <iostream>
#include <string>
using namespace std;

class Board
{
    static string Info[100];
    static int Index;
public:
    static void add(string str)
    {
        Info[Index] += str; ++Index;
    }

    static void print()
    {
        cout << "*********** 게시판입니다. ***********" << endl;
        for (int i = 0; i < Index; i++)
        {
            cout << i << ":" << Info[i] << endl;
        }
    }
};

string Board::Info[100];
int Board::Index;

int main()
{
    Board::add("중간고사는 감독 없는 자율 시험입니다.");
    Board::add("코딩 라운지 많이 이용해 주세요.");
    Board::print();
    Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
    Board::print();
}