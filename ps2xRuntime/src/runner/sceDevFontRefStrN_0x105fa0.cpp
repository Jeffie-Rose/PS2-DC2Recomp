#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevFontRefStrN
// Address: 0x105fa0 - 0x1060fc
void sceDevFontRefStrN_0x105fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevFontRefStrN_0x105fa0");
#endif

    switch (ctx->pc) {
        case 0x10601cu: goto label_10601c;
        case 0x106048u: goto label_106048;
        case 0x1060a0u: goto label_1060a0;
        default: break;
    }

    ctx->pc = 0x105fa0u;

    // 0x105fa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x105fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x105fa4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x105fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x105fa8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x105fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x105fac: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x105facu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fb0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x105fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x105fb4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x105fb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fb8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x105fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x105fbc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x105fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x105fc0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x105fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x105fc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x105fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x105fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x105fcc: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x105fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fd0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x105fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x105fd4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x105fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fd8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x105fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x105fdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fe0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x105fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x105fe4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x105fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x105fe8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x105fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x105fec: 0x8e560008  lw          $s6, 0x8($s2)
    ctx->pc = 0x105fecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x105ff0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x105ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x105ff4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x105ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x105ff8: 0xd64018  mult        $t0, $a2, $s6
    ctx->pc = 0x105ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x105ffc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x105ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106004: 0xe25018  mult        $t2, $a3, $v0
    ctx->pc = 0x106004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x106008: 0x8e490004  lw          $t1, 0x4($s2)
    ctx->pc = 0x106008u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10600c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10600cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106010: 0x689821  addu        $s3, $v1, $t0
    ctx->pc = 0x106010u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x106014: 0xc0419aa  jal         func_1066A8
    ctx->pc = 0x106014u;
    SET_GPR_U32(ctx, 31, 0x10601Cu);
    ctx->pc = 0x106018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106014u;
            // 0x106018: 0x12aa021  addu        $s4, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066A8u;
    if (runtime->hasFunction(0x1066A8u)) {
        auto targetFn = runtime->lookupFunction(0x1066A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10601Cu; }
        if (ctx->pc != 0x10601Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCnt_0x1066a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10601Cu; }
        if (ctx->pc != 0x10601Cu) { return; }
    }
    ctx->pc = 0x10601Cu;
label_10601c:
    // 0x10601c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10601cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x106020: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x106020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x106024: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x106024u;
    {
        const bool branch_taken_0x106024 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x106028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106024u;
            // 0x106028: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106024) {
            ctx->pc = 0x1060CCu;
            goto label_1060cc;
        }
    }
    ctx->pc = 0x10602Cu;
    // 0x10602c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x10602cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106030: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x106030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x106034: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x106034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x106038: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x106038u;
    {
        const bool branch_taken_0x106038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10603Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106038u;
            // 0x10603c: 0x21a02  srl         $v1, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106038) {
            ctx->pc = 0x1060C8u;
            goto label_1060c8;
        }
    }
    ctx->pc = 0x106040u;
    // 0x106040: 0x14a83c  dsll32      $s5, $s4, 0
    ctx->pc = 0x106040u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) << (32 + 0));
    // 0x106044: 0x26540020  addiu       $s4, $s2, 0x20
    ctx->pc = 0x106044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_106048:
    // 0x106048: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x106048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10604c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x10604cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x106050: 0x24c3f548  addiu       $v1, $a2, -0xAB8
    ctx->pc = 0x106050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964552));
    // 0x106054: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x106054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x106058: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x106058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10605c: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x10605cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x106060: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106064: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x106064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x106068: 0x151c3a  dsrl        $v1, $s5, 16
    ctx->pc = 0x106068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) >> 16);
    // 0x10606c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x10606cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106070: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x106070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x106074: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x106074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x106078: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x106078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10607c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x10607cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x106080: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x106080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106084: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x106084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x106088: 0x8e490014  lw          $t1, 0x14($s2)
    ctx->pc = 0x106088u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10608c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10608cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106090: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x106090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106094: 0x2769821  addu        $s3, $s3, $s6
    ctx->pc = 0x106094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x106098: 0xc041786  jal         func_105E18
    ctx->pc = 0x106098u;
    SET_GPR_U32(ctx, 31, 0x1060A0u);
    ctx->pc = 0x10609Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106098u;
            // 0x10609c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105E18u;
    if (runtime->hasFunction(0x105E18u)) {
        auto targetFn = runtime->lookupFunction(0x105E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1060A0u; }
        if (ctx->pc != 0x1060A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevFontRefDirectImage_0x105e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1060A0u; }
        if (ctx->pc != 0x1060A0u) { return; }
    }
    ctx->pc = 0x1060A0u;
label_1060a0:
    // 0x1060a0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1060a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1060a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1060a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1060a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1060a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1060ac: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1060ACu;
    {
        const bool branch_taken_0x1060ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1060B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1060ACu;
            // 0x1060b0: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060ac) {
            ctx->pc = 0x1060CCu;
            goto label_1060cc;
        }
    }
    ctx->pc = 0x1060B4u;
    // 0x1060b4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1060b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1060b8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1060b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1060bc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1060bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1060c0: 0x14a0ffe1  bnez        $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1060C0u;
    {
        const bool branch_taken_0x1060c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1060C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1060C0u;
            // 0x1060c4: 0x21a02  srl         $v1, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060c0) {
            ctx->pc = 0x106048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106048;
        }
    }
    ctx->pc = 0x1060C8u;
label_1060c8:
    // 0x1060c8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1060c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1060cc:
    // 0x1060cc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1060ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1060d0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1060d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1060d4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1060d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1060d8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1060d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1060dc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1060dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1060e0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1060e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1060e4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1060e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1060e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1060e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1060ec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1060ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1060f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1060f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1060f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1060F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1060F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1060F4u;
            // 0x1060f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1060FCu;
}
