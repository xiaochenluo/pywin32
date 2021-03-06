// This file declares the INamedPropertyStore Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyINamedPropertyStore : public PyIUnknown
{
public:
	MAKE_PYCOM_CTOR(PyINamedPropertyStore);
	static INamedPropertyStore *GetI(PyObject *self);
	static PyComTypeObject type;

	// The Python methods
	static PyObject *GetNamedValue(PyObject *self, PyObject *args);
	static PyObject *SetNamedValue(PyObject *self, PyObject *args);
	static PyObject *GetNameCount(PyObject *self, PyObject *args);
	static PyObject *GetNameAt(PyObject *self, PyObject *args);

protected:
	PyINamedPropertyStore(IUnknown *pdisp);
	~PyINamedPropertyStore();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGNamedPropertyStore : public PyGatewayBase, public INamedPropertyStore
{
protected:
	PyGNamedPropertyStore(PyObject *instance) : PyGatewayBase(instance) { ; }
	PYGATEWAY_MAKE_SUPPORT2(PyGNamedPropertyStore, INamedPropertyStore, IID_INamedPropertyStore, PyGatewayBase)

	// INamedPropertyStore
	STDMETHOD(GetNamedValue)(
		LPCWSTR pszName,
		PROPVARIANT * ppropvar);

	STDMETHOD(SetNamedValue)(
		LPCWSTR pszName,
		REFPROPVARIANT propvar);

	STDMETHOD(GetNameCount)(
		DWORD * pdwCount);

	STDMETHOD(GetNameAt)(
		DWORD iProp,
		BSTR * pbstrName);
};
