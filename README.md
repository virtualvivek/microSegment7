<h2 align="center"> <img src="preview/app_title.png" width="340" /> </h2>
<p align="center">

<p align="center">
	<a href="https://www.google.com/search?q=web">
    <img src="https://img.shields.io/badge/Platform-Embedded-red.svg?style=flat-square&color=red&logo=RobotFramework&logoColor=ffffff"
      alt="Embedded" />
  </a>

	
  <a href="https://github.com/virtualvivek/microSegment7">
    <img src="https://img.shields.io/github/languages/code-size/vivekverma007/microSegment7.svg?style=flat-square&color=blue&label=CodeSize&logo=HackTheBox&logoColor=ffffff"
      alt="Code Size" />
  </a>
  
<a href="https://github.com/vivekverma007/microSegment7/blob/master/LICENSE">
    <img src="https://img.shields.io/github/license/vivekverma007/microSegment7.svg?style=flat-square&color=00C244&logo=PyTorchLightning"
      alt="License: MIT" />
  </a>
  
<a href="https://github.com/virtualvivek/microSegment7">
    <img src="https://img.shields.io/badge/Release-v1.1-419466.svg?style=flat-square&logo=git&logoColor=ffffff"
      alt="Release" />
  </a>
  
 
</p>

</p>

<p align="center">This library provides modules for <code>7-segment display</code> using <b>8051 microcontroller</b> to perform number counters, system callbacks, general responses, display patterns, available code for both common cathode and common anode.
</p>

<h5></h5>

# Importing the module

## for common-cathode
```c
#include<microSegment7/commonCathode/response.c>
```

## for common-anode
```c
#include<microSegment7/commonAnode/response.c>
```
# Documentation for `Responses`

| Response Name                        | Function                    | Displays Result                                       | 
| :------------------------------------ | :-------------------------- | :----------------------------------------------------------- |
| Hellow | <pre>say_hellow();</pre> | <img src="preview/say_hellow.PNG" height="40" /> | 
| Echo | <pre>say_echo();</pre> | <img src="preview/say_echo.PNG" height="40" /> |
| On | <pre>say_on();</pre> | <img src="preview/say_on.PNG" height="40" /> |
| Off | <pre>say_Off();</pre> | <img src="preview/say_off.PNG" height="40" /> |
| Start | <pre>say_start();</pre> | <img src="preview/say_start.PNG" height="40" /> |
| End | <pre>say_end();</pre> | <img src="preview/say_end.PNG" height="40" /> |
| Pause | <pre>say_pause();</pre> | <img src="preview/say_pause.PNG" height="40" /> |
| Go | <pre>say_go();</pre> | <img src="preview/say_go.PNG" height="40" /> |
| Up | <pre>say_up();</pre> | <img src="preview/say_up.PNG" height="40" /> |
| Loop | <pre>say_loop();</pre> | <img src="preview/say_loop.PNG" height="40" /> |


# License

microSegment7 is licensed under `MIT license`. View [license](https://github.com/virtualvivek/microSegment7/blob/master/LICENSE).<br>
Copyright (c) 2019-21 [**Vivek Verma**](https://github.com/virtualvivek)
