# AlwaysOnTop Notepad

Always on top, saves to text, useful for online meetings
******

## Environment build
The first of all, your computer needs the Node.js and npm environment.
If yours does not have them, you can install them via following link:
<https://nodejs.org/en/download>

After installation, you can check if the installation was successful with the following commands in cmd:
```
node -v
npm -v
```
You can see the result of the installation.

Because our project is mainly used **Electron**, you can check the official documentation on how to use.
<https://www.electronjs.org/>

There are two ways to install this tool, as below:
### Foreign Countries
If you are not in China, it is very easy to install Electron, you can use the official command to install it.
```
npm install electron --save-dev
```
Also if you want see the download progress, also can use following command.
```
npm install electron --save-dev --verbose
```

Then you can check if the installation was successful by using the following command through cmd.
```
electron --version
```

By the way, the above operations are run from the root directory of the computer, so that node and Electron can be installed as system environment variables on the computer.
### China
It is difficult to install Electron because of the Chinese network, so you can install electron quickly by using the below method.

First of all, you need to set the Electron mirror in China.
```
ELECTRON_MIRROR="https://npmmirror.com/mirrors/electron/"
```
#### Setting environment variables temporarily
- CMD:
```
set ELECTRON_MIRROR=https://npmmirror.com/mirrors/electron/
npm install -g electron --save-dev --verbose
```

- PowerShell:
```
$env:ELECTRON_MIRROR="https://npmmirror.com/mirrors/electron/"
npm install -g electron --save-dev --verbose
```

- Linux/Mac OS:
```
export ELECTRON_MIRROR="https://npmmirror.com/mirrors/electron/"
```

#### Setting environment variables permanently
- Windows 
Press **win + R**, type **sysdm.cpl** in and enter.Then choose **Advanced** -> **environment variable** .
Click create in system variable or user variable:
```
Variable name: *ELECTRON_MIRROR
Variable path: https://npmmirror.com/mirrors/electron/
```

Then restart cmd and can run it
```
npm install -g electron --save-dev --verbose
```

- Linux/Mac OS:
Type this word in **~/.bashrc** or **~/.zshrc(if use zsh)**
```
export ELECTRON_MIRROR="https://npmmirror.com/mirrors/electron/"
```
Execute:
```
source ~/.bashrc  # if bash
source ~/.zshrc   # if zsh
```
Then run:
```
npm install -g electron --save-dev --verbose
```

#### Use the npm parameter to specify the registry
If you do not want to set system variable, you can specify the Electron registry through npm command.
```
npm install -g electron --registry=https://registry.npmmirror.com
```