#include "crc16.h"
#include "ui_crc16.h"

crc16::crc16(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::crc16)
{
    ui->setupUi(this);
}

crc16::~crc16()
{
    delete ui;
}

const uint16_t DRV_PTC_PRESET_VALUE = 0xFFFF;
const uint16_t DRV_PTC_POLYNOMIAL = 0x8408;
uint16_t crc16::CRC_check_16(uint8_t *pucY, uint16_t ucX)
{
    uint16_t ucI, ucJ;
    uint16_t uiCrcValue = DRV_PTC_PRESET_VALUE;
    for (ucI = 0; ucI < ucX; ucI++)
    {
        uiCrcValue =static_cast<unsigned short>(uiCrcValue ^ pucY[ucI]);
        for (ucJ = 0; ucJ < 8; ucJ++)
        {
            if ((uiCrcValue & 0x0001) > 0)
            {
                uiCrcValue = (uiCrcValue >> 1) ^ DRV_PTC_POLYNOMIAL;
            }
            else
            {
                uiCrcValue = (uiCrcValue >> 1);
            }
        }
    }

    return uiCrcValue;
}


void crc16::on_pushButton_clicked()
{
    QString str = ui->crc16Lineedit->toPlainText();
    QString str1=str;
    QString temp;
    QByteArray  byteArray;
    bool ok = false;
    uint16_t crc16;
    int j=0;

    //qDebug()<<"input:"<<str;
    str.replace(QString(" "), QString(""));

    byteArray = str.toLatin1();//按照ASCII编码转换，无法转换中文
    //byteHex = QByteArray::fromHex(byteArray);
    //qDebug()<<"input:"<<byteArray;

    uint8_t data[1024]={0};


    for (int i = 0 ; i < str.length()-1; i+=2, j++)
    {
        temp = str.mid(i, 2);
        data[j]=static_cast<uint8_t>(temp.toInt(&ok, 16));
        if(ok == true)
        {
            continue;
        }
        else
        {
            //qDebug()<<"to int failed !"<<endl;
            ui->txtEditcrcResult->setPlainText("Error:Data illegal!");
            break;
        }
    }

    if(ok==true)
    {
        ui->txtEditcrcResult->clear();

        crc16 = CRC_check_16(data, j);
        if(crc16 == 0)
        {
            ui->txtEditcrcResult->setPlainText("Crc-16 check successful!");
        }
        else
        {
            if(str.endsWith(" ")==true)  // endsWith: check if the string end with a space.
                str1.append(" ");

            str1.append(temp.sprintf("%02X", static_cast<uint8_t>(crc16)));//static_cast 类型转换函数 read sth. for reference ：https://blog.csdn.net/ydar95/article/details/69822540
            //str1.append( temp.number((uint8_t)crc16, 16));
            str1.append(" ");
            str1.append(temp.sprintf("%02X", static_cast<uint8_t>(crc16>>8)));
            //str1.append(temp.number(crc16>>8, 16));
            //ui->txtEditcrcResult->setPlainText(str1);
            ui->txtEditcrcResult->append(str1);
        }
    }
}

//clear text edit
void crc16::on_pushButton_2_clicked()
{
    ui->crc16Lineedit->clear();
    ui->txtEditcrcResult->clear();
}
