#ifndef CRC16_H
#define CRC16_H

#include <QMainWindow>

namespace Ui {
class crc16;
}

class crc16 : public QMainWindow
{
    Q_OBJECT

public:
    explicit crc16(QWidget *parent = nullptr);
    ~crc16();
    uint16_t CRC_check_16(uint8_t *pucY, uint16_t ucX);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::crc16 *ui;
};

#endif // CRC16_H
