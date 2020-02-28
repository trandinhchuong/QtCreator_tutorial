import QtQuick 2.12
import QtDesignStudio 1.0

Item {
    width: Constants.width
    height: Constants.height

    Screen01 {
        progressBar.onValueChanged: {

}
        button.onClicked: {
            Qt.quit();

}
        dial.onValueChanged: {
            progressBar.value=dial.value;

}

    }
}
