; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc -mtriple=aarch64-linux-gnu -mattr=+sve < %s 2>%t | FileCheck %s
; RUN: FileCheck --check-prefix=WARN --allow-empty %s <%t

; WARN-NOT: warning

; For all the functions below should the operation is a nop
define <vscale x 8 x i8> @trunc_i16toi8(<vscale x 8 x i16> %in) {
; CHECK-LABEL: trunc_i16toi8:
; CHECK:       // %bb.0: // %entry
; CHECK-NEXT:    ret
entry:
  %out = trunc <vscale x 8 x i16> %in to <vscale x 8 x i8>
  ret <vscale x 8 x i8> %out
}

define <vscale x 4 x i8> @trunc_i32toi8(<vscale x 4 x i32> %in) {
; CHECK-LABEL: trunc_i32toi8:
; CHECK:       // %bb.0: // %entry
; CHECK-NEXT:    ret
entry:
  %out = trunc <vscale x 4 x i32> %in to <vscale x 4 x i8>
  ret <vscale x 4 x i8> %out
}

define <vscale x 2 x i8> @trunc_i64toi8(<vscale x 2 x i64> %in) {
; CHECK-LABEL: trunc_i64toi8:
; CHECK:       // %bb.0: // %entry
; CHECK-NEXT:    ret
entry:
  %out = trunc <vscale x 2 x i64> %in to <vscale x 2 x i8>
  ret <vscale x 2 x i8> %out
}

define <vscale x 4 x i16> @trunc_i32toi16(<vscale x 4 x i32> %in) {
; CHECK-LABEL: trunc_i32toi16:
; CHECK:       // %bb.0: // %entry
; CHECK-NEXT:    ret
entry:
  %out = trunc <vscale x 4 x i32> %in to <vscale x 4 x i16>
  ret <vscale x 4 x i16> %out
}

define <vscale x 2 x i16> @trunc_i64toi16(<vscale x 2 x i64> %in) {
; CHECK-LABEL: trunc_i64toi16:
; CHECK:       // %bb.0: // %entry
; CHECK-NEXT:    ret
entry:
  %out = trunc <vscale x 2 x i64> %in to <vscale x 2 x i16>
  ret <vscale x 2 x i16> %out
}

define <vscale x 2 x i32> @trunc_i64toi32(<vscale x 2 x i64> %in) {
; CHECK-LABEL: trunc_i64toi32:
; CHECK:       // %bb.0: // %entry
; CHECK-NEXT:    ret
entry:
  %out = trunc <vscale x 2 x i64> %in to <vscale x 2 x i32>
  ret <vscale x 2 x i32> %out
}
