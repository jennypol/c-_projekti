# c-_projekti
Käyttäjä valitsee tason jolla halutaan pelata, tiedostossa on valmiiksi sanoja, joita käyttäjä yrittää arvata. Jos sana menee väärin menettää pelaaja yhden elämän, jolloin hirsipuuhun lisääntyy uusi kuvio.

import requests
import re

def lue_linkit(url):
    response = requests.get(url)
    html = response.text
    linkit = re.findall(r'<a\s+href=[\'"](http[^\'"]+)[\'"]', html)
    return linkit[:100]

def tallenna_xml(urlit, tiedoston_nimi):
    for i, url in enumerate(urlit):
        response = requests.get(url)
        tiedosto_nimi = f"{tiedoston_nimi}_{i+1}.xml"
        with open(tiedosto_nimi, 'w') as tiedosto:
            tiedosto.write(response.text)
        print(f"Tiedosto {tiedosto_nimi} tallennettu.")

def hanki_seuraavat_linkit(url):
    response = requests.get(url)
    html = response.text
    linkit = re.findall(r'<a\s+href=[\'"](http[^\'"]+)[\'"]', html)
    return linkit[:-1]  # Jätetään viimeinen linkki pois

sivuston_url = 'https://esimerkkisivusto.com'
tiedoston_nimi = 'linkki'

while True:
    linkit = lue_linkit(sivuston_url)
    if not linkit:
        break
    tallenna_xml(linkit, tiedoston_nimi)
    sivuston_url = linkit[-1]





#toinen

import requests
from bs4 import BeautifulSoup

def lue_linkit(url):
    response = requests.get(url)
    soup = BeautifulSoup(response.text, 'html.parser')
    linkit = []
    for linkki in soup.find_all('a'):
        href = linkki.get('href')
        if href and 'http' in href:
            linkit.append(href)
        if len(linkit) == 100:
            break
    return linkit[:-1]  # Jätetään viimeinen linkki pois

def tallenna_xml(urlit, tiedoston_nimi):
    for i, url in enumerate(urlit):
        response = requests.get(url)
        tiedosto_nimi = f"{tiedoston_nimi}_{i+1}.xml"
        with open(tiedosto_nimi, 'w') as tiedosto:
            tiedosto.write(response.text)
        print(f"Tiedosto {tiedosto_nimi} tallennettu.")

def hanki_seuraavat_linkit(url):
    response = requests.get(url)
    soup = BeautifulSoup(response.text, 'html.parser')
    linkit = []
    for linkki in soup.find_all('a'):
        href = linkki.get('href')
        if href and 'http' in href:
            linkit.append(href)
    return linkit[:-1]  # Jätetään viimeinen linkki pois

sivuston_url = 'https://esimerkkisivusto.com'
tiedoston_nimi = 'linkki'

while True:
    linkit = lue_linkit(sivuston_url)
    if not linkit:
        break
    tallenna_xml(linkit, tiedoston_nimi)
    sivuston_url = linkit[-1]



#kolmas

ilman beautiful shop

import requests
import re

def lue_linkit(url):
    response = requests.get(url)
    html = response.text
    linkit = re.findall(r'<a\s+href=[\'"](http[^\'"]+)[\'"]', html)
    return linkit[:100]

def tallenna_xml(urlit, tiedoston_nimi):
    for i, url in enumerate(urlit):
        response = requests.get(url)
        tiedosto_nimi = f"{tiedoston_nimi}_{i+1}.xml"
        with open(tiedosto_nimi, 'w') as tiedosto:
            tiedosto.write(response.text)
        print(f"Tiedosto {tiedosto_nimi} tallennettu.")

def hanki_seuraavat_linkit(url):
    response = requests.get(url)
    html = response.text
    linkit = re.findall(r'<a\s+href=[\'"](http[^\'"]+)[\'"]', html)
    return linkit

sivuston_url = 'https://esimerkkisivusto.com'
tiedoston_nimi = 'linkki'

while True:
    linkit = lue_linkit(sivuston_url)
    if not linkit:
        break
    tallenna_xml(linkit, tiedoston_nimi)
    sivuston_url = linkit[-1]


#hakee kaikki


import requests
from bs4 import BeautifulSoup

def lue_linkit(url):
    response = requests.get(url)
    soup = BeautifulSoup(response.text, 'html.parser')
    linkit = []
    for linkki in soup.find_all('a'):
        href = linkki.get('href')
        if href and 'http' in href:
            linkit.append(href)
        if len(linkit) == 100:
            break
    return linkit

def tallenna_xml(urlit, tiedoston_nimi):
    for i, url in enumerate(urlit):
        response = requests.get(url)
        tiedosto_nimi = f"{tiedoston_nimi}_{i+1}.xml"
        with open(tiedosto_nimi, 'w') as tiedosto:
            tiedosto.write(response.text)
        print(f"Tiedosto {tiedosto_nimi} tallennettu.")

def hanki_seuraavat_linkit(url):
    response = requests.get(url)
    soup = BeautifulSoup(response.text, 'html.parser')
    linkit = []
    for linkki in soup.find_all('a'):
        href = linkki.get('href')
        if href and 'http' in href:
            linkit.append(href)
    return linkit

sivuston_url = 'https://esimerkkisivusto.com'
tiedoston_nimi = 'linkki'

while True:
    linkit = lue_linkit(sivuston_url)
    if not linkit:
        break
    tallenna_xml(linkit, tiedoston_nimi)
    sivuston_url = linkit[-1]

#lukee yhden

import requests
from bs4 import BeautifulSoup

def lue_linkit(url):
    response = requests.get(url)
    soup = BeautifulSoup(response.text, 'html.parser')
    linkit = []
    for linkki in soup.find_all('a'):
        href = linkki.get('href')
        if href and 'http' in href:
            linkit.append(href)
        if len(linkit) == 100:
            break
    return linkit

def tallenna_xml(urlit):
    for i, url in enumerate(urlit):
        response = requests.get(url)
        tiedosto_nimi = f"linkki_{i+1}.xml"
        with open(tiedosto_nimi, 'w') as tiedosto:
            tiedosto.write(response.text)
        print(f"Tiedosto {tiedosto_nimi} tallennettu.")

sivuston_url = 'https://esimerkkisivusto.com'
linkit = lue_linkit(sivuston_url)
tallenna_xml(linkit)
