#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __PopStackFrame__FP12ThrowContextP13ExceptionInfo
// Address: 0x1023a0 - 0x102630
void ps2___PopStackFrame__FP12ThrowContextP13ExceptionInfo_0x1023a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___PopStackFrame__FP12ThrowContextP13ExceptionInfo_0x1023a0");
#endif

    switch (ctx->pc) {
        case 0x1024acu: goto label_1024ac;
        case 0x102518u: goto label_102518;
        case 0x10258cu: goto label_10258c;
        case 0x1025f8u: goto label_1025f8;
        default: break;
    }

    ctx->pc = 0x1023a0u;

    // 0x1023a0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1023a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1023a4: 0x8c860228  lw          $a2, 0x228($a0)
    ctx->pc = 0x1023a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x1023a8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1023a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1023ac: 0x9c850220  lwu         $a1, 0x220($a0)
    ctx->pc = 0x1023acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x1023b0: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x1023b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1023b4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1023B4u;
    {
        const bool branch_taken_0x1023b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1023B4u;
            // 0x1023b8: 0x9c870224  lwu         $a3, 0x224($a0) (Delay Slot)
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023b4) {
            ctx->pc = 0x10241Cu;
            goto label_10241c;
        }
    }
    ctx->pc = 0x1023BCu;
    // 0x1023bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1023bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1023c0: 0x9c890234  lwu         $t1, 0x234($a0)
    ctx->pc = 0x1023c0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x1023c4: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x1023c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1023c8: 0x7583c  dsll32      $t3, $a3, 0
    ctx->pc = 0x1023c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1023cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1023ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1023d0: 0x8c8a0018  lw          $t2, 0x18($a0)
    ctx->pc = 0x1023d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1023d4: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x1023d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x1023d8: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1023d8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1023dc: 0x34e7fff0  ori         $a3, $a3, 0xFFF0
    ctx->pc = 0x1023dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65520);
    // 0x1023e0: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x1023e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x1023e4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1023e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1023e8: 0x940b8  dsll        $t0, $t1, 2
    ctx->pc = 0x1023e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << 2);
    // 0x1023ec: 0x6508000f  daddiu      $t0, $t0, 0xF
    ctx->pc = 0x1023ecu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)15);
    // 0x1023f0: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x1023f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x1023f4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1023f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1023f8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1023f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1023fc: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1023fcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x102400: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x102400u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x102404: 0xa383c  dsll32      $a3, $t2, 0
    ctx->pc = 0x102404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) << (32 + 0));
    // 0x102408: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x102408u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x10240c: 0xe2102d  daddu       $v0, $a3, $v0
    ctx->pc = 0x10240cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x102410: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x102410u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x102414: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x102414u;
    {
        const bool branch_taken_0x102414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102414u;
            // 0x102418: 0x7383f  dsra32      $a3, $a3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102414) {
            ctx->pc = 0x10243Cu;
            goto label_10243c;
        }
    }
    ctx->pc = 0x10241Cu;
label_10241c:
    // 0x10241c: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x10241cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x102420: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x102420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x102424: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x102424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x102428: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x102428u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x10242c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10242cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x102430: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x102430u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x102434: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x102434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x102438: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x102438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_10243c:
    // 0x10243c: 0x8c880230  lw          $t0, 0x230($a0)
    ctx->pc = 0x10243cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x102440: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x102440u;
    {
        const bool branch_taken_0x102440 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x102440) {
            ctx->pc = 0x10244Cu;
            goto label_10244c;
        }
    }
    ctx->pc = 0x102448u;
    // 0x102448: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x102448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_10244c:
    // 0x10244c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10244Cu;
    {
        const bool branch_taken_0x10244c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x102450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10244Cu;
            // 0x102450: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10244c) {
            ctx->pc = 0x102464u;
            goto label_102464;
        }
    }
    ctx->pc = 0x102454u;
    // 0x102454: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x102454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x102458: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x102458u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10245c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10245Cu;
    {
        const bool branch_taken_0x10245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10245Cu;
            // 0x102460: 0x7c880200  sq          $t0, 0x200($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10245c) {
            ctx->pc = 0x102480u;
            goto label_102480;
        }
    }
    ctx->pc = 0x102464u;
label_102464:
    // 0x102464: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x102464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x102468: 0x14c80006  bne         $a2, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x102468u;
    {
        const bool branch_taken_0x102468 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x10246Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102468u;
            // 0x10246c: 0x6583c  dsll32      $t3, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102468) {
            ctx->pc = 0x102484u;
            goto label_102484;
        }
    }
    ctx->pc = 0x102470u;
    // 0x102470: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x102470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x102474: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x102474u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x102478: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x102478u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10247c: 0x7c880200  sq          $t0, 0x200($a0)
    ctx->pc = 0x10247cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
label_102480:
    // 0x102480: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x102480u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
label_102484:
    // 0x102484: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x102484u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x102488: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x102488u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x10248c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10248cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102490: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x102490u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x102494: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x102494u;
    {
        const bool branch_taken_0x102494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102494u;
            // 0x102498: 0xeb3823  subu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102494) {
            ctx->pc = 0x102544u;
            goto label_102544;
        }
    }
    ctx->pc = 0x10249Cu;
    // 0x10249c: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x10249cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1024a0: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1024A0u;
    {
        const bool branch_taken_0x1024a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1024A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1024A0u;
            // 0x1024a4: 0x64cdfff8  daddiu      $t5, $a2, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024a0) {
            ctx->pc = 0x10250Cu;
            goto label_10250c;
        }
    }
    ctx->pc = 0x1024A8u;
    // 0x1024a8: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1024a8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1024ac:
    // 0x1024ac: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x1024acu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1024b0: 0x8e7821  addu        $t7, $a0, $t6
    ctx->pc = 0x1024b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x1024b4: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1024b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1024b8: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1024b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1024bc: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x1024bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1024c0: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1024c0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1024c4: 0x16d582b  sltu        $t3, $t3, $t5
    ctx->pc = 0x1024c4u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1024c8: 0x7dec0120  sq          $t4, 0x120($t7)
    ctx->pc = 0x1024c8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 288), GPR_VEC(ctx, 12));
    // 0x1024cc: 0x78ec0010  lq          $t4, 0x10($a3)
    ctx->pc = 0x1024ccu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1024d0: 0x7dec0130  sq          $t4, 0x130($t7)
    ctx->pc = 0x1024d0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 304), GPR_VEC(ctx, 12));
    // 0x1024d4: 0x78ec0020  lq          $t4, 0x20($a3)
    ctx->pc = 0x1024d4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1024d8: 0x7dec0140  sq          $t4, 0x140($t7)
    ctx->pc = 0x1024d8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 320), GPR_VEC(ctx, 12));
    // 0x1024dc: 0x78ec0030  lq          $t4, 0x30($a3)
    ctx->pc = 0x1024dcu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1024e0: 0x7dec0150  sq          $t4, 0x150($t7)
    ctx->pc = 0x1024e0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 336), GPR_VEC(ctx, 12));
    // 0x1024e4: 0x78ec0040  lq          $t4, 0x40($a3)
    ctx->pc = 0x1024e4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1024e8: 0x7dec0160  sq          $t4, 0x160($t7)
    ctx->pc = 0x1024e8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 352), GPR_VEC(ctx, 12));
    // 0x1024ec: 0x78ec0050  lq          $t4, 0x50($a3)
    ctx->pc = 0x1024ecu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1024f0: 0x7dec0170  sq          $t4, 0x170($t7)
    ctx->pc = 0x1024f0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 368), GPR_VEC(ctx, 12));
    // 0x1024f4: 0x78ec0060  lq          $t4, 0x60($a3)
    ctx->pc = 0x1024f4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x1024f8: 0x7dec0180  sq          $t4, 0x180($t7)
    ctx->pc = 0x1024f8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 384), GPR_VEC(ctx, 12));
    // 0x1024fc: 0x78ec0070  lq          $t4, 0x70($a3)
    ctx->pc = 0x1024fcu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x102500: 0x7dec0190  sq          $t4, 0x190($t7)
    ctx->pc = 0x102500u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 400), GPR_VEC(ctx, 12));
    // 0x102504: 0x1560ffe9  bnez        $t3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x102504u;
    {
        const bool branch_taken_0x102504 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x102508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102504u;
            // 0x102508: 0x24e70080  addiu       $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102504) {
            ctx->pc = 0x1024ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1024ac;
        }
    }
    ctx->pc = 0x10250Cu;
label_10250c:
    // 0x10250c: 0x0  nop
    ctx->pc = 0x10250cu;
    // NOP
    // 0x102510: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x102510u;
    {
        const bool branch_taken_0x102510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102510u;
            // 0x102514: 0x86900  sll         $t5, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102510) {
            ctx->pc = 0x102530u;
            goto label_102530;
        }
    }
    ctx->pc = 0x102518u;
label_102518:
    // 0x102518: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x102518u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10251c: 0x8d5821  addu        $t3, $a0, $t5
    ctx->pc = 0x10251cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x102520: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x102520u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x102524: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x102524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x102528: 0x7d6c0120  sq          $t4, 0x120($t3)
    ctx->pc = 0x102528u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 288), GPR_VEC(ctx, 12));
    // 0x10252c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x10252cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_102530:
    // 0x102530: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x102530u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x102534: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x102534u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x102538: 0x166582b  sltu        $t3, $t3, $a2
    ctx->pc = 0x102538u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x10253c: 0x1560fff6  bnez        $t3, . + 4 + (-0xA << 2)
    ctx->pc = 0x10253Cu;
    {
        const bool branch_taken_0x10253c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x10253c) {
            ctx->pc = 0x102518u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_102518;
        }
    }
    ctx->pc = 0x102544u;
label_102544:
    // 0x102544: 0x0  nop
    ctx->pc = 0x102544u;
    // NOP
    // 0x102548: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x102548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10254c: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x10254cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x102550: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x102550u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x102554: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x102554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x102558: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x102558u;
    {
        const bool branch_taken_0x102558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10255Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102558u;
            // 0x10255c: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102558) {
            ctx->pc = 0x102624u;
            goto label_102624;
        }
    }
    ctx->pc = 0x102560u;
    // 0x102560: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x102560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x102564: 0x9082b  sltu        $at, $zero, $t1
    ctx->pc = 0x102564u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x102568: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x102568u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10256c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x10256cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102570: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x102570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x102574: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x102574u;
    {
        const bool branch_taken_0x102574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102574u;
            // 0x102578: 0x1435023  subu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102574) {
            ctx->pc = 0x102624u;
            goto label_102624;
        }
    }
    ctx->pc = 0x10257Cu;
    // 0x10257c: 0x2d210009  sltiu       $at, $t1, 0x9
    ctx->pc = 0x10257cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x102580: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x102580u;
    {
        const bool branch_taken_0x102580 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x102584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102580u;
            // 0x102584: 0x6526fff8  daddiu      $a2, $t1, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102580) {
            ctx->pc = 0x1025ECu;
            goto label_1025ec;
        }
    }
    ctx->pc = 0x102588u;
    // 0x102588: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10258c:
    // 0x10258c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x10258cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x102590: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x102590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x102594: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x102594u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x102598: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x102598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x10259c: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x10259cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1025a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1025a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1025a4: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x1025a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1025a8: 0xad050288  sw          $a1, 0x288($t0)
    ctx->pc = 0x1025a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 648), GPR_U32(ctx, 5));
    // 0x1025ac: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x1025acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1025b0: 0xad05028c  sw          $a1, 0x28C($t0)
    ctx->pc = 0x1025b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 652), GPR_U32(ctx, 5));
    // 0x1025b4: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x1025b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1025b8: 0xad050290  sw          $a1, 0x290($t0)
    ctx->pc = 0x1025b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 656), GPR_U32(ctx, 5));
    // 0x1025bc: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x1025bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1025c0: 0xad050294  sw          $a1, 0x294($t0)
    ctx->pc = 0x1025c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 5));
    // 0x1025c4: 0x8d450010  lw          $a1, 0x10($t2)
    ctx->pc = 0x1025c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x1025c8: 0xad050298  sw          $a1, 0x298($t0)
    ctx->pc = 0x1025c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 5));
    // 0x1025cc: 0x8d450014  lw          $a1, 0x14($t2)
    ctx->pc = 0x1025ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x1025d0: 0xad05029c  sw          $a1, 0x29C($t0)
    ctx->pc = 0x1025d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 668), GPR_U32(ctx, 5));
    // 0x1025d4: 0x8d450018  lw          $a1, 0x18($t2)
    ctx->pc = 0x1025d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x1025d8: 0xad0502a0  sw          $a1, 0x2A0($t0)
    ctx->pc = 0x1025d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 672), GPR_U32(ctx, 5));
    // 0x1025dc: 0x8d45001c  lw          $a1, 0x1C($t2)
    ctx->pc = 0x1025dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x1025e0: 0xad0502a4  sw          $a1, 0x2A4($t0)
    ctx->pc = 0x1025e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 676), GPR_U32(ctx, 5));
    // 0x1025e4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1025E4u;
    {
        const bool branch_taken_0x1025e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1025E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1025E4u;
            // 0x1025e8: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025e4) {
            ctx->pc = 0x10258Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10258c;
        }
    }
    ctx->pc = 0x1025ECu;
label_1025ec:
    // 0x1025ec: 0x0  nop
    ctx->pc = 0x1025ecu;
    // NOP
    // 0x1025f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1025F0u;
    {
        const bool branch_taken_0x1025f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1025F0u;
            // 0x1025f4: 0xb3080  sll         $a2, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025f0) {
            ctx->pc = 0x102610u;
            goto label_102610;
        }
    }
    ctx->pc = 0x1025F8u;
label_1025f8:
    // 0x1025f8: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1025f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1025fc: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1025fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x102600: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x102600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x102604: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x102604u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x102608: 0xac650288  sw          $a1, 0x288($v1)
    ctx->pc = 0x102608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 648), GPR_U32(ctx, 5));
    // 0x10260c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x10260cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_102610:
    // 0x102610: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x102610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x102614: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x102614u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x102618: 0x69182b  sltu        $v1, $v1, $t1
    ctx->pc = 0x102618u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x10261c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x10261Cu;
    {
        const bool branch_taken_0x10261c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10261c) {
            ctx->pc = 0x1025F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1025f8;
        }
    }
    ctx->pc = 0x102624u;
label_102624:
    // 0x102624: 0x0  nop
    ctx->pc = 0x102624u;
    // NOP
    // 0x102628: 0x3e00008  jr          $ra
    ctx->pc = 0x102628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102630u;
}
