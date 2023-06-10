#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>


enum class playerStatus{
    Stanby,
    Main,
    Trash,
    End
}Q_ENUM;


class Player : public QObject
{
    Q_OBJECT
public:
    explicit Player(QObject *parent = nullptr);

    bool useCard();
    bool discardCard();

private:
    int stockNum; // 山札の枚数
    int skill;  // 固有スキル
    int point;  // ポイント

};

#endif // PLAYER_H
