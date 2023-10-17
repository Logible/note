#NoEnv  ; Recommended for performance and compatibility with future AutoHotkey releases.
; #Warn  ; Enable warnings to assist with detecting common errors.
SendMode Input  ; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%  ; Ensures a consistent starting directory.

^+r::
SendRaw, <code style="color:#ea4335"></code>
send {Left}
send {Left}
send {Left}
send {Left}
send {Left}
send {Left}
send {Left}
Return

^+g::
SendRaw, <image style="width:450px; background-color:#CDDEC2" src=""/>
send {Left}
send {Left}
send {Left}
Return

:*?:pur ::
SendRaw, <code style="color:#B620E0"></code>
send {Left}
send {Left}
send {Left}
send {Left}
send {Left}
send {Left}
send {Left}
Return

^+i::
SendRaw, <image style="height:300px; background-color:#CDDEC2" src=""/>
send {Left}
send {Left}
send {Left}
Return

:*?:IID  ::
SendRaw, 44512120000501391X
Return

:*?:SID  ::
SendRaw, 2112325019
Return

:*?:PWD  ::
SendRaw, cyl000327
Return

:*?:STM32  ::
SendRaw, 基于STM32的小型四旋翼无人机飞行控制系统算法研究与设计
Return

:*?:add  ::
SendRaw, 广东省潮州市潮安区东凤镇东一村东阳路中段30号老表车行
Return

:*?:bid  ::
SendRaw, 6217003320102788414
Return

:*?:Phone  ::
SendRaw, 19854820769
Return

:*?:vvp  ::
SendRaw, 18926137014
Return

:*?:QQ  ::
SendRaw, 512601030
Return

:*?:email  ::
SendRaw, 512601030@qq.com
Return

:*?:add  ::
SendRaw, 广东省潮州市潮安区东凤镇东阳路中段30号老表摩托车行
Return

:*?:sdd  ::
SendRaw,  广东省广州市天河区石牌街道龙口西路576号广东技术师范大学西校区
Return

^+s::
SendRaw, ⭐
Return

^+h::
SendRaw, 💚
Return

^+b::
SendRaw, 🏀
Return

^+m::
SendRaw, 🏅
Return

Delete:: ; 当 Delete 键被按下时
    Click ; 模拟点击鼠标左键（连续两次）
return