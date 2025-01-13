#pragma once
#include "Card.h"
#include "common.h"
#include <array>


class Shoe {
private:
    Card _cardShoe[CARD_NUM];
    int _cardNum; // 残りカード枚数

    void _shuffle();
    void _initCardShoe();

public:
    enum SHOW_TYPE {
        CARD_ONLY,
        ALL
    };

    // コンストラクタ
    Shoe();

    // カードを1枚取り出す
    Card takeCard();

    // カードシューを表示（デバッグ用）
    void showShoe(SHOW_TYPE type = CARD_ONLY) const;
};