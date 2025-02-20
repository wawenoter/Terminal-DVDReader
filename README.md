# Debugging the Program on Linux

## Requirements
- Linux operating system
- GCC compiler (`gcc`)
- Bash shell

## How to Build and Run
1. Open a terminal.
2. Navigate to the folder containing the `.c` and `.h` files.
   ```bash
   cd /path/to/your/folder
   ```
3. Give execution permission to `build.sh` (only needed once).
   ```bash
   chmod +x build.sh
   ```
4. Run the script to compile and execute the program.
   ```bash
   sudo sh build.sh
   ```

## Debugging the Program
If you need to debug the compiled program, use `gdb`:
```bash
./DVDReader
```

## Notes
- This script is designed for **Linux** and may not work on Windows or macOS without modifications.
- Make sure all `.c` and `.h` files are in the same folder as `build.sh` before running the script.

Enjoy!

