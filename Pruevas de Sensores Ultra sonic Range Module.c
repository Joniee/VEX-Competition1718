#pragma config(Sensor, port5, dgt5,               sensorVexIQ_Distance)
#pragma config(Sensor, port6,  dgt6,               sensorVexIQ_Distance)
#pragma config(Sensor, port11, xAccel,               sensorVexIQ_Gyro)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1){
		writeDebugStream("%d", SensorValue(dgt5));
		wait10Msec(20);
		clearDebugStream();

	}
}
