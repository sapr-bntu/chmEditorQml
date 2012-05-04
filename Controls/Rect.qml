// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1


Item {
    width: 360
    height: 360
    Rectangle {
        id: cropFrame
        width: parent.width/2
        height: parent.height/2
        color: "#00000000"
        radius: 2
        border.color: "#3654b5"
    }

    MouseArea {
        anchors.fill: parent
        onPressed: {
            cropFrame.border.width = 4
        }

        onReleased: {
            cropFrame.border.width = 2
        }
    }
}
