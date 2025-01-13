#pragma once
#include "Card.h"
#include "common.h"
#include <array>


class Shoe {
private:
    Card _cardShoe[CARD_NUM];
    int _cardNum; // �c��J�[�h����

    void _shuffle();
    void _initCardShoe();

public:
    enum SHOW_TYPE {
        CARD_ONLY,
        ALL
    };

    // �R���X�g���N�^
    Shoe();

    // �J�[�h��1�����o��
    Card takeCard();

    // �J�[�h�V���[��\���i�f�o�b�O�p�j
    void showShoe(SHOW_TYPE type = CARD_ONLY) const;
};