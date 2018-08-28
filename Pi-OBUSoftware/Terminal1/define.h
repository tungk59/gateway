#ifndef DEFINE_H
#define DEFINE_H

#define IMAGES_PATH "/home/lab411/Desktop/WSAN1/Pi-OBUSoftware/WSAN/Images/Sensor"
#define DATA_PATH "/home/lab411/Desktop/WSAN1/Pi-OBUSoftware/WSAN/dataHN.txt"
#define GPS_FILE "/home/lab411/Desktop/WSAN1/Pi-OBUSoftware/WSAN/gps.txt"
#define HISTORY_FILE "/home/lab411/Desktop/WSAN1/Pi-OBUSoftware/WSAN/history.txt"
#define LOG_FILE "/home/lab411/Desktop/WSAN1/Pi-OBUSoftware/WSAN/log.txt"
#define TIME_DETECT "/home/lab411/Desktop/WSAN1/Pi-OBUSoftware/WSAN/timeDetect.txt"

#define NOFFUNC 3
#define NOSENSOR 5

#define TAKE_TEMP_AND_HUM 0
#define TAKE_PHOTO 1
#define REQUEST_STATUS 2
#define RETASK 3

#define TRANCEIVER_PORT_DEFAULT "ttyUSB0"
#define TRANCEIVER_BAUDRATE_DEFAULT B19200
#define GPS_PORT_DEFAULT "ttyUSB1"
#define GPS_BAUDRATE_DEFAULT B9600

//define mqtt

#define hostMqtt "demo.thingsboard.io"
#define portMqtt 1883

#endif // DEFINE_H
