# Istruzioni Git

## 1. Setup iniziale

Verifica l'installazione:

```cmd
git -v
```
>usa il comando da cmd a scuola, a casa modifica dalle impostazioni

Aggiungi Git al PATH di sistema:

```cmd
set path=%PATH%;C:\programmi\git\bin
```



---

## 2. Clonare il repository

Apri il terminale nella cartella desiderata (apri la cartella, poi doppio click sulla barra del percorso e scrivi `CMD`).

```bash
git clone <URL_repository> .
```

> Il `.` finale significa "clona QUI dentro, senza creare una cartella aggiuntiva".

Se necessario, collega manualmente il remote:

```bash
git remote add origin https://github.com/3F2526NestorovychD/Consegna_Compiti.git
```

---

## 3. Configurazione utente

```bash
git config --global user.email "nestorovych.dmytro.2023@itisgalileiroma.it" 
git config --global user.name "PC_Scolastico"   # oppure "PC_Domestico"
```

---

## 4. Salvare e caricare le modifiche

Dopo aver fatto le modifiche:

```bash
git status              # controlla lo stato dei file
git add .               # aggiungi tutti i file al tracciamento
git commit -m "tuo messaggio"
git push
```

---

## 5. Problemi di accesso / credenziali

Se il push viene rifiutato per problemi di credenziali:

1. Premi **Start**
2. Cerca **Gestione credenziali**
3. Vai su **Credenziali Windows**
4. Cerca la voce relativa a `github.com`
5. **Elimina** la credenziale e rifai il push (un attimino più sicuro), oppure modificala a mano.