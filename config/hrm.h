/**
 * Homerow mods
 */

#pragma once

#define ZMK_BEHAVIOR_CORE_hold_tap                                             \
  compatible = "zmk,behavior-hold-tap";                                        \
  #binding-cells = <2>

#define MAKE_HRM(name, TRIGGER_POS)                                          \
  / {                                                                          \
        behaviors {                                                                \
            name: name {                                                                   \
                ZMK_BEHAVIOR_CORE_hold_tap;                                            \
                flavor = "balanced";                                                   \
                tapping-term-ms = <225>; \
                quick-tap-ms = <175>; \
                require-prior-idle-ms = <150>; \
                bindings = <&kp>, <&kp>; \
                hold-trigger-key-positions = <TRIGGER_POS>; \
                hold-trigger-on-release; \
            }; \
        }; \
    };
