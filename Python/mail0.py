import smtplib


gmail_user ='vineeth.kodire@yahoo.com'  
gmail_password ='*****' # place your passwd
try:  
    server = smtplib.SMTP('smtp.mail.yahoo.com', 587) #gmail smtp.gmail.com:587(ss-465) , 
    server.ehlo()
    server.starttls()
    server.login(gmail_user, gmail_password) # for login u need to enable remmote apps login in your resp mail settings. ow Auth error 
    server.sendmail(gmail_user,"vineeth.abc@gmail.com","python msg ging") #msg will be there at spam folder
    server.quit()
except smtplib.SMTPAuthenticationError:
    print 'Auth wrong...'
except smtplib.SMTPNotSupportedError:
    print 'Not supported...' 
except smtplib.SMTPException:
    print 'no method for auth...'
else:
    print 'No exception'
