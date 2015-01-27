# Process this file with configure to produce setup.py

from distutils.core import setup, Extension
setup(name='libftdi',
      version='0.20',
      description='libftdi Python binding',
      author='Tarek Heiland',
      author_email='',
      maintainer='',
      maintainer_email='',
      url='',
      py_modules=['ftdi'],
      ext_modules=[Extension('_ftdi', ['ftdi_wrap.c'],
                             include_dirs=['../../src'],
                             library_dirs=['../../src/.libs','lib','/usr/lib'],
                             libraries=['ftdi'])],
      )
