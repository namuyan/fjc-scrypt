# fjc-scrypt

This program is forked for Fujicoin electrum client.  
It generate blockhash of Scrypt-N fixed N-factor=11 algorism.
The original files is [here](https://pypi.python.org/simple/vtc-scrypt/).  
This is Python version 2.7 or newer.  

## Install

using pip install `pip install git+https://github.com/namuyan/fjc-scrypt`  

**OR**  

direct install `python setup.py install`  

**OR**

binary install for windows `fjc_scrypt-1.0.win32-py2.7.exe`  

## Example

`import fjc_scrypt`  
`fjc_scrypt.getPoWHash('b6e5948ffd2338d200ee510f41b1a63e7a895a8d079602609c1435ff9f4862a5fe265f22890e321710a787dec83a08d295fb9f9f85f6a0b296fc3877b725eff5ebb14452080b76358dd2898a6e2375378153d2744f8acb053a97a7a2a98755f5171c91a1'.decode('hex')).encode('hex')`  
`'3554fc537c40e379a7a643c406e535a046a692b0d90bfee834d418822c0076c0'`  
*A certain length of input is required!*

## Licence

[MIT](https://github.com/tcnksm/tool/blob/master/LICENCE)

## Author

[namuyan](http://namuyan.dip.jp)  
Twitter @namuyan_mine  
[header files](http://www.vector.co.jp/soft/win95/prog/se432866.html)  
header files created by 株式会社きじねこ
