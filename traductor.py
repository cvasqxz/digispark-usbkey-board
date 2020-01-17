
sketch = ''

with open('duckycode.txt') as f:
    content = f.readlines()

for line in content:
	line_split = line.split(' ')
	command = line_split[0].strip()
	argument = ' '.join(line_split[1:]).strip().replace('\n', '').replace('"', '\"')

	if command == 'DELAY':
		sketch += '\tDigiKeyboard.delay(' + argument + ');\n'
	elif command == 'ENTER':
		sketch += '\tDigiKeyboard.sendKeyStroke(KEY_ENTER);\n'
	elif command == 'GUI':
		sketch += '\tDigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_' + argument.upper() + ');\n'
	elif command == 'CTRL':
		sketch += '\tDigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_' + argument.upper() + ');\n'
	elif command == 'ALT':
		sketch += '\tDigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_' + argument.upper() + ');\n'
	elif command == 'STRING':
		sketch += '\tDigiKeyboard.print("' + argument + '");\n'
	elif command == "DOWNARROW":
		sketch += "\tfor (int i = 0; i <= 100; i++) { DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT); }\n"

print(sketch)