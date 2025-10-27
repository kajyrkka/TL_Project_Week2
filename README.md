# 🧩 TL_Project_Week2

## 🎯 Viikon perustavoite
- Siirrä kiihtyvyysanturin data (x, y, z) Bluetooth Low Energy (BLE) -yhteyden yli puhelimeen tai tietokoneeseen.  
- Suorita **Nordic Academy – Bluetooth Fundamentals** -kurssi ja esitä hyväksytty sertifikaatti ohjaavalle opettajalle.

---

## ⚙️ 0. Scrum-tiimin ohjeet

Tiimi koostuu **6 työparista**.  

### Viikon vastuullisen työparin tehtävät
- Järjestää **daily-palaverit keskiviikkoisin ja torstaisin**  
- Raportoi Scrum-tiimin **Discord-kanavalle**:
  - Ketkä olivat paikalla  
  - Kunkin työparin eteneminen  
  - Mahdolliset ongelmat  
- Järjestää **sprint review -palaverin perjantaina**  
- Julkaisee yhteenvedon Discordiin  
- Nimeää seuraavan viikon vastuullisen työparin  

### Kanban-suunnitelma
Laadi GitHubin **Kanban-tauluun** suunnitelma viikon tehtävien vaiheista ja testauksesta.

**Esimerkki:**
1. Käännä ja flashää *WorkingADCSolution* nrf5340DK-alustalle.  
2. Testaa kiihtyvyysanturi kääntämällä laitetta ja seuraa lukemia serial monitorissa.

---

## 🎥 1. Video: Viikon kokonaiskuva (ei sisällä uutta lisätavoitetta!)
👉 [Katso video YouTubessa](https://youtu.be/0WQW8uLjsSg)

---

## 🔌 2. ADC-ohjelmaan tutustuminen

1. Käännä ja flashää repositoryn mukana tuleva **WorkingADCSolution** nrf5340DK-alustalle.  
2. Tutustu koodiin sekä nappien ja LEDien toimintaan.  
3. Testaa AD-muuntimen toiminta kytkemällä **VDD** ja **GND** signaaleja alustan pinneihin ohjelman ollessa käynnissä.

| Signaali       | nrf5340DK pinni |
|----------------|-----------------|
| X-kiihtyvyys   | p0.03 |
| Y-kiihtyvyys   | p0.04 |
| Z-kiihtyvyys   | p0.05 |

🔧 Kytke kiihtyvyysanturi pinneihin ja varmista, että sarjaporttiin tulostuu järkeviä arvoja, kun anturia kääntelee.

---

## 📡 3. Datan lähettäminen BLE:n yli

1. Luo tunnukset **[Nordic Academyyn](https://academy.nordicsemi.com/)**, jos sinulla ei vielä ole niitä.  
2. Suorita **Bluetooth Low Energy Fundamentals** -kurssi, vähintään Lesson 4 (teoria + Exercises 1–2).  
3. Exercise 2:n jälkeen sinulla on ohjelma, joka lähettää *integer*-datan BLE:n yli, kun **nRF Connect** -sovellus tilaa sen.  

### 🔧 Muokkaa ohjelmaa
Lähetä yhden *integer*-arvon sijasta **neljä arvoa**:
- X, Y ja Z kiihtyvyydet  
- Suunta (0–5)

Voit toteuttaa tämän kutsumalla `my_lbs_sensor_notify()` -funktiota useita kertoja eri datalla `send_data_thread`-funktiossa.

---

## 🔄 4. ADC + BLE -integraatio

Yhdistä kohdan 2 ADC-ohjelma ja kohdan 3 BLE-ohjelma.

- Ota käyttöön **nappi 2**, jolla voit vaihtaa *suunta*-muuttujan arvoa 0 → 1 → 2 → 3 → 4 → 5 → 0...  
- Lähetä BLE:n yli (jos yhteys on tilattu) seuraavat arvot:
  - **Suunta**, **X**, **Y** ja **Z** kiihtyvyydet.

---

## 🏅 5. Sertifikaatti

Suorita **Bluetooth Low Energy Fundamentals** -kurssi loppuun ja näytä sertifikaatti ohjaavalle opettajalle.

💡 Vinkkejä:
- Voit käyttää valmiita *solution*-versioita nopeuttaaksesi työskentelyä.  
- Varmista, että:
  - olet kääntänyt ja flashännyt kaikki esimerkkikoodit,  
  - testannut ne nrf5340DK-laitteessa,  
  - suorittanut kaikki **QUIZ**-osat hyväksytysti.

---

# 🧠 Viikon 2 – Lisätehtävät (valinnaiset)

### 1️⃣ Datan keruu
Toteuta ohjelma, joka kerää kiihtyvyysanturista **1 sekunnin ajan X, Y, Z -arvoja** valitsemallasi näytetaajuudella.

### 2️⃣ Datan lähetys BLE:n yli
Toteuta ohjelma, joka lähettää **1 sekunnin ajalta kerätyt X, Y, Z -arvot ja label-tiedot** langattomasti BLE:n yli tietokoneelle.

### 3️⃣ Sovellusidea ja datan hyödyntäminen
Suunnittele, miten aiot hyödyntää kiihtyvyysanturidataa.  
Tulevina viikkoina dataa käytetään konvoluutioneuroverkon (CNN) opettamiseen, joka tunnistaa liikkeen tiloja spektrogrammikuvista.

**Esimerkki labeloinneista:**
| Label | Tila |
|--------|------|
| 0 | Laite paikallaan |
| 1 | Laite liikkeessä |
| 2 | Laite kiihtyy voimakkaasti |

Esitä sovelluksen idea ja datankeruusuunnitelma ohjaavalle opettajalle.

---

## 📋 Yhteenveto

✅ Siirrä kiihtyvyysdata BLE:n yli  
✅ Suorita BLE Fundamentals -kurssi ja esitä sertifikaatti  
✅ Harjoittele Scrum-työskentelyä ja raportointia  
✅ (Valinnaisesti) kehitä oma BLE-pohjainen data-analyysisovellus

---

**Hyvää koodausta ja tutkimusmielistä asennetta! 💪**
