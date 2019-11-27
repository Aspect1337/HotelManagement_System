# HotelManagement_System
A console-based interpreter for booking dynamic hotel systems

# Kompilera:

Information finns i Cmake.txt men i övrigt så används preferellt C-lion men det ska gå i text editor + terminal med följande (otestat) kommando:

gcc –o hotel main.cpp menu.cpp menu.h createAccount.cpp createAccount.h LoginScreen.cpp LoginScreen.h Navigation.cpp Navigation.h


Flowchart:

https://imgur.com/I1g27HH


Todo:

Enklare:

- Göra en event handler som hanterar koden som i nuvarande befinner sig i main
- log-in system som läser in accounts.txt och jämför inputten och ser ifall det är rätt uppgifter
- faktorera och organisera kod, exempelvis lägga alla .cpp och .h filer i en "src" mapp
- vad flowcharten säger behövs


Svårare:

- Krypteringssystem som krypterar användar-uppgifter vid registrering & inloggning från en säkerhetssperspektiv
- Dynamisk "rum-skapare" som gör mer flexibla rum som förbättrar upplevelsen (flowchart för mer)
- En server som hanterar gör en instans av denna kod och fungerar på egen hand (overkill)
