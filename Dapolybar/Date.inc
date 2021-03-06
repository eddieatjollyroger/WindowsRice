[Variables]
date_x=2658
;Left, Right or Center
Date_Anchor=Center

[Metadata]
Name=Paper\\Date
Author=reddit.com/u/falconwingz
Description=Display date.

[DateAnchor]
Measure=String
String = #Date_Anchor#
IfMatch = Center|center|Middle|middle
IfMatchAction = [!SetOption Date StringAlign CenterCenter]
IfMatch2 = Right|right
IfMatchAction2 = [!SetOption Date StringAlign RightCenter]

[MeasureDate]
Measure=Time
Format=%A, %B %#d, %Y

[DateShape]
Meter=Shape
X=(#Bar_OffsetX#+#Date_X#)
Y=(#Bar_OffsetY#+#Bar_Height#/2-#Section_Height#/2)
Shape =Rectangle -25,0,([Date:W]+80),#Section_Height#,5 | StrokeWidth 0 | Fill Color #Color_Scheme5#
Shape2=Rectangle 11,#Section_Height#,([Date:W]),-3,1.5 | StrokeWidth 0 | Fill Color #Color_Scheme5#
DynamicVariables=1

[DateIcon]
Meter=String
Text=
FontFace=Material Icons
FontSize=(#Font_Size#*16/13)
FontColor=#Color_Scheme2#
AntiAlias=1
StringAlign=LeftCenter
X=(#Bar_OffsetX#+#Date_X#)
Y=(#Bar_OffsetY#+#Bar_Height#/2)
DynamicVariables=1

[Date]
Meter=String
MeasureName=MeasureDate
FontFace=#Font_Face2#
FontSize=#Font_Size#
FontColor=#Color_Scheme2#
AntiAlias=1
StringAlign=LeftCenter
X=115R
Y=r
DynamicVariables=1
