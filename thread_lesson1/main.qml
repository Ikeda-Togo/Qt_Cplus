import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Text {
        id: text1
        x: 42
        y: 37
        width: 147
        height: 44
        text: qsTr("HelloWorld!!")
        font.pixelSize: 22
    }

    Column {
        id: column
        x: 42
        y: 87
        width: 200
        height: 273
        spacing: 20

        Button {
            id: button
            text: qsTr("StartThread")
            highlighted: true
            flat: false
            onClicked:{
                helloworld.start_thread();
            }
        }

        Button {
            id: button1
            text: qsTr("EndThread")
            highlighted: true
            flat: false
            onClicked:
            {
                console.log("click stop");
                helloworld.stop_thread();
            }
        }

        Row {
            id: row
            width: 200
            height: 66

            Text {
                id: text2
                width: 88
                height: 28
                text: qsTr("Counter:")
                font.pixelSize: 20
            }

            Text {
                id: text3
                width: 88
                height: 28
                font.pixelSize: 20
                text: helloworld.q_counter
            }
        }
    }
    Column {
        id: column2
        x: 242
        y: 87
        width: 200
        height: 273
        spacing: 20

        Button {
            id: button2
            text: qsTr("StartThread2")
            highlighted: true
            flat: false
            onClicked:{
                helloworld2.start_thread();
            }
        }

        Button {
            id: button3
            text: qsTr("EndThread2")
            highlighted: true
            flat: false
            onClicked:
            {
                console.log("click stop");
                helloworld2.stop_thread();
            }
        }

        Row {
            id: row2
            width: 200
            height: 66

            Text {
                id: text4
                width: 88
                height: 28
                text: qsTr("Counter:")
                font.pixelSize: 20
            }

            Text {
                id: text5
                width: 88
                height: 28
                font.pixelSize: 20
                text: helloworld2.q_counter
            }
        }
    }
}
