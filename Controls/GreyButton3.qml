// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle {
    property alias text: textElement.text
    property string rsGradientStop0: "grey"
    property string rsGradientStop1: "darkgrey"
    id: greyButton2
    width: 100
    height: 30
    border.color: "Black"
    gradient: Gradient {
        GradientStop {
            id: gradientStop0
            position: 0
            color: rsGradientStop0
        }
        GradientStop {
            id: gradientStop1
            position: 1
            color: rsGradientStop1
        }
    }
    Text {
        id: textElement
        color: "yellow"
        font.underline: false
        font.bold: false
        font.pixelSize: 12
        anchors.centerIn: parent
    }
    ParallelAnimation {
        id: mouseEnterAnim
        PropertyAnimation {
            target: gradientStop0
            properties: "color"
            to: rsGradientStop1
            duration: 300
        }
        PropertyAnimation {
            target: gradientStop1
            properties: "color"
            to: rsGradientStop0
            duration: 300
        }
    }
    ParallelAnimation {
        id: mouseExitAnim
        PropertyAnimation {
            target: gradientStop0
            properties: "color"
            to: rsGradientStop0
            duration: 300
        }
        PropertyAnimation {
            target: gradientStop1
            properties: "color"
            to: rsGradientStop1
            duration: 300
        }
    }
    MouseArea {
        id: mouse
        x: 0
        y: 0
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: greyButton
        hoverEnabled: true
        onEntered: mouseEnterAnim.start()
        onExited: mouseExitAnim.start()
        onClicked:  window.FunctionPIUPIUPIU();


    }




    Text {
        id: text1
        x: -354
        y: 67
        width: 36
        height: 17
        text: qsTr("text")
        clip: false
        visible: true
        font.pixelSize: 12
    }
//    states: [
//        State {
//            name: "State1"
//        }
//    ]


}
