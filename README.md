# fjc-scrypt

This program is forked for Fujicoin electrum client.  
It generate blockhash of Scrypt-N fixed N-factor=11 algorism.
The original files is [here](https://pypi.python.org/simple/vtc-scrypt/).  
This is Python version 2.7 or newer.  

## Install

`pip install git+https://github.com/namuyan/fjc-scrypt`  

## Example

`import fjc_scrypt`  
`fjc_scrypt.getPoWHash('hello world!').encode('hex')`  
`'c1760e910375b61035f2402adb0339dda6753a08903a425bec97905a844f0702'`  

## Licence

[MIT](https://github.com/tcnksm/tool/blob/master/LICENCE)

## Author

[namuyan](http://namuyan.dip.jp)  
Twitter @namuyan_mine
