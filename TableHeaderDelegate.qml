import QtQuick 2.0

Rectangle{
    id:headerDlgt
    //背景颜色透明
    color:"transparent"
    border.color: "blue"
    anchors.margins: 10
    //anchors.fill: parent
    height: 40
    radius: 3
    Text {
        anchors.centerIn: parent
        text: styleData.value
        font.pixelSize: 30
        font.family: "微软雅黑"
        color: "white"
    }
}




