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
        SplitView{
            id:upDnSplite
            anchors.fill: parent
            orientation: Qt.Vertical
            Rectangle{
                id:up
                width:parent.width
                //此处的height对应c++类中toolBar中高度
                //height: 50
                Layout.minimumHeight: 50
                Layout.maximumHeight: 50

            }
            Rectangle{
                id:down
                SplitView {
                    id:lfRtSplite
                    anchors.fill: parent
                    orientation: Qt.Horizontal
                    Rectangle{
                        id:left
                        width:200
                        Layout.minimumWidth: 200
                        Layout.maximumWidth: 400
                        color: "black"
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
                        color: "black"
                        //加入tableView
                        MyTableView{
                            anchors.fill: parent
                        }
                    }
                }
            }
        }



    }
}
