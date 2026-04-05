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
Windows :  


Linux :  


Mac :  

  
## Premake
Windows :  


Linux :  


Mac :  

  
## Ninja
Windows :  


Linux :  


Mac :  

  
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