#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Bilinear__10mgCTextureFi
// Address: 0x12c550 - 0x12c6cc
void Bilinear__10mgCTextureFi_0x12c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Bilinear__10mgCTextureFi_0x12c550");
#endif

    ctx->pc = 0x12c550u;

    // 0x12c550: 0x90860040  lbu         $a2, 0x40($a0)
    ctx->pc = 0x12c550u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12c554: 0x61efc  dsll32      $v1, $a2, 27
    ctx->pc = 0x12c554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 27));
    // 0x12c558: 0x31f7e  dsrl32      $v1, $v1, 29
    ctx->pc = 0x12c558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 29));
    // 0x12c55c: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x12C55Cu;
    {
        const bool branch_taken_0x12c55c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c55c) {
            ctx->pc = 0x12C600u;
            goto label_12c600;
        }
    }
    ctx->pc = 0x12C564u;
    // 0x12c564: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12c564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c568: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x12C568u;
    {
        const bool branch_taken_0x12c568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c568) {
            ctx->pc = 0x12C5C8u;
            goto label_12c5c8;
        }
    }
    ctx->pc = 0x12C570u;
    // 0x12c570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c574: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12C574u;
    {
        const bool branch_taken_0x12c574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c574) {
            ctx->pc = 0x12C5C8u;
            goto label_12c5c8;
        }
    }
    ctx->pc = 0x12C57Cu;
    // 0x12c57c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C57Cu;
    {
        const bool branch_taken_0x12c57c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c57c) {
            ctx->pc = 0x12C58Cu;
            goto label_12c58c;
        }
    }
    ctx->pc = 0x12C584u;
    // 0x12c584: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x12C584u;
    {
        const bool branch_taken_0x12c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c584) {
            ctx->pc = 0x12C6C4u;
            goto label_12c6c4;
        }
    }
    ctx->pc = 0x12C58Cu;
label_12c58c:
    // 0x12c58c: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x12c58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x12c590: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x12c590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12c594: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x12c594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x12c598: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x12c598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12c59c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12c59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12c5a0: 0xa0830040  sb          $v1, 0x40($a0)
    ctx->pc = 0x12c5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x12c5a4: 0x94860040  lhu         $a2, 0x40($a0)
    ctx->pc = 0x12c5a4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12c5a8: 0x30030007  andi        $v1, $zero, 0x7
    ctx->pc = 0x12c5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x12c5ac: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x12c5acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x12c5b0: 0x2403fe3f  addiu       $v1, $zero, -0x1C1
    ctx->pc = 0x12c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x12c5b4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x12c5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12c5b8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12c5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12c5bc: 0xa4830040  sh          $v1, 0x40($a0)
    ctx->pc = 0x12c5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x12c5c0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x12C5C0u;
    {
        const bool branch_taken_0x12c5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c5c0) {
            ctx->pc = 0x12C6C4u;
            goto label_12c6c4;
        }
    }
    ctx->pc = 0x12C5C8u;
label_12c5c8:
    // 0x12c5c8: 0x90860040  lbu         $a2, 0x40($a0)
    ctx->pc = 0x12c5c8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12c5cc: 0x64050020  daddiu      $a1, $zero, 0x20
    ctx->pc = 0x12c5ccu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x12c5d0: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x12c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x12c5d4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x12c5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12c5d8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12c5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12c5dc: 0xa0830040  sb          $v1, 0x40($a0)
    ctx->pc = 0x12c5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x12c5e0: 0x94860040  lhu         $a2, 0x40($a0)
    ctx->pc = 0x12c5e0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12c5e4: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x12c5e4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x12c5e8: 0x2403fe3f  addiu       $v1, $zero, -0x1C1
    ctx->pc = 0x12c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x12c5ec: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x12c5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12c5f0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12c5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12c5f4: 0xa4830040  sh          $v1, 0x40($a0)
    ctx->pc = 0x12c5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x12c5f8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x12C5F8u;
    {
        const bool branch_taken_0x12c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c5f8) {
            ctx->pc = 0x12C6C4u;
            goto label_12c6c4;
        }
    }
    ctx->pc = 0x12C600u;
label_12c600:
    // 0x12c600: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x12c600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c604: 0x10a70023  beq         $a1, $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x12C604u;
    {
        const bool branch_taken_0x12c604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x12c604) {
            ctx->pc = 0x12C694u;
            goto label_12c694;
        }
    }
    ctx->pc = 0x12C60Cu;
    // 0x12c60c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c610: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12C610u;
    {
        const bool branch_taken_0x12c610 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c610) {
            ctx->pc = 0x12C664u;
            goto label_12c664;
        }
    }
    ctx->pc = 0x12C618u;
    // 0x12c618: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C618u;
    {
        const bool branch_taken_0x12c618 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c618) {
            ctx->pc = 0x12C628u;
            goto label_12c628;
        }
    }
    ctx->pc = 0x12C620u;
    // 0x12c620: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x12C620u;
    {
        const bool branch_taken_0x12c620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c620) {
            ctx->pc = 0x12C6C4u;
            goto label_12c6c4;
        }
    }
    ctx->pc = 0x12C628u;
label_12c628:
    // 0x12c628: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x12c628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x12c62c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x12c62cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12c630: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x12c630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x12c634: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x12c634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12c638: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12c638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12c63c: 0xa0830040  sb          $v1, 0x40($a0)
    ctx->pc = 0x12c63cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x12c640: 0x94860040  lhu         $a2, 0x40($a0)
    ctx->pc = 0x12c640u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12c644: 0x30e30007  andi        $v1, $a3, 0x7
    ctx->pc = 0x12c644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x12c648: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x12c648u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x12c64c: 0x2403fe3f  addiu       $v1, $zero, -0x1C1
    ctx->pc = 0x12c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x12c650: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x12c650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12c654: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12c654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12c658: 0xa4830040  sh          $v1, 0x40($a0)
    ctx->pc = 0x12c658u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x12c65c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x12C65Cu;
    {
        const bool branch_taken_0x12c65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c65c) {
            ctx->pc = 0x12C6C4u;
            goto label_12c6c4;
        }
    }
    ctx->pc = 0x12C664u;
label_12c664:
    // 0x12c664: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12c664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12c668: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x12c668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12c66c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x12c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x12c670: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x12c670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12c674: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12c674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12c678: 0xa0830040  sb          $v1, 0x40($a0)
    ctx->pc = 0x12c678u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x12c67c: 0x94860040  lhu         $a2, 0x40($a0)
    ctx->pc = 0x12c67cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12c680: 0x64050100  daddiu      $a1, $zero, 0x100
    ctx->pc = 0x12c680u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)256);
    // 0x12c684: 0x2403fe3f  addiu       $v1, $zero, -0x1C1
    ctx->pc = 0x12c684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x12c688: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x12c688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12c68c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12c68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12c690: 0xa4830040  sh          $v1, 0x40($a0)
    ctx->pc = 0x12c690u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 3));
label_12c694:
    // 0x12c694: 0x90860040  lbu         $a2, 0x40($a0)
    ctx->pc = 0x12c694u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12c698: 0x64050020  daddiu      $a1, $zero, 0x20
    ctx->pc = 0x12c698u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x12c69c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x12c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x12c6a0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x12c6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12c6a4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12c6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12c6a8: 0xa0830040  sb          $v1, 0x40($a0)
    ctx->pc = 0x12c6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x12c6ac: 0x94860040  lhu         $a2, 0x40($a0)
    ctx->pc = 0x12c6acu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12c6b0: 0x64050140  daddiu      $a1, $zero, 0x140
    ctx->pc = 0x12c6b0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)320);
    // 0x12c6b4: 0x2403fe3f  addiu       $v1, $zero, -0x1C1
    ctx->pc = 0x12c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x12c6b8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x12c6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12c6bc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x12c6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12c6c0: 0xa4830040  sh          $v1, 0x40($a0)
    ctx->pc = 0x12c6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 3));
label_12c6c4:
    // 0x12c6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C6CCu;
}
