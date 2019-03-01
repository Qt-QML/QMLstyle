import QtQuick 2.9
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.3

Item {
    visible: true
    width:800
    height: 500
    //anchors.centerIn: parent

    Rectangle{
        id:main
        color: "black"
        anchors.fill:parent
        SplitView {
            id:splitview
            anchors.fill: parent
            orientation: Qt.Horizontal
            Rectangle{
                id:left
                width:200
                Layout.minimumWidth: 200
                Layout.maximumWidth: 400
                color: "#AA66BB"
                Text {
                    id: text1
                    anchors.centerIn: parent
                    text: qsTr("text1")
                }
                SearchView{
                    anchors.top: parent.top
                }

            }
            Rectangle{
                id:right
                width: 200
                Layout.fillWidth: true
                Layout.minimumWidth: 200
                color: "#FF6699"
                Text {
                    id: text2
                    anchors.centerIn: parent
                    text: qsTr("text2")
                }
            }
        }

    }
}
