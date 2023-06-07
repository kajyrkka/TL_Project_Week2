# TL_Project_Week2


# Viikon perustavoite = Siirrä kiihtyvyysanturin dataa (x,y,z) BLE yhteyden yli puhelimeen.

## 1. Katso ensin video viikon kokonaistavoitteesta. LINKKI YOUTUBEEN TÄHÄN:

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

## 4 Integroi nyt kohdan 2 ja 3 ohjelmat

Lisää kohdassa 2 testaamasi ADC-muuntimen toiminallisuus BLE:n yli lähettävään ohjelmaan (kohta 3). Ota
käytöön nrf5340dk alustan kaksi nappia. Ensimmäisestä napista voit vaihtaa suunta muuttujan arvoa 0,1,2,3,4,5,0,1,...
aina nappia painettaessa. Ja toisesta napista laite lähettää 100 kpl x,y,z,suunta tietoja BLE:n yli


# Viikon ylimääräinen tavoite = BLE low energy fundamentals Lesson 4 loppuun

Toteuta vielä BLE fundamentals kurssin Lesson 4 osan esimerkki 3 ja suorita osan "tentti"
Näytä todiste läpäistystä testistä ja demo esimerkistä 3.