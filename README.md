# TL_Project_Week2


## 1. Viikon 2 tavoite (arvosana max 3)

1.1 Siirrä kiihtyvyysanturin data (x, y, z) Bluetooth Low Energy (BLE) -yhteyden yli puhelimeen tai tietokoneeseen. 

1.2 Suorita **Nordic Academy – Bluetooth Fundamentals** -kurssi ja esitä hyväksytty sertifikaatti ohjaavalle opettajalle.



## 1.1.1 ADC-ohjelmaan tutustuminen

1. Käännä ja flashää repositoryn mukana tuleva **WorkingADCSolution** nrf5340DK-alustalle.  
2. Tutustu koodiin sekä nappien ja LEDien toimintaan.  
3. Testaa AD-muuntimen toiminta kytkemällä tunnettuja jännitteitä **VDD** ja **GND** X,Y ja Z akseleiden pinneihin. Näin varmistat, että käytät oikeita pinnejä ja että annettu ohjelma toimii oikein.

| Signaali       | nrf5340DK pinni |
|----------------|-----------------|
| X-kiihtyvyys   | p0.03 |
| Y-kiihtyvyys   | p0.04 |
| Z-kiihtyvyys   | p0.05 |

4. Kytke lopuksi kiihtyvyysanturi pinneihin ja varmista, että sarjaporttiin tulostuu järkeviä arvoja (=se suunta, joka kertoo maan vetovoiman aiheuttaman kiihtyvyyden on suurin), kun anturia kääntelee.


## 1.1.2. Datan lähettäminen BLE:n yli

1. Luo tunnukset **[Nordic Academyyn](https://academy.nordicsemi.com/)**, jos sinulla ei vielä ole niitä.  
2. Suorita **Bluetooth Low Energy Fundamentals** -kurssi, vähintään Lesson 4 (teoria + Exercises 1–2).  
3. Asenna omaan puhelimeesi **nRF Connect** ohjelma ja opettele käyttämään sitä.
4. Exercise 2:n jälkeen sinulla on ohjelma, joka lähettää *integer*-datan BLE:n yli, kun **nRF Connect** -sovellus tilaa sen.  
5. Lähetä yhden integer-arvon sijasta **neljä arvoa**:
  - X, Y ja Z kiihtyvyydet  
  - Suunta (0–5) (0 = X alas, 1 = X ylos, 2 = Y alas, 3 = Y ylös, 4 = Z alas, 5 = Z ylös)

Voit toteuttaa tämän esimerkiksi kutsumalla `my_lbs_sensor_notify()` -funktiota useita kertoja eri datalla `send_data_thread`-funktiossa.


## 1.1.3 ADC(1.1.1) + BLE(1.1.2) ohjelmien integraatio

Yhdistä edellä testattu ADC-ohjelma ja BLE-ohjelma. Yhdistäminen kannattaa tehdä siten, että lisää BLE-ohjelmaan ADC-ohjelman tiedostot adc.cpp ja adc.h, muokkaa projektin build configuraatiota siten, että myös adc.cpp tiedosto käännetään ja että A/D-muuntimen sijainti kerrotaan käännökselle overlay-tiedoston avulla.

- Muokkaa yhdistettyä ohjelmaa ottamalla käyttöön **nappi 2**. Nappia 2 käytetään *suunta*-muuttujan arvon muuttamiseen seuraavasti 0  → 1 → 2 → 3 → 4 → 5 → 0...  
- Muokkaa Bluetooth lähetystä siten, että lähetetään seuraavat arvot:
  **Suunta**, **X**, **Y** ja **Z** kiihtyvyydet.
- Muokkaa yhdistettyä ohjelmaa ottamalla käytöön **nappi 3**. Nappia 3 käytetään 100 peräkkäisen mittauksen tekemiseen jostain tietystä suunnasta. Ensin valitaan suunta napilla 2 ja tämän jälkeen nappia 3 painamalla laite tekee 100 kpl x,y,z mittauksia ja lähettää bluetooth radion yli viestin, joka sisältää: valittuSuunta, x,y,z 100 kertaa. Tätä ohjelman ominaisuutta hyödynnetään myöhemmin datan keräykseen, kun Raspberry Pi:lle on saatu tehtyä ohjelma, joka vastaanottaa bluetooth viestit ja lähettää vastaanottamansa datat tietokantaan.



## 1.2.1 Sertifikaatti

Suorita **Bluetooth Low Energy Fundamentals** -kurssi loppuun ja näytä sertifikaatti ohjaavalle opettajalle.

Vinkkejä:
- Voit käyttää valmiita *solution*-versioita nopeuttaaksesi työskentelyä.  
- Varmista, että:
  - olet kääntänyt ja flashännyt kaikki esimerkkikoodit,  
  - testannut ne nrf5340DK-laitteessa,  
  - suorittanut kaikki **QUIZ**-osat hyväksytysti.



# 2. Viikon 2 lisätavoite (arvosanat max 4-5)

### 2.1 Sovellusidea ja datan hyödyntäminen
Pelkän yhden X,Y,Z kiihtyvyysanturi tiedon hyödyntäminen laitteen orientaation määrittelemiseen on melko yksinkertainen sovellus. Jos kiihtyvyysanturidataa kerätään pidemmältä aikaa voidaan kiihtyvyysanturitiedon perusteella tehdä päätelmiä myös monimutkaisemmista tapahtumista kuin vain laitteen kulloinenkin suunta. 

Keksikää sovellus, jossa voisitte hyödyntää 1 sekunnin ajalta kerättyä kiihtyvyysanturidataa luokitteluun. Tällaisia sovelluksia on jo olemassa esimerkiksi älykelloissa, jotka monitoroivat kantajansa aktiivisuutta. Kiihtyvyysanturitietoa voidaan käyttää myös moottoreissa, joista pyritään tunnistamaan laakereiden kulumista lisääntyvän tärinän seurauksena.

Ryhmännne (parin) tehtävänä on keksiä sovellus, jossa kiihtyvyysanturitietoa voidaan hyödyntää luokitteluun konvoluutioneuroverkon (tai miksei myös jonkun muun koneoppimisalgoritmin) avulla. Esitelkää sovellusideanne Karille ja miettikää millä näytetaajuudella kiihtyvyysanturidata on kerättävä teidän sovelluksessanne.

BONUS1: Voitte hyödyntää tätä sovellusideaanne kurssin liiketoiminta-osuudessa, missä teidän pitää tehdä liiketoimintasuunnitelma jollekin tuotteelle.

BONUS2: Ryhmä, joka lähtee toteuttamaan tätä vähän haasteellisempaa kiihtyvyysanturin käyttöä jatkaa Karin viikoilla 5 ja 6 tämän saman ongelman parissa viikolla 5 opetetaan CNN viikolla 2 kerätyllä datalla, viikolla 6 arvioidaan opetetun CNN:n toteutettavuutta nrf5340DK-laitteessa. Eli jos päätät lähteä tekemään Karin ylimääräisiä tehtäviä teet jokaisella Karin viikolla hommia tämän keksimäsi sovelluksen parissa.


### 2.2 Datan keruu

Toteuta ohjelma, joka kerää kiihtyvyysanturista **1 sekunnin ajan X, Y, Z -arvoja** valitsemallasi näytetaajuudella. Miksi juuri 1 sekunnin mittainen aikasarja? No siksi, että voinemme hyödyntää edellisessä periodissa opittua konvoluutioneuroverkon opetusohjelmaa helposti. Voimme muodostaa kiihtyvyysanturidatasta konvoluutioneuroverkolle X,Y,Z-kuvia tai "harmaasävykuvia" laskemalla X,Y,Z  kiihtyvyysarvoista kokonaiskiihtyvyyden ja tämän jälkeen aikatason kiihtyvyysanturidatasta voidaan muodostaa spektrogrammin avulla kaksiuloitteinen kuva konvoluutioverkon käsiteltäväksi.

### 2.3 Datan lähetys BLE:n yli

Toteuta ohjelma, joka lähettää **1 sekunnin ajalta kerätyt X, Y, Z -arvot langattomasti BLE:n yli tietokoneelle. Label tietoa sinun ei välttämättä tarvitse lähettää jos datan keräysvaiheessa keräät 1 sekunnin mittaiset kiihtyvyystiedostot samankaltaisesta ilmiöstä samaan hakemistoon ja toisenlaisen ilmiön tiedostot toiseen hakemistoon. Datasets-kirjastossa oli funktio jolla opetusdata voitiin helposti labeloida ja jakaa opetus ja validation dataan jos datat ovat tiedostoina eri hakemistoissa.

Toteuta läppärillesi Python ohjelma, jolla saat vastaanotettua 1 sekunnin mittaisen kiihtyvyysanturidatan ja talletettua datan tiedostoon. Käytä Bleak Python kirjastoa https://bleak.readthedocs.io/_/downloads/en/develop/pdf/ hyväksesi.




