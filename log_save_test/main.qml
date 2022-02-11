import QtQuick
import QtQuick.Controls
import QtQuick.Dialogs

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Column {
        id: line1
        anchors.fill: parent
        spacing: 10

        Text {
            id: text1
            text: qsTr("Log View")
            font.pixelSize: 20
        }
        Row{
            id:sendCommandRow
            y: 100
            clip: false
            TextField {
                id:commandData
                anchors.margins:5
                width:200
                text: ""
            }
            Button{
                id:commandButton
                text: qsTr("SendCommand")
                anchors.margins:5
                onClicked: {
                    var dt = new Date().toLocaleString(Qt.locale(), "yyyy-MM-dd hh:mm:ss")
                    logData.add({date: dt, comment:commandData.text})
                }
            }
        }
        Row{
            id:logRow
            y: 100
            height: 100
            width: parent.width
            anchors.left: parent.left
            anchors.rightMargin: 640
            clip: false
            LogView{
                id: logData
                width: parent.width/2
                color: "#ded4d4"
                border.width: 0
                anchors.left: parent.left
                anchors.rightMargin: 0
                anchors.top:parent.top
                anchors.bottom:parent.bottom
                anchors.leftMargin: 0
                clip: true
                opacity: 1
                visible: true
                z: 0
                maxValue: 100
            }
        }

    }
}
