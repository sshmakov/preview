#!/usr/bin/env python

"""
setup.py file for SWIG example
"""

from distutils.core import setup, Extension


example_module = Extension('_preview',
                           sources=['PyIPreviewHandler.cpp','prtypes.cpp'],
                           include_dirs=["C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.14393.0\\ucrt", 
                                         "C:/Projects/Source/pywin32-221/com/win32comext/shell/src",
                                         "C:/Python/Lib/site-packages/win32/include",
                                         "C:/Python/Lib/site-packages/win32com/include"],
                           library_dirs=["C:\\Program Files (x86)\\Windows Kits\\10\\Lib\\10.0.14393.0\\ucrt\\x86",
                                         "C:/Python/Lib/site-packages/win32/libs",
                                         "C:/Python/Lib/site-packages/win32com/libs"]
                           )

setup (name = 'preview',
       version = '0.1',
       author      = "My",
       description = """Simple swig example from docs""",
       ext_modules = [example_module],
       py_modules = ["preview"],
       )
