from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import time
import sys

driver = webdriver.Firefox()
driver.get("https://solutionsadda.in/subject/?cs=Compiler-Design")
try:

    for i in range(1, 141):
        s = "mtq_button-"
        e = "-1-1"
        elem = driver.find_element_by_id(s+str(i)+e)
        elem.click()
    time.sleep(100)
    driver.close()
except:
    print("Unexpected error:", sys.exc_info()[0])
    driver.close()
