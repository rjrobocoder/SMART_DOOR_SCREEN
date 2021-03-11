/*
Follow me on:
  facebook: https://www.facebook.com/profile.php?id=100022320392277&ref=bookmarks
  LinkedIn: https://www.linkedin.com/in/rajesh-biswas72
  Github: https://github.com/rjrobocoder
  instagram: https://www.instagram.com/errajeshbiswas/?fbclid=IwAR2SPWf72s0Kh33SGCDYRFt2Z_A_BkBhxyYAtjt4KVgTDha5T5uJ4fEnebs
  twitter: https://twitter.com/RajeshB16448330?fbclid=IwAR21qKcNR8UcS3GHdZt2ujCqXNJHxNvvKppjKhRzAz8v5w6rlqed3fvCUtA
  Pinterest: https://in.pinterest.com/rjrobocoder/?fbclid=IwAR3p66TzoyNceNYI5W04s5rr61grqYo_v8Y13_CLHc3vmqrODlpdkayAV5s
*/




char p;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 p = Serial.read();
 Serial.print(p);
 delay(300);
   switch(p)
   {
      //'a' FOR OPEN THE WINDOW SCREEN
    case 'a': digitalWrite(2,LOW);
            //digitalWrite(3,LOW);
              delay(10000);
              digitalWrite(2,HIGH);
             break;
      //'b' FOR CLOSE THE WINDOW SCREEN       
    case 'b': //digitalWrite(2,LOW);
              //digitalWrite(3,HIGH);
             break;                                       
    default: break;
                  
    }
}
