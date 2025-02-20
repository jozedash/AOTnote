const { app, BrowserWindow } = require('electron')

const createWindow = () => {
  const win = new BrowserWindow({
    width: 250,
    height: 250,
    alwaysOnTop: true
  })

  win.loadFile('index.html')
}

app.whenReady().then(() => {
  createWindow()
})