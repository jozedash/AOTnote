#include <QTLogging>
// The header for this class
#include "aotnote.h"
// The generated ui header from the uic (user interface compiler) tool
#include "ui_aotnote.h"

// Implement the constructor
AOTNote::AOTNote(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AOTNote) // Instantiate the ui class
{
    ui->setupUi(this); // Setup the ui class
    qInfo("Constructed AOTNote main");
}

AOTNote::~AOTNote()
{
    delete ui; // Delete the UI class
}

void AOTNote::on_actionNew_triggered()
{
    qInfo("I'm now triggered AF");
}

