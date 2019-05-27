


from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import time


# from selenium import webdriver
# from selenium.webdriver.common.by import By
# from selenium.webdriver.support.ui import WebDriverWait
# from selenium.webdriver.support import expected_conditions as EC

from PIL import Image
# import Image



email = 'jackgreen8118@gmail.com'
password = 'Greengiant1'

PATH = 'C:/Users/Brandon/Downloads/phantomjs-2.1.1-windows/phantomjs-2.1.1-windows/bin/phantomjs.exe' ## SET YOU PATH TO phantomjs


options = webdriver.ChromeOptions()
options.add_argument('--ignore-certificate-errors')
options.add_argument("--test-type")
options.binary_location = "/usr/bin/chromium"
driver = webdriver.Chrome(executable_path="C:/Users/Brandon/Downloads/chromedriver_win32/chromedriver.exe")#chrome_options=options)
# driver = webdriver.PhantomJS(PATH)
driver.get('https://www.swagbucks.com/p/login')

# # click radio button
# python_button = driver.find_elements_by_xpath("//input[@name='lang' and @value='Python']")[0]
# python_button.click()

print('  made driver, logging in...')

# type text
login_email_tbox = driver.find_element_by_id('sbxJxRegEmail')
login_email_tbox.send_keys(email)
  
time.sleep(2)
  
login_pass_tbox = driver.find_element_by_id('sbxJxRegPswd')
login_pass_tbox.send_keys(password)


login_pass_tbox.send_keys(Keys.RETURN)
 
time.sleep(2)

# click radio button
# login_button = driver.find_elements_by_xpath("//*[@type='button']")[0]
# login_button = driver.find_element_by_id('loginBtn')
# login_button.click()
time.sleep(10)

driver.save_screenshot('screenshot.png')

image = Image.open('screenshot.png')
image.show()

print('  should be logged in now, getting username...')

# wait = WebDriverWait(driver, 100)
# 
# wait.until(EC.presence_of_element_located((By.CLASS_NAME, 'listing-item__title')))
# wait.until(EC.presence_of_element_located((By.CLASS_NAME, 'listing-item__price')))
# 
# for elm in driver.find_elements_by_css_selector(".listing-item__title,.listing-item__price"):
#     print(elm.text)

user_img_icon = driver.find_element_by_id('sbUserMenuContainer')
print(user_img_icon.get_attributes('sbUserSwagName'))
# login_button.click()

 
# buttons = driver.find_elements_by_xpath("//*[@type='button']")
# for b in buttons:
#     print(b.id)
#     b.click()

# python_button.click()

# time.wait(5)

# # click submit button
# log_in_button = driver.find_elements_by_xpath('//*[@id="loginBtn"]/table/tbody/tr[3]/td/table/tbody/tr/td/div/table/tbody/tr/td[3]/input')[0]
# log_in_button.click()















# 
# from PIL import Image
# img = Image.open("C:\\Users\\Brandon\\Documents\\Personal_Projects\\HQ_hack\\HQ_Bot\\temp.png", 'r')
# img_w, img_h = img.size
# background = Image.new('RGBA', (1440, 900), (5, 5, 5, 5))
# bg_w, bg_h = background.size
# offset = ((bg_w - img_w) // 2, (bg_h - img_h) // 2)
# background.paste(img, offset)
# background.save('out.png')
# background.show()


# 
# from PIL import Image
# import pytesseract
# import argparse
# import cv2
# import os
# import pyscreenshot as Imagegrab
# from threading import Thread
# 
# 
# def extract_text_from_image(img_path):    
#     image = cv2.imread(img_path)
# #     cv2.imshow("Original", image)
#     
#     # Apply an "average" blur to the image
#     
# #     blurred = cv2.blur(image, (3,3))
# # # #     cv2.imshow("Blurred_image", blurred)
# #     img = Image.fromarray(blurred)
# 
#     text = pytesseract.image_to_string(image, lang='eng')
#     
#     return text
# 
# 
# print(extract_text_from_image("C:\\Users\\Brandon\\Pictures\\amazon_review_default_pics\\Capture.jpg"))



# from PIL import Image
# import pytesseract
# import argparse
# import cv2
# 
# # construct the argument parser and parse the arguments
# # ap = argparse.ArgumentParser()
# # ap.add_argument("-i", "--image", required=True, help="C:\\Users\\Brandon\\Downloads\\Screenshot_20190326-141014.jpg")
# # args = vars(ap.parse_args())
# 
# # load the image and convert it to grayscale
# image = cv2.imread("C:\\Users\\Brandon\\Pictures\\amazon_review_default_pics\\Capture.jpg")#"C:\\Users\\Brandon\\Downloads\\Screenshot_20190326-141014.jpg")#"C:\Users\Brandon\Pictures\amazon_review_default_pics\Capture.jpg"
# cv2.imshow("Original", image)
# 
# # Apply an "average" blur to the image
# 
# blurred = cv2.blur(image, (3,3))
# cv2.imshow("Blurred_image", blurred)
# img = Image.fromarray(blurred)
# text = pytesseract.image_to_string(img, lang='eng')
# print (text)
# cv2.waitKey(0)