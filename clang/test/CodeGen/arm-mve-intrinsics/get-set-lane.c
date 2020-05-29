// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// RUN: %clang_cc1 -triple thumbv8.1m.main-none-none-eabi -target-feature +mve.fp -mfloat-abi hard -fallow-half-arguments-and-returns -O0 -disable-O0-optnone -S -emit-llvm -o - %s | opt -S -mem2reg -sroa -early-cse | FileCheck %s
// RUN: %clang_cc1 -triple thumbv8.1m.main-none-none-eabi -target-feature +mve.fp -mfloat-abi hard -fallow-half-arguments-and-returns -O0 -disable-O0-optnone -DPOLYMORPHIC -S -emit-llvm -o - %s | opt -S -mem2reg -sroa -early-cse | FileCheck %s

#include <arm_mve.h>

// CHECK-LABEL: @test_vgetq_lane_f16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = extractelement <8 x half> [[A:%.*]], i32 2
// CHECK-NEXT:    [[TMP1:%.*]] = bitcast half [[TMP0]] to i16
// CHECK-NEXT:    [[TMP_0_INSERT_EXT:%.*]] = zext i16 [[TMP1]] to i32
// CHECK-NEXT:    [[TMP2:%.*]] = bitcast i32 [[TMP_0_INSERT_EXT]] to float
// CHECK-NEXT:    ret float [[TMP2]]
//
float16_t test_vgetq_lane_f16(float16x8_t a)
{
#ifdef POLYMORPHIC
    return vgetq_lane(a, 2);
#else /* POLYMORPHIC */
    return vgetq_lane_f16(a, 2);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vgetq_lane_f32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = extractelement <4 x float> [[A:%.*]], i32 3
// CHECK-NEXT:    ret float [[TMP0]]
//
float32_t test_vgetq_lane_f32(float32x4_t a)
{
#ifdef POLYMORPHIC
    return vgetq_lane(a, 3);
#else /* POLYMORPHIC */
    return vgetq_lane_f32(a, 3);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vgetq_lane_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = extractelement <8 x i16> [[A:%.*]], i32 4
// CHECK-NEXT:    ret i16 [[TMP0]]
//
int16_t test_vgetq_lane_s16(int16x8_t a)
{
#ifdef POLYMORPHIC
    return vgetq_lane(a, 4);
#else /* POLYMORPHIC */
    return vgetq_lane_s16(a, 4);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vgetq_lane_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = extractelement <4 x i32> [[A:%.*]], i32 0
// CHECK-NEXT:    ret i32 [[TMP0]]
//
int32_t test_vgetq_lane_s32(int32x4_t a)
{
#ifdef POLYMORPHIC
    return vgetq_lane(a, 0);
#else /* POLYMORPHIC */
    return vgetq_lane_s32(a, 0);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vgetq_lane_s64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = extractelement <2 x i64> [[A:%.*]], i32 0
// CHECK-NEXT:    ret i64 [[TMP0]]
//
int64_t test_vgetq_lane_s64(int64x2_t a)
{
#ifdef POLYMORPHIC
    return vgetq_lane(a, 0);
#else /* POLYMORPHIC */
    return vgetq_lane_s64(a, 0);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vgetq_lane_s8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = extractelement <16 x i8> [[A:%.*]], i32 10
// CHECK-NEXT:    ret i8 [[TMP0]]
//
int8_t test_vgetq_lane_s8(int8x16_t a)
{
#ifdef POLYMORPHIC
    return vgetq_lane(a, 10);
#else /* POLYMORPHIC */
    return vgetq_lane_s8(a, 10);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vgetq_lane_u16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = extractelement <8 x i16> [[A:%.*]], i32 3
// CHECK-NEXT:    ret i16 [[TMP0]]
//
uint16_t test_vgetq_lane_u16(uint16x8_t a)
{
#ifdef POLYMORPHIC
    return vgetq_lane(a, 3);
#else /* POLYMORPHIC */
    return vgetq_lane_u16(a, 3);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vgetq_lane_u32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = extractelement <4 x i32> [[A:%.*]], i32 3
// CHECK-NEXT:    ret i32 [[TMP0]]
//
uint32_t test_vgetq_lane_u32(uint32x4_t a)
{
#ifdef POLYMORPHIC
    return vgetq_lane(a, 3);
#else /* POLYMORPHIC */
    return vgetq_lane_u32(a, 3);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vgetq_lane_u64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = extractelement <2 x i64> [[A:%.*]], i32 1
// CHECK-NEXT:    ret i64 [[TMP0]]
//
uint64_t test_vgetq_lane_u64(uint64x2_t a)
{
#ifdef POLYMORPHIC
    return vgetq_lane(a, 1);
#else /* POLYMORPHIC */
    return vgetq_lane_u64(a, 1);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vgetq_lane_u8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = extractelement <16 x i8> [[A:%.*]], i32 1
// CHECK-NEXT:    ret i8 [[TMP0]]
//
uint8_t test_vgetq_lane_u8(uint8x16_t a)
{
#ifdef POLYMORPHIC
    return vgetq_lane(a, 1);
#else /* POLYMORPHIC */
    return vgetq_lane_u8(a, 1);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vsetq_lane_f16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast float [[A_COERCE:%.*]] to i32
// CHECK-NEXT:    [[TMP_0_EXTRACT_TRUNC:%.*]] = trunc i32 [[TMP0]] to i16
// CHECK-NEXT:    [[TMP1:%.*]] = bitcast i16 [[TMP_0_EXTRACT_TRUNC]] to half
// CHECK-NEXT:    [[TMP2:%.*]] = insertelement <8 x half> [[B:%.*]], half [[TMP1]], i32 4
// CHECK-NEXT:    ret <8 x half> [[TMP2]]
//
float16x8_t test_vsetq_lane_f16(float16_t a, float16x8_t b)
{
#ifdef POLYMORPHIC
    return vsetq_lane(a, b, 4);
#else /* POLYMORPHIC */
    return vsetq_lane_f16(a, b, 4);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vsetq_lane_f32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <4 x float> [[B:%.*]], float [[A:%.*]], i32 2
// CHECK-NEXT:    ret <4 x float> [[TMP0]]
//
float32x4_t test_vsetq_lane_f32(float32_t a, float32x4_t b)
{
#ifdef POLYMORPHIC
    return vsetq_lane(a, b, 2);
#else /* POLYMORPHIC */
    return vsetq_lane_f32(a, b, 2);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vsetq_lane_s8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <16 x i8> [[B:%.*]], i8 [[A:%.*]], i32 12
// CHECK-NEXT:    ret <16 x i8> [[TMP0]]
//
int8x16_t test_vsetq_lane_s8(int8_t a, int8x16_t b)
{
#ifdef POLYMORPHIC
    return vsetq_lane(a, b, 12);
#else /* POLYMORPHIC */
    return vsetq_lane_s8(a, b, 12);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vsetq_lane_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <8 x i16> [[B:%.*]], i16 [[A:%.*]], i32 6
// CHECK-NEXT:    ret <8 x i16> [[TMP0]]
//
int16x8_t test_vsetq_lane_s16(int16_t a, int16x8_t b)
{
#ifdef POLYMORPHIC
    return vsetq_lane(a, b, 6);
#else /* POLYMORPHIC */
    return vsetq_lane_s16(a, b, 6);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vsetq_lane_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <4 x i32> [[B:%.*]], i32 [[A:%.*]], i32 2
// CHECK-NEXT:    ret <4 x i32> [[TMP0]]
//
int32x4_t test_vsetq_lane_s32(int32_t a, int32x4_t b)
{
#ifdef POLYMORPHIC
    return vsetq_lane(a, b, 2);
#else /* POLYMORPHIC */
    return vsetq_lane_s32(a, b, 2);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vsetq_lane_s64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <2 x i64> [[B:%.*]], i64 [[A:%.*]], i32 0
// CHECK-NEXT:    ret <2 x i64> [[TMP0]]
//
int64x2_t test_vsetq_lane_s64(int64_t a, int64x2_t b)
{
#ifdef POLYMORPHIC
    return vsetq_lane(a, b, 0);
#else /* POLYMORPHIC */
    return vsetq_lane_s64(a, b, 0);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vsetq_lane_u8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <16 x i8> [[B:%.*]], i8 [[A:%.*]], i32 2
// CHECK-NEXT:    ret <16 x i8> [[TMP0]]
//
uint8x16_t test_vsetq_lane_u8(uint8_t a, uint8x16_t b)
{
#ifdef POLYMORPHIC
    return vsetq_lane(a, b, 2);
#else /* POLYMORPHIC */
    return vsetq_lane_u8(a, b, 2);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vsetq_lane_u16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <8 x i16> [[B:%.*]], i16 [[A:%.*]], i32 7
// CHECK-NEXT:    ret <8 x i16> [[TMP0]]
//
uint16x8_t test_vsetq_lane_u16(uint16_t a, uint16x8_t b)
{
#ifdef POLYMORPHIC
    return vsetq_lane(a, b, 7);
#else /* POLYMORPHIC */
    return vsetq_lane_u16(a, b, 7);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vsetq_lane_u32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <4 x i32> [[B:%.*]], i32 [[A:%.*]], i32 0
// CHECK-NEXT:    ret <4 x i32> [[TMP0]]
//
uint32x4_t test_vsetq_lane_u32(uint32_t a, uint32x4_t b)
{
#ifdef POLYMORPHIC
    return vsetq_lane(a, b, 0);
#else /* POLYMORPHIC */
    return vsetq_lane_u32(a, b, 0);
#endif /* POLYMORPHIC */
}

// CHECK-LABEL: @test_vsetq_lane_u64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = insertelement <2 x i64> [[B:%.*]], i64 [[A:%.*]], i32 1
// CHECK-NEXT:    ret <2 x i64> [[TMP0]]
//
uint64x2_t test_vsetq_lane_u64(uint64_t a, uint64x2_t b)
{
#ifdef POLYMORPHIC
    return vsetq_lane(a, b, 1);
#else /* POLYMORPHIC */
    return vsetq_lane_u64(a, b, 1);
#endif /* POLYMORPHIC */
}
