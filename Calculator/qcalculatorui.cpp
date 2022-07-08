#include "qcalculatorui.h"

QCalculatorUI::QCalculatorUI() : QWidget(NULL)
{
   m_edit = new QLineEdit(this);

}

QCalculatorUI::~QCalculatorUI()
{

}


bool QCalculatorUI::construct() {
    bool ret = true;
    return ret;
}

QCalculatorUI *QCalculatorUI::NewInstance()
{
    QCalculatorUI *ret = NULL;
    if (ret == NULL || !ret->construct()) {
        delete ret;
        ret = NULL;
    }
    return ret;
}

