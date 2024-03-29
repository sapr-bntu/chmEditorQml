import QtQuick 1.0

Rectangle {
    property alias text: textElement.text
    property string rsGradientStop0: "grey"
    property string rsGradientStop1: "darkgrey"
    signal clicked
    id: greyButton
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
        anchors.fill: greyButton
        hoverEnabled: true
        onEntered: mouseEnterAnim.start()
        onExited: mouseExitAnim.start()
        //onClicked: window.FunctionPIU()
        onClicked: greyButton.clicked()
    }




//    Text {
//        id: text1
//        x: -354
//        y: 67
//        width: 23
//        height: 17
//        text: qsTr("text")
//        font.pixelSize: 12
//    }

    states: [
        State {
            name: "State1"
        },
        State {
            name: "State2"
        }
    ]


}
