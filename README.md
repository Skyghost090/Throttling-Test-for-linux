# Throttling-Test-for-Linux

![Contributors](https://img.shields.io/github/contributors/skyghost090/Throttling-Test-for-linux?style=plastic)
![Forks](https://img.shields.io/github/forks/skyghost090/Throttling-Test-for-linux)
![Stars](https://img.shields.io/github/stars/skyghost090/Throttling-Test-for-linux)
![Licence](https://img.shields.io/github/license/skyghost090/Throttling-Test-for-linux)
![Issues](https://img.shields.io/github/issues/skyghost090/Throttling-Test-for-linux)

## Overview

**Throttling-Test-for-Linux** is a tool designed to monitor and stress-test the thermal performance of CPUs, GPUs, and other critical components on Linux-based systems. It provides a comprehensive suite of tools to detect, log, and analyze thermal throttling events, helping users understand how their systems handle high-temperature conditions. This application is ideal for users who want to ensure the stability and longevity of their hardware under stress.

## Use Cases

- **Gamers**: Ensure that gaming systems maintain high performance during extended gaming sessions by monitoring thermal behavior and avoiding throttling.
- **Overclockers**: Track the impact of overclocking on thermal performance to prevent overheating and hardware damage.
- **IT Professionals**: Diagnose and troubleshoot thermal issues in enterprise environments to maintain system stability and performance.
- **Developers**: Test how your software applications impact system temperatures and optimize your code to improve thermal management.

## Features

- Monitors real-time temperature data for CPU, GPU, and other critical components.
- Detects and logs thermal throttling events across different hardware components.
- Provides insights into how high-temperature conditions affect system performance.
- Easy-to-read logs for troubleshooting and optimization.
- Lightweight and efficient, with minimal resource usage.

## Installation

### Prerequisites
- A Linux-based operating system (e.g., Ubuntu, Fedora, etc.).
- Root or sudo access for installing required packages and accessing hardware sensors.
- `make` and `bash` for building and running the application.

### Steps to Install

1. Clone the repository:

   ```bash
   git clone https://github.com/yourusername/throttling-test-for-linux.git
   ```

2. Navigate to the project directory:

   ```bash
   cd throttling-test-for-linux
   ```

3. Build the application using `make`:

   ```bash
   make
   ```

## Usage

Once the application is built, you can run it by executing the provided script.

1. Run the script `ttl.sh` to start the monitoring and stress-test:

   ```bash
   ./ttl.sh
   ```

2. The script will begin logging thermal performance and any throttling events detected on the system.

3. Use the output logs to analyze the impact of thermal conditions on your system’s performance.

4. For more advanced options or configurations, refer to the documentation or script comments.

## License

This project is licensed under the BSD 3-Clause License. See the [LICENSE](LICENSE) file for more details.

## Contributing

We welcome contributions to improve this tool. If you have ideas or fixes, please follow these steps:

1. Fork the repository.
2. Create a new branch for your changes (`git checkout -b feature-name`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push your changes to your forked repository (`git push origin feature-name`).
5. Create a pull request to merge your changes.

## Support

If you encounter any issues or have questions, please open an issue in the GitHub repository. We will do our best to assist you.

## Acknowledgments

- This tool utilizes system APIs to read temperature and performance data from various hardware components.
- Thanks to the open-source community for their contributions to system monitoring tools on Linux.

---

Let me know if you need additional details or modifications for this README!
