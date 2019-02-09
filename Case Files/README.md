## Getting the case and bottom plate

### Option 1: Generate OpenSCAD and STL models

- Navigate to the dactyl-keyboard folder in CMD
- Run `lein generate` or `lein auto generate`
- This will regenerate the `things/*.scad` files
- Use OpenSCAD to open a `.scad` file.
- When done, render the file and export as an STL file.

### Option 2: Download from Thingiverse

### The bottom plate

Generating the bottom plate is tricky as I haven't figured out a way to get the shape to cover the entire hole as well as the perimeter of the bottom. I have files made to print for the bottom, but when you make adjustments to your print the bottom plate will no longer align and if you decide to close the bottom up, it will not be flush with the perimeter of the print and may have small gaps.

## Parts

- Soldering Iron - This is up to you, I use the TS100 soldering iron
- Solder - https://www.amazon.ca/dp/B07H8Z2D7B/ref=sspa_dk_hqp_detail_aax_0?psc=1
- 24 AWG Enameled Copper Wire - https://www.amazon.ca/gp/product/B007OYG9HS/ref=oh_aui_search_asin_title?ie=UTF8&psc=1
- Fume Extractor (Optional, an argument can be made that these low budget fume extractors don't work well but I use one and I love it) - https://www.amazon.ca/Kulannder-Adjustable-Extractor-Soldering-Eliminate/dp/B077Q99PPV/ref=sr_1_5?s=hi&ie=UTF8&qid=1549728253&sr=1-5&keywords=fume+extractor
- Left and right Smaller-Dactyl case - (Thingiverse link)
- Enough switches to fill your case - https://novelkeys.xyz/collections/switches
- Digi key BOM - https://www.digikey.ca/BOM/Create/CreateSharedBom?bomId=7771467
- 2 Pro-Micros* - https://www.amazon.ca/XCSOURCE-ATMEGA32U4-Arduino-Leonardo-TE463/dp/B01F78T2FS/ref=pd_sbs_147_1?_encoding=UTF8&pd_rd_i=B01F78T2FS&pd_rd_r=956d207f-2c85-11e9-888f-47f1b1d850e8&pd_rd_w=zgpSM&pd_rd_wg=I26eJ&pf_rd_p=5dcda75b-8643-4da3-9bb1-5c0233790500&pf_rd_r=CDZFH2BKS0S5QA73JNSS&psc=1&refRID=CDZFH2BKS0S5QA73JNSS
- Wrist Prints - thingiverse link
- Kinesis Advantage Palm Pads (Optional) - https://kinesis-ergo.com/shop/advantage-palm-pads-black/

*There is a Pro-Micro on amazon that is cheaper and has prime from a brand called KEYESTUDIO, but I have had issues with entering DFU mode using QMK software for that, where as the XCSource pro-micros were able to perform without issue. This is an important factor if you decide to close up the bottom, which is instructed in this guide, because when you wish to flash the chip to make changes to your keymap, you must enter DFU mode. The only other way of doing so on KEYESTUDIO Pro-Micros is through hardware, requiring you to press the reset button on the pro-micro, or shorting the reset and ground pins.
