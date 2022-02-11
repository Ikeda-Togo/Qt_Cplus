import QtQuick
import QtQuick.Controls.Material
import QtQuick.Dialogs

Rectangle{
    id: root
    property int maxValue : 10

    function add(data){
        listData.append(data)
        if(listData.count > root.maxValue){
            listData.remove(0)
        }
    }
    function save_log(fileUrl){
        saveLog.openFile(fileUrl);
        console.log(fileUrl)
        for (var i = 0; i < listData.count; i++)  {
            saveLog.writeLog(listData.get(i).date, listData.get(i).comment);
        }
        saveLog.closeFile();

    }

    FileDialog {
        id: saveFileDialog
        nameFilters: ["Text files (*.txt)", "All files (*)"]
        onAccepted: save_log(saveFileDialog.currentFile)
    }

    ListModel{
        id: listData
    }

    ListView{
        id:logData
        anchors.fill:parent
        anchors.topMargin: 0
        highlightFollowsCurrentItem: true
        activeFocusOnTab: false
        focus: false
        clip: true
        model: listData
        delegate: Row{
            spacing: 10
            Text{text: date}
            Text{text: comment}
        }

        //一番したをビューに(auto scroll)
        onCountChanged: {
            logData.currentIndex = count - 1
        }
        Button{ // our inlined button ui
            id: saveButton
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            anchors.margins:5
            text: qsTr("save")
            onClicked:{
                saveFileDialog.open()
            }
        }
    }
}
