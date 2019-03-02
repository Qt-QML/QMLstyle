import QtQuick 2.0

Rectangle{
    id: itemDlgt
    anchors.fill: parent;
    anchors.margins: 3;
    border.color: "blue";
    radius:3;
    color: styleData.selected ?"#1A4275": "transparent" ;

    Text{
        text:styleData.value ;
        font.family: "微软雅黑";
        font.pixelSize: 20;
        anchors.fill: parent;
        color: "white";
        elide: Text.ElideRight;
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
    }
}

