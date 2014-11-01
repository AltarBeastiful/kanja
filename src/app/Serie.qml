import QtQuick 2.2


Rectangle {
    id:delegate
    color: "blue"
    height : mainContainer.height / nbSeriesToDisplay
    width : mainContainer.width

    property int marginX : delegate.width / 5;
    property int marginY : delegate.height / 8;
    property real sleeveRatio : 1.375;

    Rectangle {
        id:serieNameContainer
        color: "transparent"
//        border.color: "green"
        anchors{
            left: sleevePictureId.right; leftMargin: 2
            right: parent.right; rightMargin:marginX
            top: delegate.top; topMargin: marginY
        }
        height: delegate.height / 2.25
        z:1
        Text {
            height: parent.height
            width: parent.width
            text: name
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: parent.height / 2
            maximumLineCount: 2
            smooth: true
            wrapMode: Text.WordWrap
            color: "white"
        }
    }
    Rectangle {
        id:durationContainer
        color:"transparent"
//        border.color: "red"
        anchors{
            left: serieNameContainer.left
            right: serieNameContainer.right
            top: serieNameContainer.bottom
            bottom: diffusionContainer.top
        }
        z:1
        Text {
            height: parent.height
            width: parent.width
            text: averageDuration + " min"
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: parent.height / 2
            maximumLineCount: 2
            smooth: true
            wrapMode: Text.WordWrap
            color: "white"
        }
    }
    Rectangle {
        id:diffusionContainer
        color:"transparent"
//        border.color: "yellow"
        anchors{
            left: serieNameContainer.left
            right: serieNameContainer.right
            bottom: delegate.bottom; bottomMargin: marginY
        }
        height: delegate.height / 6
        z:1
        Text {
            height: parent.height
            width: parent.width
            text: diffusion
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: parent.height / 2
            maximumLineCount: 2
            smooth: true
            wrapMode: Text.WordWrap
            color: "white"
        }
    }


    Image {
        id:sleevePictureId
        width: parent.height / sleeveRatio
        anchors {
            left: parent.left; leftMargin: marginX
            top: parent.top
            bottom: parent.bottom
        }
        source: sleevePicture
        fillMode: Image.PreserveAspectCrop
        z:1
    }

    Image {
        id:bannerPictureId
        anchors.fill: parent
        source: bannerPicture
        fillMode: Image.PreserveAspectCrop
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {}
    }
}

