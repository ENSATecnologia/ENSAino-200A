//*******************************************************************************************
// Arquivo C/C++ do Projeto ENSAIoT -- ENSA Tecnologia
//-------------------------------------------------------------------------------------------
// Arquivo  : iotENSAv5.6.ino
// Inicio   : 29/04/2013 10:23
// Revisão  : 11/05/2016 18:31
//
// AutorI   : Jânio Anselmo, Eng. Me.
// AutorII  : Thiago Anselmo, Tecgº.
// CPU:     : ATMega328P-AU (Arduino Nano) or ATMega2560/2561 (Arduino Mega)
// Clock:   : 16MHz
// Inicio   : 04/10/2017 14:21
// Revisão  : 04/10/2017 14:21
//
//*******************************************************************************************

// ------------------------------------------------------------------------------------------
// DEFINIÇÕESS DOS PINOS DO MICROCONTROLADOR - ATMEGA 2561 - ANALÓGICAS OCUPADAS
// ------------------------------------------------------------------------------------------

#define PINO_TECLADO              0        // Pino onde o KeyPad estão conectado - A0
#define PINO_TERMISTOR1           1        // Pino onde o Termistor NTC 10k deve ser conectado - A1
#define PINO_TERMISTOR2           2        // Pino onde o Termistor NTC 10k deve ser conectado - A2

// ------------------------------------------------------------------------------------------
// DEFINIÇÕESS DOS PINOS DO MICROCONTROLADOR - ATMEGA 2561 - DIGITAIS OCUPADAS
// ------------------------------------------------------------------------------------------

// PINOS 0 E 1 (SERIAL0)                   // Pino da interface SERIAL 0

#define PINO_SENSOR_SE            2        // Pino entrada do sensor SE
#define PINO_SENSOR_SS            3        // Pino entrada do sensor SS

#define WIEGAND_0D0               4        // Pino Wiegand - D0 - Library\Wiegand\Wiegand.cpp - INT4
#define WIEGAND_0D1               5        // Pino Wiegand - D1 - Library\Wiegand\Wiegand.cpp - INT5
#define WIEGAND_1D0               6        // Chave Magnética - INTERRUPÇÂO by Software - pcint.h
#define WIEGAND_1D1               7        // Botão - INTERRUPÇÂO by Software - pcint.h

// PINOS 8 AO 11 ENC28J60                  // Pinos do ETH0/ENC28J60

#define PINO_FLUXO                12       // Pino Sensor Fluxo - INTERRUPÇÂO/PCINT4

// PINO 13 LED MEGACORE                    // lED do package MegaCore
// PINO 14 RS-485                          // EN da interface RS-485

#define PINO_BUZZER               15       // Pino do BUZZER/BEEP - Pin27 (ENSAController) ou Pin4 EZBrewControll
#define PINO_RESET                16       // Pino de RESET/INTERFACE
#define PINO_VIDRO                17       // Pino de RESET/INTERFACE

// PINOS 18 E 19 (I2C)                     // Pino da interface I2C
// PINOS 20 E 21 (SERIAL1)                 // Pino da interface SERIAL 1 

#define PINO_BUTTON               22       // Botão - INTERRUPÇÂO by Software - pcint.h
#define PINO_MAGNETIC             23       // Chave Magnética - INTERRUPÇÂO by Software - pcint.h

#define LED_AMARELO1              24       // Pino do LED AMARELO - HIGH -> ACENDE, LOW -> DESLIGA
#define LED_VERMELHO1             25       // Pino do LED VERMELHO 1 - HIGH -> ACENDE, LOW -> DESLIGA
#define LED_AMARELO2              26       // Pino do LED VERMELHO 2 - HIGH -> ACENDE, LOW -> DESLIGA

// PINOS LCD 27 AO 32                      // Pinos do display LCD

#define SOFT_CS_PIN               33       // Pino do SDCARD - EXTERNAL SHIELD
#define SOFT_MISO_PIN             34       // Pino saída do sensor MISO
#define SOFT_MOSI_PIN             35       // Pino saída do sensor MOSI
#define SOFT_SCK_PIN              36       // Pino saída do sensor SCK

#define PINO_RELAY_BOT            37       // Pino Relé - LOW -> DESLIGA, HIGH -> ACENDE
#define PINO_RELAY_FOT            38       // Pino Relé - LOW -> DESLIGA, HIGH -> ACENDE
#define PINO_RELAY_OPEN           39       // Pino Relé - LOW -> DESLIGA, HIGH -> ACENDE
#define PINO_RELAY_CLOSE          40       // Pino Relé - LOW -> DESLIGA, HIGH -> ACENDE
#define PINO_RELAY_MAGNETIC       41       // Pino Relé - LOW -> DESLIGA, HIGH -> ACENDE

// ------------------------------------------------------------------------------------------
// DEFINIÇÕESS DOS PINOS DO MICROCONTROLADOR - ATMEGA 2561 - DIGITAIS LIVRES
// ------------------------------------------------------------------------------------------

DIGITAL PORT D42
DIGITAL PORT D43
DIGITAL PORT D44
DIGITAL PORT D53

// ------------------------------------------------------------------------------------------
// DEFINIÇÕESS DOS PINOS DO MICROCONTROLADOR - ATMEGA 2561 - ANALÓGICAS LIVRES
// ------------------------------------------------------------------------------------------

DIGITAL PORT D48/A3
DIGITAL PORT D49/A4
DIGITAL PORT D50/A5
DIGITAL PORT D51/A6
DIGITAL PORT D52/A7

// =================================================================================( * FIM * )
// =======================================================================( * FIM * )
// =============================================================( * FIM * )
// ===================================================( * FIM * )
// =========================================( * FIM * )
// ===============================( * FIM * )
// =====================( * FIM * )
// ===========( * FIM * )
// =( * FIM * )

// =================================================================================( * FIM * )
// =======================================================================( * FIM * )
// =============================================================( * FIM * )
// ===================================================( * FIM * )
// =========================================( * FIM * )
// ===============================( * FIM * )
// =====================( * FIM * )
// ===========( * FIM * )
// =( * FIM * )