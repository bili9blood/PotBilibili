#include "settingsdialog.h"

#include "ui_settingsdialog.h"

SettingsDialog::SettingsDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::SettingsDialog) {
  ui->setupUi(this);
  ui->lineEdit_potplayerExcutable->setText(
      settings.value("potplayerExcutable").toString());
}

SettingsDialog::~SettingsDialog() { delete ui; }

void SettingsDialog::initWhenNotExists() {
  if (!QFile("settings.ini").exists()) {
    this->exec();
    QMessageBox::information(this, "提示", "配置文件不存在，开启初次配置");
  }
}

void SettingsDialog::selectPotplayerExcutable() {}

void SettingsDialog::closeEvent(QCloseEvent *) {
  settings.setValue("potplayerExcutable",
                    ui->lineEdit_potplayerExcutable->text());
}
