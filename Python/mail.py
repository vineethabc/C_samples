#!/usr/bin/python

import smtplib
import base64

filename = "/home/span59/Desktop/WorkOut/Python/mail_attach.txt"

# Read a file and encode it into base64 format
fo = open(filename, "rb")
filecontent = fo.read()
encodedcontent = base64.b64encode(filecontent)  # base64

sender = 'vineethk@spanidea.com'
reciever = 'vineeth.abc@gmail.com'

marker = "AUNIQUEMARKER"

body ="""
This is a test email to send an attachement.
"""
# Define the main headers.
part1 = """From: From Person <vineethk@spanidea.com>
To: To Person <vineeth.abc@gmail.com>
Subject: Sending Attachement
MIME-Version: 1.0
Content-Type: multipart/mixed; boundary=%s
--%s
""" % (marker, marker)

# Define the message action
part2 = """Content-Type: text/plain
Content-Transfer-Encoding:8bit

%s
--%s
""" % (body,marker)

# Define the attachment section
part3 = """Content-Type: multipart/mixed; name=\"%s\"
Content-Transfer-Encoding:base64
Content-Disposition: attachment; filename=%s

%s
--%s--
""" %(filename, filename, encodedcontent, marker)
message = part1 + part2 + part3

try:
   smtpObj = smtplib.SMTP_SSL('smtp.gmail.com',465)
   smtpObj.ehlo()
   #smtpObj.starttls()
   smtpObj.login("vineeth.abc@gmail.com","*******")
   smtpObj.sendmail(sender, reciever, message)
   smtpObj.close()
   print "Successfully sent email"
except Exception:
   print "Error: unable to send email"
