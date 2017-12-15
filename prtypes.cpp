#include "shell_pch.h"
#include "prtypes.h"

BOOL PyObject_AsMSG( PyObject *obpmsg, MSG *msg )
{
	PyObject *obhwnd;
	return PyArg_ParseTuple(obpmsg, "Oiiii(ii)", &obhwnd,&msg->message,&msg->wParam,&msg->lParam,&msg->time,&msg->pt.x,&msg->pt.y)
		&& PyWinObject_AsHANDLE(obhwnd, (HANDLE *)&msg->hwnd);
}

PyObject *PyObject_FromMSG(const MSG *msg)
{
	if (!msg) {
		Py_INCREF(Py_None);
		return Py_None;
	}
	return Py_BuildValue("Niiii(ii)", PyWinLong_FromHANDLE(msg->hwnd),msg->message,msg->wParam,msg->lParam,msg->time,msg->pt.x,msg->pt.y);
}

BOOL PyObject_AsRECT( PyObject *ob, RECT *r)
{
	return PyArg_ParseTuple(ob, "iiii", &r->left, &r->top, &r->right, &r->bottom);
}

PyObject *PyObject_FromRECT(const RECT *r)
{
	if (!r) {
		Py_INCREF(Py_None);
		return Py_None;
	}
	return Py_BuildValue("iiii", r->left, r->top, r->right, r->bottom);
}

