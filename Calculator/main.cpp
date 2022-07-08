#include <QtGui/QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *w = new QWidget(NULL, Qt::WindowCloseButtonHint);

    QLineEdit *le = new QLineEdit(w);
    le->setReadOnly(true);
    le->move(10, 10);
    le->resize(240, 30);

    QPushButton *button[20] = {0};
    const char *btnText[20] =
    {"7", "8", "9", "+", "(",
     "4", "5", "6", "-", "(",
     "1", "2", "3", "*", "<-",
     "0", ".", "=", "/", "C"};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            int idx = i*5 + j;
            button[idx] = new QPushButton(w);
            button[idx]->resize(40, 40);
            button[idx]->move(10 + (10 + 40) * j, 50 + (10 + 40) * i);
            button[idx]->setText(btnText[idx]);
        }
    }


    int ret = 0;
    w->show();
    w->setFixedSize(w->width(), w->height());

    ret = a.exec();
    delete w;

    return ret;
}
