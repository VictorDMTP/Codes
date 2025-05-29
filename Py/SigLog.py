import pyautogui 
import time
import keyboard 


pyautogui.press('win')
time.sleep(3)
pyautogui.write('Google',interval=0.2)      
time.sleep(2)
pyautogui.press('enter')        

#espera o app abrir
time.sleep(9)
pyautogui.press('tab')
pyautogui.press('enter')

pyautogui.write("https://sig.ifc.edu.br/sigaa/mobile/touch/login.jsf,interval", interval = 0.2)
pyautogui.press('enter')

time.sleep(4)
pyautogui.press('enter')

time.sleep(5)

for i in range (2):
    pyautogui.press('tab', interval=0.01)
    
pyautogui.write('', interval=0.01)
time.sleep(1)
pyautogui.press('tab')

pyautogui.write('', interval=0.01)
time.sleep(1)   
pyautogui.press('enter')

time.sleep(3)