#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMediaPlayer>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Create the main window
    QWidget window;
    window.setWindowTitle("Alarm");
    window.resize(250, 150);

    // Create the stop button
    QPushButton stopButton("Stop", &window);
    stopButton.setGeometry(10, 10, 100, 30);

    // Create the media player and play the sound
    QMediaPlayer player;
    player.setMedia(QUrl::fromLocalFile("C:/Windows/Media/Alarm01.wav"));
    player.setVolume(50);
    player.play();

    // Connect the stop button to the media player
    QObject::connect(&stopButton, &QPushButton::clicked, &player, &QMediaPlayer::stop);

    // Show the window and enter the main event loop
    window.show();
    return app.exec();
}