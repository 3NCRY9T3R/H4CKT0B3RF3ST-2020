import re


my_str = """Email:enquiry@alliance.edu.in   Helpline: +91 80 3093 8100 / 8200 / 4619 9100
 Media  Library  News  Webmail  Careers
 
Dr. Pavana Dibbur
 : vc@alliance.edu.in
 : +91 80 3093 8100/4619 9100

 Pro Vice-Chancellor (Academics, Research & Strategy)
Dr. Anubha Singh
 : anubha@alliance.edu.in
 : +91 80 3093 8102

 Registrar
Mr. Madhu Sudan Mishra
 : registrar@alliance.edu.in
 : +91 80 3093 8100/4619 9100

 Registrar (Examination & Evaluation)
Dr. Sajan Mathew
 : registrar.exams@alliance.edu.in
 : +91 80 3093 8141

 Director (Placements)
Mr. Mathew Thankachan
 : placement@alliance.edu.in | mathew.t@alliance.edu.in
 : +91 80 3093 8124 | 98444 72674

 Director (International Affairs)
Mr. Rajen Chatterjee
 : rajen.chatterjee@alliance.edu.in
 : +91 80 3093 8075

 Director (Admissions)
Mr. Abhay Chebbi
 : abhay.chebbi@alliance.edu.in
 : +91 96636 46464

 Human Resources Department
 : hrd@alliance.edu.in
 : +91 80 3093 8210 / 8204

 Student Verification 
Office of Registrar (Examination & Evaluation)
 : edu.verify@alliance.edu.in
 : +91 80 3093 8100 / 8200 | +91 80 4619 9100

 Contacts Info
 ALLIANCE UNIVERSITY
 Central Campus
Chikkahagade Cross, Chandapura - Anekal Main Road, Anekal
Bengaluru – 562 106, Karnataka,   India. [ Get Route Map ]
+91 80 3093 8100/8200/4619 9100 | Fax: +91 80 4619 9099
E-mail : enquiry@alliance.edu.in

STUDENT VERIFICATION
ALLIANCE ADVENTURE CLUB
ANTI-RAGGING POLICY
ROUTE MAP
CONTACT US
2018 © Al """


# collect_emails = re.findall(r"[a-zA-Z0-9.+%]+@[a-zA-Z0-9.+%]+[.][a-zA-Z]+",my_str,)
# print(collect_emails)

# collect_emails = re.findall(r"[][][][]+",my_str)
# print(collect_emails)

collect_all_numbers = re.findall(
    r"[+][1-9 1-9 1-9 1-9 1-9 1-9 1-9 1-9 1-9 1-9]+", my_str)
collect_all = re.findall(
    r"[+][1-9 1-9 1-9 1-9 1-9 1-9 1-9 1-9 1-9 1-9]+", my_str)
print(collect_all_numbers)
print(collect_all)
