import QtQuick 2.12
import QtQuick.Layouts 1.3

Row {
    id:row
    spacing: 10
    anchors.fill: parent
    TextInput{
        id:textinput
        width: parent.width-img.width
        height: 20
        color: "white"
        text: "请输入..."
        wrapMode: TextInput.Wrap
        onActiveFocusChanged: {
            textinput.clear()
        }
    }
    Image {
        id: img
        source: "source/searchIcon.bmp"
        Layout.fillWidth: true
        MouseArea{
            anchors.fill: parent
            onClicked: {
                textinput.text="没有找到"
            }
        }
    }

}
