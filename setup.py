from distutils.core import setup, Extension

fjc_scrypt_module = Extension('fjc_scrypt',
                              sources=['./scryptmodule.c',
                                       './scrypt.c'],
                              include_dirs=['./'],
                              extra_compile_args=['-O3', '-msse3'])

setup(name='fjc_scrypt',
      version='1.0',
      description='Bindings for scrypt-n proof of work used by Fujicoin',
      ext_modules=[fjc_scrypt_module])
