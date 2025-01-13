#pragma once
#include <iostream>

class Card {
private:
    int _mark;   // カードのマーク (0: ♠, 1: ♥, 2: ♦, 3: ♣)
    int _number; // カードの番号 (1～13)

public:
    Card(int mark, int number);

    // カード情報を表示
    void ShowCard() const;

    // カードの比較演算子
    bool operator==(const Card& other) const;
};