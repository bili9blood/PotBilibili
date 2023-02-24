#include "settingsdialog.h"

#include "ui_settingsdialog.h"

SettingsDialog::SettingsDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::SettingsDialog) {
  ui->setupUi(this);
  ui->lineEdit_potplayerExcutable->setText(
      settings.value("potplayerExcutable").toString());
}

SettingsDialog::~SettingsDialog() { delete ui; }

void SettingsDialog::selectPotplayerExcutable()
{

}

void SettingsDialog::closeEvent(QCloseEvent *) {
  settings.setValue("potplayerExcutable",
                    ui->lineEdit_potplayerExcutable->text());
}
