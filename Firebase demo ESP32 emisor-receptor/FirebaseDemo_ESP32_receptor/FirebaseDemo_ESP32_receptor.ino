//
// Copyright 2015 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

// FirebaseDemo_ESP32 is a sample that demo the different functions
// of the FirebaseArduino API.

#include <WiFi.h>
#include <IOXhop_FirebaseESP32.h>

// Set these to run example.
#define FIREBASE_HOST "example.firebaseio.com"
#define FIREBASE_AUTH "token_or_secret"
#define WIFI_SSID "SSID"
#define WIFI_PASSWORD "PASSWORD"

void setup() {
  Serial.begin(9600);

  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);        // Nos conectamos a nuestro modem o red wifi 
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);  //Iniciamos la comunicacion con firebase 
}

int n = 0;

void loop() { // Solo descomentamos la parte que vallamos a usar 
  
  // get value 
 /* Serial.print("number: ");                       // Obtenemos el valor flotante de firebase 
  Serial.println(Firebase.getFloat("number"));      // imprimimos en el monitor serie el flotante de firebase
  delay(1000);

  // remove value float
  Firebase.remove("number");
  delay(1000);*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // get value 
/*  Serial.print("number: ");                        // Obtenemos el valor entero de firebase 
  Serial.println(Firebase.getInt("number"));        // imprimimos en el monitor serie el entero de firebase
  delay(1000);

  // remove value int
  Firebase.remove("number");
  delay(1000);*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // get value 
/*  Serial.print("message: ");                        // Obtenemos el texto o mensaje de firebase  
  Serial.println(Firebase.getString("message"));      // imprimimos en el monitor serie el texto de firebase
  delay(1000);

  // remove text
  Firebase.remove("message");
  delay(1000);*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// si quieremos solo obtener el valor entero, flotante o el texto usaremos solamente 
  /*
  Firebase.getString("message");
  Firebase.getFloat("number");
  Firebase.getInt("number");
   */ 

  // Si quieremos usar el valor entero, flotante o el texto usaremos la sentencia "if" entre muchos otros. 
/*
 if (Firebase.getString("message")=="XXXX")   // para comparar un texto 
 {
   // si el texto en firebase es igual ejecutamos esta linea de codigo
 }
 else 
 {
   // sino ejecutamos esta otra linea de codigo 
 }
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 if(Firebase.getFloat("number")<= numero en flotante)   // para comparar con un flotante
 {
   // si el numero flotante en firebase es menor o igual a numero flotante ejecutamos esta linea de codigo 
 }
 else 
 {
   // sino ejecutamos esta otra linea de codigo 
 }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 if (Firebase.getInt("number") <= numero entero) //para comparar con un entero
 {
   // si el numero entero en firebase es igual a numero entero ejecutamos esta linea de codigo 
 }
 else
 {
  // sino ejecutamos esta otra linea de codigo
 }
  */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
} // fin de loop 
