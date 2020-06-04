#include "mainwindow.h"

#Defining the "Adress book" class
  void saveToFile();
  void loadFromFile();

  QPushButton *loadButton;
  QPushButton *saveButton;

#Implement the "Adress Book" class

  loadButton->setToolTip(tr("Load contacts from a file"));
  saveButton->setToolTip(tr("Save contacts to a file"));

#For saving a file the QfileDialog function pops up a model file dialog and allows the user
#to enter any file name (in die geval kan n user ook enige file in die bestaande Adress book op kliek
#wat die extention .abk het)

  void AddressBook::saveToFile()
  {
      QString fileName = QFileDialog::getSaveFileName(this,
          tr("Save Address Book"), "",
          tr("Address Book (*.abk);;All Files (*)"));

# If the filename is empty

        if (fileName.isEmpty())
              return;

 #if the filename is not empty we attempt to open the file in Write only mode. If unsuccessful and cannot open the file
 # display the "Unable to open file" message.

          else {
              QFile file(fileName);
              if (!file.open(QIODevice::WriteOnly)) {
                  QMessageBox::information(this, tr("Unable to open file"),
                      file.errorString());
                  return;
              }

              QDataStream out(&file);                       #verstaan nie lekker hoekom hulle die doen nie
                     out.setVersion(QDataStream::Qt_4_5);
                     out << contacts;
                 }
             }
# Om n file oop te maak: obtain fileName using QFileDialog::getOpenFileName().Also allows user to enter a file name or select an
#existing .abk file

  void AddressBook::loadFromFile()
  {
      QString fileName = QFileDialog::getOpenFileName(this,
          tr("Open Address Book"), "",
          tr("Address Book (*.abk);;All Files (*)"));


      if (fileName.isEmpty())
             return;
         else {
      }

 #If file name is not empty use the Qfile object open the file in read only mode if the user was usuccessful to open file, display the message


             QFile file(fileName);

             if (!file.open(QIODevice::ReadOnly)) {
                 QMessageBox::information(this, tr("Unable to open file"),
                     file.errorString());
                 return;
             }

             QDataStream in(&file);
             in.setVersion(QDataStream::Qt_4_5);
             contacts.clear();   // clear existing contacts
             in >> contacts;




