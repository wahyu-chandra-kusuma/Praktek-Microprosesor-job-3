
const int segmentPins[7] = {2, 3, 4, 5, 6, 7, 8}; 


const byte digitSegments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, 
    {0, 1, 1, 0, 0, 0, 0}, 
    {1, 1, 0, 1, 1, 0, 1}, 
    {1, 1, 1, 1, 0, 0, 1}, 
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1}, 
    {1, 0, 1, 1, 1, 1, 1}, 
    {1, 1, 1, 0, 0, 0, 0}, 
    {1, 1, 1, 1, 1, 1, 1}, 
    {1, 1, 1, 1, 0, 1, 1} 
};

void setup() {
    
    for (int i = 0; i < 7; i++) {
        pinMode(segmentPins[i], OUTPUT);
    }
}

void loop() {
    
    for (int digit = 0; digit <= 9; digit++) {
        displayDigit(digit);
        delay(1000); 
    }
}

void displayDigit(int digit) {
    
    for (int i = 0; i < 7; i++) {
        digitalWrite(segmentPins[i], LOW);
    }

    
    for (int i = 0; i < 7; i++) {
        digitalWrite(segmentPins[i], digitSegments[digit][i]);
    }
}