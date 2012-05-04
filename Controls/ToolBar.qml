// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Item {
    id:root
    width: 32
    height: 32
    property string buttonType: "settings"
    property bool disabled: false
    signal clicked()
    Image {
        id: normal
        anchors.centerIn: parent
        source: {
            if ( sensor.pressed)
                return  "../assets/images/piu1_"+parent.buttonType+"_piu1.png";
            if ( sensor.containsMouse)
                return  "../assets/images/app_toolbar_"+parent.buttonType+"_over.png"
            else return "../assets/images/app_toolbar_"+parent.buttonType+"_norm.png"
        }
    }
    MouseArea {
        id: sensor
        hoverEnabled: true
        z: 1
        anchors.fill: parent
        onClicked: root.clicked()

    }
}
