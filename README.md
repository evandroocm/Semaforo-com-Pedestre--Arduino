# Sistema de Semáforo com Arduino 🚦

<img src = "https://github.com/evandroocm/Semaforo-com-Pedestre--Arduino/blob/main/semaforo-arduino.png" alt = "">

Este projeto simula o funcionamento de um sistema de semáforos para veículos e pedestres utilizando o Arduino. É ideal para fins didáticos, estudos de lógica de programação e prototipagem de sistemas embarcados.

## 🔧 Componentes Utilizados

- 1 Arduino (Uno, Mega ou similar)
- 10 LEDs (5 para cada via: 3 para carros, 2 para pedestres)
- Resistores (220Ω)
- Jumpers
- Protoboard

## 💡 Lógica de Funcionamento

O sistema controla dois cruzamentos com semáforos para veículos e pedestres (Via A e Via B). A lógica segue a seguinte ordem:

1. Libera a passagem de veículos na Via A e pedestres na Via B.
2. Intervalo de segurança com LED amarelo.
3. Libera a passagem de veículos na Via B e pedestres na Via A.
4. Outro intervalo de segurança.

Os tempos são definidos em segundos dentro da função `leds()`.

## 📁 Estrutura do Código

- **Variáveis com `const int`** para facilitar identificação dos pinos.
- **Função `leds()`** recebe os estados dos LEDs e o tempo que devem permanecer ativos.
- O `loop()` executa a lógica de forma cíclica.

## 🔌 Esquemático (Resumo dos LEDs)

### Via A
- 🔴 `vermelhoCarroA` — pino 13  
- 🟡 `amareloCarroA` — pino 12  
- 🟢 `verdeCarroA` — pino 11  
- 🟢 `verdePedestreA` — pino 10  
- 🔴 `vermelhoPedestreA` — pino 9  

### Via B
- 🔴 `vermelhoCarroB` — pino 8  
- 🟡 `amareloCarroB` — pino 7  
- 🟢 `verdeCarroB` — pino 6  
- 🟢 `verdePedestreB` — pino 5  
- 🔴 `vermelhoPedestreB` — pino 4  

## 🚀 Como Usar

1. Faça upload do código no seu Arduino.
2. Monte o circuito conforme os pinos indicados.
3. O sistema começará a simular automaticamente os ciclos de semáforo.



Projeto com fins educacionais. ✨
