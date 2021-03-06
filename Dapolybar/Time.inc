[Variables]
Time_X =1664
;Left, Right or Middle
Time_Anchor = Left

[Metadata]
Name=Papirus\\Time
Author=reddit.com/u/khanhas
Description=Display time.

[TimeAnchor]
Measure=String
String = #Time_Anchor#
IfMatch = Center|center|Middle|middle
IfMatchAction = [!SetOption Time StringAlign CenterCenter]
IfMatch2 = Right|right
IfMatchAction2 = [!SetOption Time StringAlign RightCenter]

[MeasureTime]
Measure=Time
Format=%I:%M:%S

[TimeShape]
Meter=Shape
X=(#Bar_OffsetX#+#Time_X#)
Y=(#Bar_OffsetY#+#Bar_Height#/2-#Section_Height#/2)
Shape =Rectangle -10,0,([Time:W]+50),#Section_Height#,5 | StrokeWidth 0 | Fill Color #Color_Scheme3#
Shape2=Rectangle 0,#Section_Height#,[Time:W],-3,1.5 | StrokeWidth 0 | Fill Color #Color_Scheme3#
DynamicVariables=1

[TimeIcon]
Meter=String
Text=
FontFace=Material Icons
FontSize=(#Font_Size#*16/13)
FontColor=#Color_Scheme2#
AntiAlias=1
StringAlign=LeftCenter
X=(#Bar_OffsetX#+#Time_X#)
Y=(#Bar_OffsetY#+#Bar_Height#/2)
DynamicVariables=1


[Time]
Meter=String
MeasureName=MeasureTime
FontFace=#Font_Face2#
FontSize=#Font_Size#
FontColor=#Color_Scheme2#
AntiAlias=1
StringAlign=LeftCenter
X=5R
Y=(#Bar_OffsetY#+#Bar_Height#/2)
LeftMouseUpAction=[explorer.exe shell:appsFolder\Microsoft.WindowsAlarms_8wekyb3d8bbwe!App]
DynamicVariables=1
