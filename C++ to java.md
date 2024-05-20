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
		delayMicrosecond(int 2);
	}
	public static void digitalWrite(long trigPin, String HIGH) {
		delayMicrosecend(int 10);
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
