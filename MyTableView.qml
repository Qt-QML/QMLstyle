import QtQuick 2.9
import QtQuick.Controls 1.4

TableView{
    id:tbView
    anchors.fill:parent
    anchors.margins: 10
    //代理
    headerDelegate:TableHeaderDelegate{}
    rowDelegate: TableRowDelegate{}
    itemDelegate: TableItemDelegate{}
    //模型
    model: ListModel{
        ListElement{
            title:"C++"
            book:"C++"
        }
        ListElement{
            title:"C++"
            book:"C++"
        }
    }

    frameVisible: false
    backgroundVisible: false
    TableViewColumn{
        title: "Title"
        role: "title"
        width: 200
    }
    TableViewColumn{
        title: "Book"
        role: "book"
        width: 200
    }

}
