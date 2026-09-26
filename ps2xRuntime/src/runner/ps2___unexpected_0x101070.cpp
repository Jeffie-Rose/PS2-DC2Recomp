#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __unexpected
// Address: 0x101070 - 0x101244
void ps2___unexpected_0x101070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unexpected_0x101070");
#endif

    switch (ctx->pc) {
        case 0x1010a0u: goto label_1010a0;
        case 0x1010b4u: goto label_1010b4;
        case 0x1010c0u: goto label_1010c0;
        case 0x1010ccu: goto label_1010cc;
        case 0x1010e8u: goto label_1010e8;
        case 0x101128u: goto label_101128;
        case 0x101164u: goto label_101164;
        case 0x101170u: goto label_101170;
        case 0x1011b4u: goto label_1011b4;
        case 0x10120cu: goto label_10120c;
        case 0x101218u: goto label_101218;
        case 0x101220u: goto label_101220;
        default: break;
    }

    ctx->pc = 0x101070u;

    // 0x101070: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x101070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x101074: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x101074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x101078: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x101078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x10107c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x101080: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x101080u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    // 0x101084: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x101088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10108c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10108cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x101090: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x101090u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x101094: 0x0  nop
    ctx->pc = 0x101094u;
    // NOP
    // 0x101098: 0xc04023c  jal         func_1008F0
    ctx->pc = 0x101098u;
    SET_GPR_U32(ctx, 31, 0x1010A0u);
    ctx->pc = 0x10109Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101098u;
            // 0x10109c: 0xafdd0084  sw          $sp, 0x84($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1008F0u;
    if (runtime->hasFunction(0x1008F0u)) {
        auto targetFn = runtime->lookupFunction(0x1008F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010A0u; }
        if (ctx->pc != 0x1010A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unexpected__3stdFv_0x1008f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010A0u; }
        if (ctx->pc != 0x1010A0u) { return; }
    }
    ctx->pc = 0x1010A0u;
label_1010a0:
    // 0x1010a0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1010A0u;
    {
        const bool branch_taken_0x1010a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1010a0) {
            ctx->pc = 0x101218u;
            goto label_101218;
        }
    }
    ctx->pc = 0x1010A8u;
    // 0x1010a8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1010a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1010ac: 0xc04028c  jal         func_100A30
    ctx->pc = 0x1010ACu;
    SET_GPR_U32(ctx, 31, 0x1010B4u);
    ctx->pc = 0x1010B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1010ACu;
            // 0x1010b0: 0x27c50060  addiu       $a1, $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010B4u; }
        if (ctx->pc != 0x1010B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010B4u; }
        if (ctx->pc != 0x1010B4u) { return; }
    }
    ctx->pc = 0x1010B4u;
label_1010b4:
    // 0x1010b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1010b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010b8: 0xc04028c  jal         func_100A30
    ctx->pc = 0x1010B8u;
    SET_GPR_U32(ctx, 31, 0x1010C0u);
    ctx->pc = 0x1010BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1010B8u;
            // 0x1010bc: 0x27c50064  addiu       $a1, $fp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010C0u; }
        if (ctx->pc != 0x1010C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010C0u; }
        if (ctx->pc != 0x1010C0u) { return; }
    }
    ctx->pc = 0x1010C0u;
label_1010c0:
    // 0x1010c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1010c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010c4: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x1010C4u;
    SET_GPR_U32(ctx, 31, 0x1010CCu);
    ctx->pc = 0x1010C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1010C4u;
            // 0x1010c8: 0x27c50068  addiu       $a1, $fp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010CCu; }
        if (ctx->pc != 0x1010CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010CCu; }
        if (ctx->pc != 0x1010CCu) { return; }
    }
    ctx->pc = 0x1010CCu;
label_1010cc:
    // 0x1010cc: 0x27d3006c  addiu       $s3, $fp, 0x6C
    ctx->pc = 0x1010ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 108));
    // 0x1010d0: 0x27c30070  addiu       $v1, $fp, 0x70
    ctx->pc = 0x1010d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    // 0x1010d4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1010d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1010d8: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x1010d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1010dc: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x1010dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1010e0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1010E0u;
    {
        const bool branch_taken_0x1010e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1010E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1010E0u;
            // 0x1010e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1010e0) {
            ctx->pc = 0x101140u;
            goto label_101140;
        }
    }
    ctx->pc = 0x1010E8u;
label_1010e8:
    // 0x1010e8: 0x92280001  lbu         $t0, 0x1($s1)
    ctx->pc = 0x1010e8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1010ec: 0x27c200a8  addiu       $v0, $fp, 0xA8
    ctx->pc = 0x1010ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 168));
    // 0x1010f0: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x1010f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1010f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1010f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010f8: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x1010f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1010fc: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x1010fcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x101100: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x101100u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x101104: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x101104u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x101108: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x101108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x10110c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x10110cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x101110: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x101110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x101114: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x101114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x101118: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x101118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10111c: 0x8fc500a8  lw          $a1, 0xA8($fp)
    ctx->pc = 0x10111cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 168)));
    // 0x101120: 0xc0401a0  jal         func_100680
    ctx->pc = 0x101120u;
    SET_GPR_U32(ctx, 31, 0x101128u);
    ctx->pc = 0x101124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101120u;
            // 0x101124: 0x27c60090  addiu       $a2, $fp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100680u;
    if (runtime->hasFunction(0x100680u)) {
        auto targetFn = runtime->lookupFunction(0x100680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101128u; }
        if (ctx->pc != 0x101128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___throw_catch_compare_0x100680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101128u; }
        if (ctx->pc != 0x101128u) { return; }
    }
    ctx->pc = 0x101128u;
label_101128:
    // 0x101128: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x101128u;
    {
        const bool branch_taken_0x101128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101128u;
            // 0x10112c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101128) {
            ctx->pc = 0x101138u;
            goto label_101138;
        }
    }
    ctx->pc = 0x101130u;
    // 0x101130: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x101130u;
    {
        const bool branch_taken_0x101130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101130) {
            ctx->pc = 0x101150u;
            goto label_101150;
        }
    }
    ctx->pc = 0x101138u;
label_101138:
    // 0x101138: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x101138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x10113c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10113cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_101140:
    // 0x101140: 0x8fc20060  lw          $v0, 0x60($fp)
    ctx->pc = 0x101140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x101144: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x101144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101148: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x101148u;
    {
        const bool branch_taken_0x101148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10114Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101148u;
            // 0x10114c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101148) {
            ctx->pc = 0x1010E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1010e8;
        }
    }
    ctx->pc = 0x101150u;
label_101150:
    // 0x101150: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101150u;
    {
        const bool branch_taken_0x101150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101150u;
            // 0x101154: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101150) {
            ctx->pc = 0x101164u;
            goto label_101164;
        }
    }
    ctx->pc = 0x101158u;
    // 0x101158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10115c: 0xc040880  jal         func_102200
    ctx->pc = 0x10115Cu;
    SET_GPR_U32(ctx, 31, 0x101164u);
    ctx->pc = 0x101160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10115Cu;
            // 0x101160: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101164u; }
        if (ctx->pc != 0x101164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___throw_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101164u; }
        if (ctx->pc != 0x101164u) { return; }
    }
    ctx->pc = 0x101164u;
label_101164:
    // 0x101164: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x101164u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x101168: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x101168u;
    {
        const bool branch_taken_0x101168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10116Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101168u;
            // 0x10116c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101168) {
            ctx->pc = 0x1011CCu;
            goto label_1011cc;
        }
    }
    ctx->pc = 0x101170u;
label_101170:
    // 0x101170: 0x92280001  lbu         $t0, 0x1($s1)
    ctx->pc = 0x101170u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x101174: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x101174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x101178: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x101178u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x10117c: 0x27c200ac  addiu       $v0, $fp, 0xAC
    ctx->pc = 0x10117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 172));
    // 0x101180: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x101180u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x101184: 0x2484eea0  addiu       $a0, $a0, -0x1160
    ctx->pc = 0x101184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962848));
    // 0x101188: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x101188u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10118c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x10118cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x101190: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x101190u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x101194: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x101194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x101198: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x101198u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x10119c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x10119cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1011a0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1011a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1011a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1011a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1011a8: 0x8fc500ac  lw          $a1, 0xAC($fp)
    ctx->pc = 0x1011a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 172)));
    // 0x1011ac: 0xc0401a0  jal         func_100680
    ctx->pc = 0x1011ACu;
    SET_GPR_U32(ctx, 31, 0x1011B4u);
    ctx->pc = 0x1011B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1011ACu;
            // 0x1011b0: 0x27c60098  addiu       $a2, $fp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100680u;
    if (runtime->hasFunction(0x100680u)) {
        auto targetFn = runtime->lookupFunction(0x100680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1011B4u; }
        if (ctx->pc != 0x1011B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___throw_catch_compare_0x100680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1011B4u; }
        if (ctx->pc != 0x1011B4u) { return; }
    }
    ctx->pc = 0x1011B4u;
label_1011b4:
    // 0x1011b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1011B4u;
    {
        const bool branch_taken_0x1011b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1011B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1011B4u;
            // 0x1011b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011b4) {
            ctx->pc = 0x1011C4u;
            goto label_1011c4;
        }
    }
    ctx->pc = 0x1011BCu;
    // 0x1011bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1011BCu;
    {
        const bool branch_taken_0x1011bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1011bc) {
            ctx->pc = 0x1011E0u;
            goto label_1011e0;
        }
    }
    ctx->pc = 0x1011C4u;
label_1011c4:
    // 0x1011c4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1011c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1011c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1011c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1011cc:
    // 0x1011cc: 0x0  nop
    ctx->pc = 0x1011ccu;
    // NOP
    // 0x1011d0: 0x8fc20060  lw          $v0, 0x60($fp)
    ctx->pc = 0x1011d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1011d4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1011d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1011d8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1011D8u;
    {
        const bool branch_taken_0x1011d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1011DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1011D8u;
            // 0x1011dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011d8) {
            ctx->pc = 0x101170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101170;
        }
    }
    ctx->pc = 0x1011E0u;
label_1011e0:
    // 0x1011e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1011E0u;
    {
        const bool branch_taken_0x1011e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1011E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1011E0u;
            // 0x1011e4: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011e0) {
            ctx->pc = 0x101210u;
            goto label_101210;
        }
    }
    ctx->pc = 0x1011E8u;
    // 0x1011e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1011e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1011ec: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1011ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1011f0: 0x24424e60  addiu       $v0, $v0, 0x4E60
    ctx->pc = 0x1011f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20064));
    // 0x1011f4: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x1011f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x1011f8: 0x2484eec0  addiu       $a0, $a0, -0x1140
    ctx->pc = 0x1011f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962880));
    // 0x1011fc: 0xafc200a4  sw          $v0, 0xA4($fp)
    ctx->pc = 0x1011fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 2));
    // 0x101200: 0x27c500a4  addiu       $a1, $fp, 0xA4
    ctx->pc = 0x101200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 164));
    // 0x101204: 0xc040880  jal         func_102200
    ctx->pc = 0x101204u;
    SET_GPR_U32(ctx, 31, 0x10120Cu);
    ctx->pc = 0x101208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101204u;
            // 0x101208: 0x24c61250  addiu       $a2, $a2, 0x1250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10120Cu; }
        if (ctx->pc != 0x10120Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___throw_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10120Cu; }
        if (ctx->pc != 0x10120Cu) { return; }
    }
    ctx->pc = 0x10120Cu;
label_10120c:
    // 0x10120c: 0x27c40070  addiu       $a0, $fp, 0x70
    ctx->pc = 0x10120cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
label_101210:
    // 0x101210: 0xc0402dc  jal         func_100B70
    ctx->pc = 0x101210u;
    SET_GPR_U32(ctx, 31, 0x101218u);
    ctx->pc = 0x100B70u;
    if (runtime->hasFunction(0x100B70u)) {
        auto targetFn = runtime->lookupFunction(0x100B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101218u; }
        if (ctx->pc != 0x101218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___end__catch_0x100b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101218u; }
        if (ctx->pc != 0x101218u) { return; }
    }
    ctx->pc = 0x101218u;
label_101218:
    // 0x101218: 0xc040248  jal         func_100920
    ctx->pc = 0x101218u;
    SET_GPR_U32(ctx, 31, 0x101220u);
    ctx->pc = 0x100920u;
    if (runtime->hasFunction(0x100920u)) {
        auto targetFn = runtime->lookupFunction(0x100920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101220u; }
        if (ctx->pc != 0x101220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        terminate__3stdFv_0x100920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101220u; }
        if (ctx->pc != 0x101220u) { return; }
    }
    ctx->pc = 0x101220u;
label_101220:
    // 0x101220: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x101220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x101224: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x101224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101228: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x101228u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10122c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10122cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10123c: 0x3e00008  jr          $ra
    ctx->pc = 0x10123Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10123Cu;
            // 0x101240: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101244u;
}
