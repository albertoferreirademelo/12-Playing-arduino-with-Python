import serial, mp3play

filename = r'C:\danca.mp3'
mp3 = mp3play.load(filename)
ser = serial.Serial('COM10', 9600)
while 1:
    a = ser.readline()    
    if ("1" in a):
        if (mp3.isplaying()):
            mp3.pause()
        elif (mp3.ispaused()):
            mp3.unpause()
        else:
            mp3.play()