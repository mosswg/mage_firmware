#pragma once
#include <tusb.h>

namespace mage_config {
	inline const uint8_t KEY_RAISE = 0xa5;
	inline const uint8_t KEY_LOWER = 0xa6;

	inline const uint8_t plank_keys_column_0[12] =
	{HID_KEY_ARROW_UP, HID_KEY_ARROW_LEFT, HID_KEY_ARROW_RIGHT, HID_KEY_ARROW_DOWN,
	HID_KEY_ARROW_UP, HID_KEY_ARROW_LEFT, HID_KEY_ARROW_RIGHT, HID_KEY_ARROW_DOWN,
	HID_KEY_ARROW_UP, HID_KEY_ARROW_LEFT, HID_KEY_ARROW_RIGHT, HID_KEY_ARROW_DOWN};

	inline const uint8_t plank_keys_column_1[12] =
	{HID_KEY_GRAVE, HID_KEY_SPACE, HID_KEY_CONTROL_LEFT, HID_KEY_SHIFT_LEFT,
	HID_KEY_ESCAPE, HID_KEY_TAB, HID_KEY_CONTROL_LEFT, HID_KEY_SHIFT_LEFT,
	HID_KEY_GRAVE, HID_KEY_SPACE, HID_KEY_CONTROL_LEFT, HID_KEY_SHIFT_LEFT};

	inline const uint8_t plank_keys_column_2[12] =
	{HID_KEY_NONE, HID_KEY_F1, HID_KEY_ESCAPE, HID_KEY_NONE,
	HID_KEY_1, HID_KEY_Q, HID_KEY_A, HID_KEY_Z,
	HID_KEY_F1, HID_KEY_1, HID_KEY_EQUAL, HID_KEY_SEMICOLON};

	inline const uint8_t plank_keys_column_3[12] =
	{HID_KEY_NONE, HID_KEY_F2, HID_KEY_NONE, HID_KEY_NONE,
	HID_KEY_2, HID_KEY_W, HID_KEY_S, HID_KEY_X,
	HID_KEY_F2, HID_KEY_2, HID_KEY_NONE, HID_KEY_NONE};

	inline const uint8_t plank_keys_column_4[12] =
	{HID_KEY_NONE, HID_KEY_F3, HID_KEY_NONE, HID_KEY_NONE,
	HID_KEY_3, HID_KEY_E, HID_KEY_D, HID_KEY_C,
	HID_KEY_F3, HID_KEY_3, HID_KEY_NONE, HID_KEY_NONE};

	inline const uint8_t plank_keys_column_5[12] =
	{HID_KEY_NONE, HID_KEY_F4, HID_KEY_NONE, HID_KEY_NONE,
	HID_KEY_4, HID_KEY_R, HID_KEY_F, HID_KEY_V,
	HID_KEY_F4, HID_KEY_4, HID_KEY_NONE, HID_KEY_NONE};

	inline const uint8_t plank_keys_column_6[12] =
	{HID_KEY_NONE, HID_KEY_F5, HID_KEY_NONE, HID_KEY_NONE,
	HID_KEY_5, HID_KEY_T, HID_KEY_G, HID_KEY_B,
	HID_KEY_F5, HID_KEY_5, HID_KEY_NONE, HID_KEY_NONE};

	inline const uint8_t plank_keys_column_7[12] =
	{HID_KEY_NONE, HID_KEY_F6, HID_KEY_BACKSPACE, HID_KEY_NONE,
	HID_KEY_6, HID_KEY_Y, HID_KEY_H, HID_KEY_N,
	HID_KEY_F6, HID_KEY_6, HID_KEY_NONE, HID_KEY_NONE};

	inline const uint8_t plank_keys_column_8[12] =
	{HID_KEY_NONE, HID_KEY_F7, HID_KEY_ARROW_LEFT, HID_KEY_NONE,
	HID_KEY_7, HID_KEY_U, HID_KEY_J, HID_KEY_M,
	HID_KEY_F7, HID_KEY_7, HID_KEY_NONE, HID_KEY_NONE};

	inline const uint8_t plank_keys_column_9[12] =
	{HID_KEY_NONE, HID_KEY_F8, HID_KEY_ARROW_UP, HID_KEY_NONE,
	HID_KEY_8, HID_KEY_I, HID_KEY_K, HID_KEY_COMMA,
	HID_KEY_F8, HID_KEY_8, HID_KEY_NONE, HID_KEY_NONE};

	inline const uint8_t plank_keys_column_10[12] =
	{HID_KEY_NONE, HID_KEY_F9, HID_KEY_ARROW_DOWN, HID_KEY_NONE,
	HID_KEY_9, HID_KEY_O, HID_KEY_L, HID_KEY_PERIOD,
	HID_KEY_F9, HID_KEY_9, HID_KEY_NONE, HID_KEY_NONE};

	inline const uint8_t plank_keys_column_11[12] =
	{HID_KEY_NONE, HID_KEY_F10, HID_KEY_ARROW_RIGHT, HID_KEY_NONE,
	HID_KEY_0, HID_KEY_P, HID_KEY_SEMICOLON, HID_KEY_SLASH,
	HID_KEY_F10, HID_KEY_0, HID_KEY_NONE, HID_KEY_NONE};

	inline const uint8_t plank_keys_column_12[12] =
	{HID_KEY_NONE, HID_KEY_F11, HID_KEY_NONE, HID_KEY_NONE,
	HID_KEY_BRACKET_RIGHT, HID_KEY_BRACKET_LEFT, HID_KEY_APOSTROPHE, HID_KEY_MINUS,
	HID_KEY_BRACKET_LEFT, HID_KEY_BRACKET_RIGHT, HID_KEY_NONE, HID_KEY_EQUAL};

	inline const uint8_t plank_keys_column_13[12] =
	{HID_KEY_GRAVE, HID_KEY_F12, HID_KEY_TAB, HID_KEY_SHIFT_RIGHT,
	HID_KEY_ESCAPE, HID_KEY_DELETE, HID_KEY_TAB, HID_KEY_SHIFT_RIGHT,
	HID_KEY_ESCAPE, HID_KEY_DELETE, HID_KEY_TAB, HID_KEY_SHIFT_RIGHT};


	inline const uint8_t* plank_keys[14] = {plank_keys_column_0, plank_keys_column_1, plank_keys_column_2, plank_keys_column_3, plank_keys_column_4, plank_keys_column_5, plank_keys_column_6, plank_keys_column_7, plank_keys_column_8, plank_keys_column_9, plank_keys_column_10, plank_keys_column_11, plank_keys_column_12, plank_keys_column_13};

	inline const uint8_t control_group_keys[2][4] = {{mage_config::KEY_RAISE, HID_KEY_GUI_LEFT, HID_KEY_CONTROL_LEFT, HID_KEY_SPACE}, {mage_config::KEY_LOWER, HID_KEY_BACKSPACE, HID_KEY_CONTROL_RIGHT, HID_KEY_ENTER}};
}
