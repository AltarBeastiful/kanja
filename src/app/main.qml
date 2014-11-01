import QtQuick 2.2
import QtQuick.Controls 1.1

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Kanja")

    property int nbSeriesToDisplay : 3

    menuBar: MenuBar {
        Menu {
            title: qsTr("File")
            MenuItem {
                text: qsTr("Exit")
                onTriggered: Qt.quit();
            }
        }
    }
    Rectangle{
        id:mainContainer
        anchors.fill: parent
        color:"red"
        ListView {
            anchors.fill: parent
            model: series
            delegate: Serie {}
         }

    }



}
