#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEffectParam__FP12EFFECT_PARAM
// Address: 0x17f580 - 0x17f6d0
void InitEffectParam__FP12EFFECT_PARAM_0x17f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEffectParam__FP12EFFECT_PARAM_0x17f580");
#endif

    switch (ctx->pc) {
        case 0x17f678u: goto label_17f678;
        default: break;
    }

    ctx->pc = 0x17f580u;

    // 0x17f580: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17f580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17f584: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17f584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17f588: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17f588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17f58c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f590: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17f590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17f594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17f594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f598: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17f598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17f59c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17f5a0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x17f5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x17f5a4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x17f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x17f5a8: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x17f5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x17f5ac: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x17f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x17f5b0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x17f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x17f5b4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x17f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x17f5b8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x17f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x17f5bc: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x17f5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x17f5c0: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x17f5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x17f5c4: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x17f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x17f5c8: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x17f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    // 0x17f5cc: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x17f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x17f5d0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x17f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x17f5d4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x17f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x17f5d8: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x17f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x17f5dc: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x17f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
    // 0x17f5e0: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x17f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x17f5e4: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x17f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x17f5e8: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x17f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
    // 0x17f5ec: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x17f5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x17f5f0: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x17f5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x17f5f4: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x17f5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x17f5f8: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x17f5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x17f5fc: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x17f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x17f600: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x17f600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x17f604: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x17f604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x17f608: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x17f608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x17f60c: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x17f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x17f610: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x17f610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x17f614: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x17f614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x17f618: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x17f618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x17f61c: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x17f61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x17f620: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x17f620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x17f624: 0xac8300a0  sw          $v1, 0xA0($a0)
    ctx->pc = 0x17f624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
    // 0x17f628: 0xac8300a4  sw          $v1, 0xA4($a0)
    ctx->pc = 0x17f628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 3));
    // 0x17f62c: 0xac8300a8  sw          $v1, 0xA8($a0)
    ctx->pc = 0x17f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 3));
    // 0x17f630: 0xac8300ac  sw          $v1, 0xAC($a0)
    ctx->pc = 0x17f630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 3));
    // 0x17f634: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x17f634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x17f638: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x17f638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x17f63c: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x17f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x17f640: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x17f640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x17f644: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x17f644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x17f648: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x17f648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x17f64c: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x17f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x17f650: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x17f650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x17f654: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x17f654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x17f658: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x17f658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x17f65c: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x17f65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x17f660: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x17f660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x17f664: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x17f664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x17f668: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x17f668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x17f66c: 0xac8300e8  sw          $v1, 0xE8($a0)
    ctx->pc = 0x17f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 3));
    // 0x17f670: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x17f670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
    // 0x17f674: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x17f674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
label_17f678:
    // 0x17f678: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x17f678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x17f67c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17f680: 0xace000f8  sw          $zero, 0xF8($a3)
    ctx->pc = 0x17f680u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 0));
    // 0x17f684: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x17f684u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x17f688: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x17f688u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
    // 0x17f68c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x17f68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x17f690: 0xace00100  sw          $zero, 0x100($a3)
    ctx->pc = 0x17f690u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 256), GPR_U32(ctx, 0));
    // 0x17f694: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17F694u;
    {
        const bool branch_taken_0x17f694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F694u;
            // 0x17f698: 0xace00104  sw          $zero, 0x104($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f694) {
            ctx->pc = 0x17F678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f678;
        }
    }
    ctx->pc = 0x17F69Cu;
    // 0x17f69c: 0xac800178  sw          $zero, 0x178($a0)
    ctx->pc = 0x17f69cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 376), GPR_U32(ctx, 0));
    // 0x17f6a0: 0x3c03411c  lui         $v1, 0x411C
    ctx->pc = 0x17f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16668 << 16));
    // 0x17f6a4: 0xac80017c  sw          $zero, 0x17C($a0)
    ctx->pc = 0x17f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 380), GPR_U32(ctx, 0));
    // 0x17f6a8: 0x3465e80a  ori         $a1, $v1, 0xE80A
    ctx->pc = 0x17f6a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59402);
    // 0x17f6ac: 0xac800180  sw          $zero, 0x180($a0)
    ctx->pc = 0x17f6acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 0));
    // 0x17f6b0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x17f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x17f6b4: 0xac80019c  sw          $zero, 0x19C($a0)
    ctx->pc = 0x17f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 0));
    // 0x17f6b8: 0xac800198  sw          $zero, 0x198($a0)
    ctx->pc = 0x17f6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 0));
    // 0x17f6bc: 0xac800194  sw          $zero, 0x194($a0)
    ctx->pc = 0x17f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 0));
    // 0x17f6c0: 0xac800190  sw          $zero, 0x190($a0)
    ctx->pc = 0x17f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 0));
    // 0x17f6c4: 0xac8501a0  sw          $a1, 0x1A0($a0)
    ctx->pc = 0x17f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 5));
    // 0x17f6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x17F6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F6C8u;
            // 0x17f6cc: 0xac8301a4  sw          $v1, 0x1A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F6D0u;
}
