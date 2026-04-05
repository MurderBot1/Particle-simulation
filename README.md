___

# Particle Sim
A particle simulator written in C++

___

# Set up
1. Install GCC
2. Install Premake
3. Install Ninja
4. Clone repo
5. Run ``` premake5 ninja ```
6. Run ``` ninja -C build Release ```

___

# Additional Install Info 
## GCC
### Windows
1. Go to [Msys2](https://www.msys2.org/)
2. Download and run the installer
3. Open ``` MSYS2 MINGW64 ```
4. Run ``` pacman -Syu ```
5. Then run ``` pacman -S mingw-w64-ucrt-x86_64-gcc ```
6. Add ``` C:\msys64\ucrt64\bin ``` to your path
7. Verify with ``` gcc --version ```

### Linux
#### Ubuntu / Debian  
1. Open a terminal and run
```
sudo apt update  
sudo apt install build-essential
```  
2. To verify run ``` gcc --version ```  

#### Fedora  
1. Open a terminal and run
```
sudo dnf install gcc gcc-c++ make  
```
2. To verify run ``` gcc --version ```

#### Arch / Manjaro  
1. Open a terminal and run
```
sudo pacman -Syu
sudo pacman -S base-devel
```
2. To verify run ``` gcc --version ```

#### OpenSUSE 
1. Open a terminal and run
```
sudo zypper install gcc gcc-c++ make  
```
2. To verify run ``` gcc --version ```

### Mac
1. Install Homebrew with
```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"  
```
2. Install GCC with ``` brew install gcc  ```
4. To verify run ``` gcc --version ``` 

## Premake
1. Go to [premake](https://premake.github.io/download)
2. Download the premake prebuilt binaries
3. Extract the installed zip
4. Move the premake binary to desired location
5. Add that to path

## Ninja
1. Go to [ninja](https://github.com/ninja-build/ninja/releases)
2. Download the ninja zip for your OS
3. Extract the ninja zip
4. Move the ninja binary to desired location
5. Add that to path

___

# Additional Setup For IDEs
Instructions for setting up this project for your IDE

## Visual Studio Code
Setup Instructions : 
1. Go to the settings cog in the bottom left corner
2. Go to the workspace tab
3. Search for ``` Include path ```
4. In ``` C_Cpp › Default: Include Path ``` click ``` Add Item ```
5. Add ``` ${workspaceFolder}/include/** ``` and ``` ${workspaceFolder}/src/** ```
6. Go back to the explorer
7. Click the add file button and create ``` .vscode/tasks.json  ```
8. Copy this into that file and click save : 
```
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "premake",
            "type": "shell",
            "command": "premake5",
            "args": ["ninja"],
            "problemMatcher": []
        },
        {
            "label": "ninja-release",
            "type": "shell",
            "command": "ninja",
            "args": ["-C", "build", "Release"],
            "problemMatcher": []
        },
        {
            "label": "run-release",
            "type": "shell",
            "command": "${workspaceFolder}/bin/Release/ParticleSim.exe",
            "problemMatcher": []
        },
        {
            "label": "build-and-run",
            "dependsOn": [
                "premake",
                "ninja-release",
                "run-release"
            ],
            "dependsOrder": "sequence",
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
```

Additional Info : 
 - To build you can now do ``` ctrl + shift + B ```

___