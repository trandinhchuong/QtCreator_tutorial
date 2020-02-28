import QtQuick 2.12
import QtDesignStudio 1.0
import QtQuick.Controls 2.3
import QtQuick.Layouts 1.3

Rectangle {
    width: Constants.width
    height: Constants.height

    color: Constants.backgroundColor
    property alias progressBar: progressBar
    property alias button: button
    property alias dial: dial

    ProgressBar {
        id: progressBar
        x: 0
        y: 32
        width: 640
        height: 25
        value: 0.5
    }

    Dial {
        id: dial
        x: 255
        y: 129
    }

    Button {
        id: button
        x: 70
        y: 167
        text: qsTr("exit")
    }

}
