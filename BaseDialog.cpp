#include "BaseDialog.h"

BaseDialog::BaseDialog(QWidget* parent):QDialog(parent)
{
    // ȥ�����Ͻ��ʺ�
    setWindowFlag(Qt::WindowContextHelpButtonHint, false);
    setAttribute(Qt::WidgetAttribute::WA_DeleteOnClose, false);
}

BaseDialog::~BaseDialog()
{
//�����ҵ��ļ�
}


// �����ڹر�ʱ�Ƿ��Զ�delete
void BaseDialog::setAutoDelete(bool autoDelete)
{
    setAttribute(Qt::WidgetAttribute::WA_DeleteOnClose, autoDelete);
}