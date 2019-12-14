#General Build Instructions

**1)** Set WINBUILDS_ROOT environment variable to specify a target directory. If WINBUILDS_ROOT is not set it is assumed to be ".", that is, the same directory where the  .vcxproj resides. Developer packages will be created in %WINBUILDS_ROOT% according to the following schema:

`$(WINBUILDS_ROOT)build_msvc15_$(Platform)/$(Configuration)/bin/`: 
.exe , .dll, .exp, .pdb go here

`$(WINBUILDS_ROOT)build_msvc15_$(Platform)/$(Configuration)/lib/` : 
.lib go here

`$(WINBUILDS_ROOT)build_msvc15_$(Platform)/$(Configuration)/include/` : 
.h go here

**2)** Open windows\VS2017\*.sln with Visual Studio and Rebuild.

##Building Libraries
For library projects, both static and shared libraries will be produced. 
The static libraries will assume static C and C++ runtimes and the shared 
libraries will link to dynamic C and C++ runtime libraries.

Static libraries do not link to their dependendcies, shared libraies do.

Shared libraries with static runtimes and static libraries with dynamic
runtimes are normally not produced but you are welcome to add those
build options if you need them or you just feel like it.

Target naming convention:
```
<name>dll.dll - dynamic library
<name>dll.lib - import library
<name>lib.lib - static library
```

This naming schema produces names different from the original projects, but it 
is consistent, and it is believed that it is easier to use than ad-hoc names.

##Specific Build Instructions for ...