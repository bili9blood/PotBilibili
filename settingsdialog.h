#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QCloseEvent>
#include <QCoreApplication>
#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QSettings>

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QDialog {
  Q_OBJECT

 public:
  explicit SettingsDialog(QWidget *parent = nullptr);
  ~SettingsDialog();
  void initWhenNotExists();

 private:
  Ui::SettingsDialog *ui;
  QSettings settings = QSettings("settings.ini", QSettings::Format::IniFormat);
 private slots:
  void selectPotplayerExcutable();

 protected:
  void closeEvent(QCloseEvent *);
};

#endif  // SETTINGSDIALOG_H
