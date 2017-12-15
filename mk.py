import win32com.makegw.makegw

inc = "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/um/"
h = inc + "ShObjIdl.h"

win32com.makegw.makegw.make_framework_support("preview.h", "IPreviewHandler")
