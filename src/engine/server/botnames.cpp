#include "server.h"

// C++11-style initializer
std::vector<const char *> CServer::m_botnames = {
	"bot Unknown",
	"bot Return",
	"bot Escape",
	"bot Backspace",
	"bot Tab",
	"bot Space",
	"bot Minus",
	"bot Equals",
	"bot Leftbracket",
	"bot Rightbracket",
	"bot Backslash",
	"bot Nonushash",
	"bot Semicolon",
	"bot Apostrophe",
	"bot Grave",
	"bot Comma",
	"bot Period",
	"bot Slash",
	"bot Capslock",
	"bot Printscreen",
	"bot Scrolllock",
	"bot Pause",
	"bot Insert",
	"bot Home",
	"bot Pageup",
	"bot Delete",
	"bot End",
	"bot Pagedown",
	"bot Right",
	"bot Left",
	"bot Down",
	"bot Up",
	"bot Numlock",
	"bot Divide",
	"bot Multiply",
	"bot Minus",
	"bot Plus",
	"bot Enter",
	"bot Period",
	"bot Nonusbackslash",
	"bot Application",
	"bot Power",
	"bot Equals",
	"bot Execute",
	"bot Help",
	"bot Menu",
	"bot Select",
	"bot Stop",
	"bot Again",
	"bot Undo",
	"bot Cut",
	"bot Copy",
	"bot Paste",
	"bot Find",
	"bot Mute",
	"bot Volumeup",
	"bot Volumedown",
	"bot Comma",
	"bot Alterase",
	"bot Sysreq",
	"bot Cancel",
	"bot Clear",
	"bot Prior",
	"bot Separator",
	"bot Out",
	"bot Currencyunit",
	"bot Leftparen",
	"bot Rightparen",
	"bot Leftbrace",
	"bot Rightbrace",
	"bot Tab",
	"bot Backspace",
	"bot Xor",
	"bot Power",
	"bot Percent",
	"bot Less",
	"bot Greater",
	"bot Ampersand",
	"bot Verticalbar",
	"bot Colon",
	"bot Hash",
	"bot Space",
	"bot At",
	"bot Exclam",
	"bot Memstore",
	"bot Memrecall",
	"bot Memclear",
	"bot Memadd",
	"bot Memsubtract",
	"bot Memmultiply",
	"bot Memdivide",
	"bot Plusminus",
	"bot Clear",
	"bot Clearentry",
	"bot Binary",
	"bot Octal",
	"bot Decimal",
	"bot Hexadecimal",
	"bot Lctrl",
	"bot Lshift",
	"bot Lalt",
	"bot Lgui",
	"bot Rctrl",
	"bot Rshift",
	"bot Ralt",
	"bot Rgui",
	"bot Mode",
	"bot Audionext",
	"bot Audioprev",
	"bot Audiostop",
	"bot Audioplay",
	"bot Audiomute",
	"bot Mediaselect",
	"bot Www",
	"bot Mail",
	"bot Calculator",
	"bot Computer",
	"bot Brightnessdown",
	"bot Brightnessup",
	"bot Displayswitch",
	"bot Eject",
	"bot Sleep",
};