import QtQuick 2.0
import QtQuick.Controls 2.4

Popup{
    id: popup
    anchors.centerIn: parent
    width: 400
    height: 200
    focus: true
    dim: true

    Text {
        text: "You win"
        font.pointSize: 25
        font.bold: true
        x: (parent.width - width) / 2
        y: (parent.height - height) / 2
    }

    background: Rectangle {
        id: rect
        border.width: 5
        radius: 15
        gradient: Gradient {
            GradientStop { position: 0.0; color: "lightsteelblue" }
            GradientStop { position: 1.0; color: "red" }
        }
    }

    closePolicy: Popup.CloseOnEscape
}
