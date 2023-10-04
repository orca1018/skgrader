#!/usr/bin/env python3

import requests

def register(username, full_name, mail, passwd):
    requests.post('https://www.skgrader.tk/p1/users/register', data = {
        'user[login]': username,
        'user[full_name]': full_name,
        'user[email]': mail
    })

    requests.post('https://www.skgrader.tk/enigma/posn2561/enroll__22.php', data = {
        'rname': full_name,
        'sname': ' ',
        'nname': ' ',
        'room': '000',
        'id': username,
        'pwd1': passwd,
        'pwd2': passwd,
        'phone': '0',
        'mail': mail,
        'sub': 'บนทก'
    })

if __name__ == '__main__':
    username = input('Username: ')
    passwd = input('passwd: ')
    mail = '0@0.0'
    register(username, username, mail, passwd)