#coffee

coffee is a CLI (command line interface) for RFC2324.

## What is RFC2324?
[RFC2324](http://www.ietf.org/rfc/rfc2324.txt) is a facetious communications protocol for controlling a coffee pot. It's also called the [Hyper Text Coffe Pot Control Protocol](http://en.wikipedia.org/wiki/Hyper_Text_Coffee_Pot_Control_Protocol) (HTCPCP).

## What can coffee do?
coffee puts you in control of any compatible coffee pot/machine. Our first version will unfortunately only be able to control a modified version of Philips' [Senseo](http://www.amazon.de/Philips-60-Kaffeepadmaschine-Senseo-schwarz/dp/B0000BY5H0) coffee machine. But we hope will will get some more machines integrated too.

## I want to use it.
You can wait for a stable release (which will surely take a while) or just clone the repo and compile it. Also you can help by filing bugs and give us ideas for new features (but no GUI stuff!!). Or you can just submit some code. Any help is appreciated.

## Syntax
The Syntax we will use is very specific for the Senseo Machine. It will propably look something like this:

```
$ coffee [--single | --double]
```

This will brew either a single cup, or a double cup. Since the machine we are using doesn't offer the possibility to add milk or something, we won't implement this right now. (Again, you can contribute at will.)

### Future
In the future (when there are more machines supported), we will have to change the syntax to something like this:

```
$ coffee --{machinealias} [--single | --double] [--milk]
```
