#include "Card.h"
#include <iostream>

using namespace std;

Card::Card(int mark = 0, int number = 1) : _mark(mark), _number(number) {}

// カード情報を表示
void Card::ShowCard() const {
    const char marks[] = { 's', 'h', 'd', 'c' };
    cout << marks[_mark] << _number << flush;
}

// カードの比較演算子
bool Card::operator==(const Card& other) const
{
    return _mark == other._mark && _number == other._number;
}