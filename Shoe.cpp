#include "Shoe.h"
#include <iostream>
#include <random>
#include <algorithm> // for std::shuffle

using namespace std;

//シャッフル（フィッシャーイェーツ）
void Shoe::_shuffle()
{
    for (int i = _cardNum; i > 1; --i) {
        int a = i - 1;
        int b = rand() % i;
        swap(_cardShoe[a], _cardShoe[b]);
    }
}

// デッキ初期化
void Shoe::_initCardShoe() {
    _cardNum = CARD_NUM; // カード数を設定

    for (int i = 0; i < _cardNum; ++i) {
        int mark = i / 13; // 0: ♠, 1: ♥, 2: ♦, 3: ♣
        int number = i % 13 + 1; // 1～13
        _cardShoe[i] = Card(mark, number); // 配列にカードを格納
    }

    _shuffle(); // シャッフル
}

// コンストラクタ
Shoe::Shoe() {
    _initCardShoe();
}

// カードを1枚取り出す
Card Shoe::takeCard() {
    if (_cardNum <= 0) {
        cout << "デッキが空です。新しいデッキを初期化します。" << endl;
        _initCardShoe();
    }

    _cardNum--; // 残りカードを減らす
    return _cardShoe[_cardNum]; // 最後のカードを返す
}

// カードシューを表示（デバッグ用）
void Shoe::showShoe(SHOW_TYPE type) const {
    int loopCount = (type == CARD_ONLY) ? _cardNum : CARD_NUM;

    for (int i = 0; i < loopCount; ++i) {
        _cardShoe[i].ShowCard();
        cout << " ";
    }
    cout << endl;
}