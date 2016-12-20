#ifndef _COMPUTER_H_
#define _COMPUTER_H_

class computer
{
private:
	int data1;
	int data2;
	int data3;
	int cpu;
	int disk_space;
	int network_speed;
	int connected;

public:
	//computer();
	computer(int d1 = 0, int d2 = 0, int d3 = 0, int mhz = 0, int ds = 0, int inet_speed = 0, int con = 0):
		data1(d1), data2(d2), data3(d3), cpu(mhz), disk_space(ds), network_speed(inet_speed), connected(con)
	{}
	void displaydata()
	{
		cout << "Data is: " << data1;
		cout << "Data2 is:" << data2;
		cout << "data3 is:" << data3;
		cout << "cpu:" << cpu;
		cout << "Disk space:" << disk_space;
		cout << "Network speed: " << network_speed;
	}
	void set_cpu_speed(int mhz)
	{
		cpu=mhz;
	}
	void set_diskspace(int ds)
	{
		disk_space = ds;
	}
	void set_network_speed(int inet_speed)
	{
		network_speed = inet_speed;
	}
	void set_connected(int con)
	{
		connected = con;
	}

	~computer(){ cout << "destruct";};
	bool operator==( const computer& objln );

};

#endif
