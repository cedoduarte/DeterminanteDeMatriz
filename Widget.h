#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui
{
class Widget;
}

class QStandardItemModel;

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void on_ordenSpinBox_valueChanged(int arg1);
    void on_determinantePushButton_clicked();
    void on_quitarAplicacionPushButton_clicked();
private:
    double getValueAt(int ix, int jx) const;
    double **convertToDoublePointer() const;
    void deleteDoublePointer(double ***a) const;
    double calculateDeterminant(double **a, int order) const;

    Ui::Widget *ui;
    QStandardItemModel *mModel;
};

#endif // WIDGET_H
