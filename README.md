# Raspberry Home System

Raspberry Home System is an application which uses SDL to draw a fullscreen 
window that shows various information.

Those informations are choosen by user in the window.json file.

Rasberry Home System is plugin based. Plugins can be added in the plugin folder.


```
{
 "name": "My Home",
 "plugins": [
    { 
       "x": 0,
       "y": 0,
       "width": 200,
       "height": 200,
       "name": "Temperature",
       "data": {
        
       }
 ]

}

```
