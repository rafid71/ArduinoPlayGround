### V-1
```java
public class Main {
	public static long echoPin = 13;
	public static long trigPin = 12;
	public static long duration;
	public static long distance;
	public static String LOW, HIGH;
	public static void main(String[] args) {
		digitalWrite(trigPin,LOW);
		digitalWrite(trigPin,HIGH);
		digitalWrite(trigPin,LOW);
		
	}
	public static void digitalWrite(long trigPin, String LOW) {
		delayMicrosecond( 2);
	}
	public static void digitalWrite(long trigPin, String HIGH) {
		delayMicrosecend(10);
	}
	public static void digitalWrite(long trigPin, String LOW) {
		duration = pulsin(echoPin, HIGH);
		distance = (duration / 2) / 29;
	
	if ((distance >= 200) & (distance <= 0)) {
		System.out.println("Out of range");
	} else {
		System.out.println(distance);
	}
	delay(500);
}
}
```
Errors:


1 :   '.class' expected delayMicrosecond (int 2);



2  :   '.class' expected delayMicrosecend(int 10);



2 errors
###V2
public class PMai {
public static long echoPin = 13;
	public static long trigPin = 12;
	public static long duration;
	public static long distance;
	public static String LOW, HIGH;
```Java
  public static void main(String[] args) {
pulsein(trigPin,HIGH);
  }
  public static pulsein(long trigPin,String HIGH ){
  return 0;
}
}
```
errors:
1:55 >the mathode pulsein(long,string) is undifined for the type PMai
2:57>return type for the method is missing


### V-3
```Java
public class PMai {
  public static long echoPin = 13;
  public static long trigPin=12;
  public static long duration;
  public static long distance;
  public static String LOW, HIGH;
  public static long de=500;
  public static long ss=10;
  public static long ms=2;

  public static void main(String[] args) {
    digitalWrite(trigPin, LOW);
    digitalWrite(trigPin, HIGH);
    digitalWrite(trigPin, LOW);
    pulseIn(echoPin, HIGH);
    
    delayMicrosecond(2);
    delayMicrosecond(10);
    delay(500);
  }

public static void digitalWrite(long trigPin,String LOW){
  }
  public static void delayMicrosecond(int  ms){ 
  }
  
public static void digitalWrite(long trigPin,String HIGH){
  
  
  }
  public static void delayMicrosecond(int ss){
    
  }

public static void digitalWrite(long trigPin,String LOW){
  
}
  public static long pulseIn(long echoPin, String HIGH) {
    double R = Math.random();
    long r = (long) R;
    System.out.println(r);
    return r;
  }
  public static void delay(int de){
    
  }
}

```
6 ErrorsErrors


1:Syntax error on token "class", Identifier expected



2:

Duplicate method digitalWrite(long, String) in type PMai





3:Duplicate method delayMicrosecond (int) in type PMai


4:Duplicate method digitalWrite(long, String) in type PMai



5:

Duplicate method delayMicrosecond (int) in type PMai

6:




