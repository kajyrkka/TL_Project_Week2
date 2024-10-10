# TL_Project_Week2


# Viikon perustavoite = Siirrä kiihtyvyysanturin dataa (x,y,z) BLE yhteyden yli puhelimeen.

## 0. Ohjeet Scrum tiimille (= 6 työparia) 
	  Viikon vastuullinen työpari pitää daily palaverit keskiviikkoisin ja torstaisin.
	  Scrum-tiimin discord kanavalle raportoidaan daily palaverin tulokset (ketkä paikalla, missä
	  kukin työpari on menossa ja mahdolliset ongelmat). 
	  
	  Viikon vastuullinen työpari järjestää perjantaisin sprint review palaverin Scrum tiimille
	  ja koostaa Scrum-tiimin discord kanavalle raportin viikon tuloksista kunkin työparin osalta.
	  Raportissa kerrotaan myös mikä on seuraavan viikon vastuullinen pari.
	  
	  Tutustukaa alla oleviin viikon tehtäviin ja tehkää githubin projektin Kanban tauluun 
	  suunnitelma, minkälaisissa stepeissä aiotte viikon tehtävät tehdä ja testata. Esimerkiksi
	  "Tutustu annettuun ADC ohjelmaan" -tehtävästä voisi tulla Kanban tauluun 2 tehtävää: 1) Annettu
	  ADC ohjelma saadaan todistetusti käännettyä ja ladattua (flash) nrf5340DK alustalle. 2) Kiihtyvyys
	  anturi on kytketty todistetusti oikein nrf5340DK laitteen pinneihin ja kiihtyvyysanturia kääntelemällä
	  saadaan järkeviä kiihtyvyyslukemia tulostettua serial monitor työkaluun.

## 1. Katso ensin video viikon kokonaistavoitteesta. https://youtu.be/0WQW8uLjsSg

## 2. Tutustu annettuun ADC ohjelmaan

Käännä ja flashää repositoryn mukana tuleva WorkingADCSolution nrf5340dk alustalle, tutustu koodiin
alustan nappien ja ledien toimintaan. Varmista AD-muuntimen oikea toiminta kytkemällä VDD ja GND signaaleja
alustan pinneihin ohjelman ollessa käynnissä.

p0.03 for x acceleration < br />
p0.04 for y acceleration < br />
p0.05 for z acceleration < br />

Kytke kiintyvyysanturi edellä lueteltuihin pinneihin ja testaa kiihtyvyysanturin toiminta.

## 3. Tee ohjelma, joka lähettää dataa BLE yhteyden yli puhelimeen

Tee tunnukset Nordic Academyyn https://academy.nordicsemi.com/, jos sinulla ei niitä jo ole.

Jatketaan tai aloitetaan Bluetoot Low Energy (BLE) Fundamentals -kurssi (jota ollaan toivottavasti suoritettu jo johonkin asti
tietoliikenteen perusteiden kurssilla). Käydään kurssilta läpi Lesson 4 alkuosan teoria ja exercise 1 ja exercise 2. Kun 
exercise 2 on suoritettu loppuun ohjeiden mukaisesti, niin sinulla pitäisi olla kasassa ohjelma, joka lähettää periodisesti
integer dataa BLE yhteyden yli (jos puhelimelle asennettu ohjelma nfrConnect yhdistää nrf5340dk laitteeseen ja "tilaa" tiedon).
https://academy.nordicsemi.com/lessons/lesson-4-bluetooth-le-data-exchange/

Muokkaa esimerkin koodia siten, että yhden integer tiedon sijasta BLE yhteyden yli lähetetäänkin 4 tietoa (x,y,z ja suunta). 
Tämä on itse asiassa helppo tehdä siten, että send_data_thread funktiossa my_lbs_sensor_notify funktiota kutsutaan useita
kertoja, mutta vain eri datalla. 

## 4 Integroi nyt kohdan 2 ja 3 ohjelmat

Lisää kohdassa 2 testaamasi ADC-muuntimen toiminallisuus BLE:n yli lähettävään ohjelmaan (kohta 3). Ota
käytöön nrf5340dk alustasta myös nappi 2 (esimerkkikoodihan käyttää jo nappia 1). Napilla 2 voit vaihtaa
suunta muuttujan arvoa 0,1,2,3,4,5,0,1,...aina nappia painettaessa. Lähetä BLE yhteyden yli (jos joku
tilaa sensoriarvon) suuntatieto, x,y,z kiityvyydet.


# Viikon ylimääräinen tavoite = BLE low energy fundamentals kurssin sertifikaatti

Suorita Nordic Academyn Bluetooth Low Energy Fundamentals kurssi loppuun asti ja näytä todisteeksi suoritukseta saamasi sertifikaatti.

