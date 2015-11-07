#include "DeterminanteLineEditDialog.h"
#include "ui_DeterminanteLineEditDialog.h"

DeterminanteLineEditDialog::DeterminanteLineEditDialog(const QString &valor,
                                                       QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DeterminanteLineEditDialog)
{
    ui->setupUi(this);
    ui->determinanteLineEdit->setText(valor);
    ui->determinanteLineEdit->setReadOnly(true);
}

DeterminanteLineEditDialog::~DeterminanteLineEditDialog()
{
    delete ui;
}
