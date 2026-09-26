#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDevType__FPcPc
// Address: 0x1490d0 - 0x1491f0
void GetDevType__FPcPc_0x1490d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDevType__FPcPc_0x1490d0");
#endif

    switch (ctx->pc) {
        case 0x1490f4u: goto label_1490f4;
        case 0x149104u: goto label_149104;
        case 0x149144u: goto label_149144;
        case 0x149154u: goto label_149154;
        case 0x149164u: goto label_149164;
        case 0x149180u: goto label_149180;
        case 0x14919cu: goto label_14919c;
        case 0x1491b8u: goto label_1491b8;
        case 0x1491d4u: goto label_1491d4;
        default: break;
    }

    ctx->pc = 0x1490d0u;

    // 0x1490d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1490d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1490d4: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x1490d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1490d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1490d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1490dc: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1490dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1490e0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1490E0u;
    {
        const bool branch_taken_0x1490e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1490E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1490E0u;
            // 0x1490e4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1490e0) {
            ctx->pc = 0x1490FCu;
            goto label_1490fc;
        }
    }
    ctx->pc = 0x1490E8u;
    // 0x1490e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1490e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490ec: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1490ECu;
    SET_GPR_U32(ctx, 31, 0x1490F4u);
    ctx->pc = 0x1490F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1490ECu;
            // 0x1490f0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490F4u; }
        if (ctx->pc != 0x1490F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490F4u; }
        if (ctx->pc != 0x1490F4u) { return; }
    }
    ctx->pc = 0x1490F4u;
label_1490f4:
    // 0x1490f4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1490F4u;
    {
        const bool branch_taken_0x1490f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1490F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1490F4u;
            // 0x1490f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1490f4) {
            ctx->pc = 0x1491E4u;
            goto label_1491e4;
        }
    }
    ctx->pc = 0x1490FCu;
label_1490fc:
    // 0x1490fc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1490fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149100: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x149100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_149104:
    // 0x149104: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x149104u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149108: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149108u;
    {
        const bool branch_taken_0x149108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149108) {
            ctx->pc = 0x149128u;
            goto label_149128;
        }
    }
    ctx->pc = 0x149110u;
    // 0x149110: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x149110u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x149114: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x149114u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149118: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x149118u;
    {
        const bool branch_taken_0x149118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14911Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149118u;
            // 0x14911c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149118) {
            ctx->pc = 0x149128u;
            goto label_149128;
        }
    }
    ctx->pc = 0x149120u;
    // 0x149120: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x149120u;
    {
        const bool branch_taken_0x149120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149120u;
            // 0x149124: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149120) {
            ctx->pc = 0x149104u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149104;
        }
    }
    ctx->pc = 0x149128u;
label_149128:
    // 0x149128: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x149128u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14912c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x14912cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149130: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149130u;
    {
        const bool branch_taken_0x149130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149130u;
            // 0x149134: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149130) {
            ctx->pc = 0x14914Cu;
            goto label_14914c;
        }
    }
    ctx->pc = 0x149138u;
    // 0x149138: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x149138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14913c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x14913Cu;
    SET_GPR_U32(ctx, 31, 0x149144u);
    ctx->pc = 0x149140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14913Cu;
            // 0x149140: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149144u; }
        if (ctx->pc != 0x149144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149144u; }
        if (ctx->pc != 0x149144u) { return; }
    }
    ctx->pc = 0x149144u;
label_149144:
    // 0x149144: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149144u;
    {
        const bool branch_taken_0x149144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149144) {
            ctx->pc = 0x149154u;
            goto label_149154;
        }
    }
    ctx->pc = 0x14914Cu;
label_14914c:
    // 0x14914c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x14914Cu;
    SET_GPR_U32(ctx, 31, 0x149154u);
    ctx->pc = 0x149150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14914Cu;
            // 0x149150: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149154u; }
        if (ctx->pc != 0x149154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149154u; }
        if (ctx->pc != 0x149154u) { return; }
    }
    ctx->pc = 0x149154u;
label_149154:
    // 0x149154: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x149154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x149158: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x149158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14915c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x14915Cu;
    SET_GPR_U32(ctx, 31, 0x149164u);
    ctx->pc = 0x149160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14915Cu;
            // 0x149160: 0x24a527b8  addiu       $a1, $a1, 0x27B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149164u; }
        if (ctx->pc != 0x149164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149164u; }
        if (ctx->pc != 0x149164u) { return; }
    }
    ctx->pc = 0x149164u;
label_149164:
    // 0x149164: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149164u;
    {
        const bool branch_taken_0x149164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149164u;
            // 0x149168: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149164) {
            ctx->pc = 0x149174u;
            goto label_149174;
        }
    }
    ctx->pc = 0x14916Cu;
    // 0x14916c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14916Cu;
    {
        const bool branch_taken_0x14916c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14916Cu;
            // 0x149170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14916c) {
            ctx->pc = 0x1491E4u;
            goto label_1491e4;
        }
    }
    ctx->pc = 0x149174u;
label_149174:
    // 0x149174: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x149174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x149178: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x149178u;
    SET_GPR_U32(ctx, 31, 0x149180u);
    ctx->pc = 0x14917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149178u;
            // 0x14917c: 0x24a527c0  addiu       $a1, $a1, 0x27C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149180u; }
        if (ctx->pc != 0x149180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149180u; }
        if (ctx->pc != 0x149180u) { return; }
    }
    ctx->pc = 0x149180u;
label_149180:
    // 0x149180: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149180u;
    {
        const bool branch_taken_0x149180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149180u;
            // 0x149184: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149180) {
            ctx->pc = 0x149190u;
            goto label_149190;
        }
    }
    ctx->pc = 0x149188u;
    // 0x149188: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x149188u;
    {
        const bool branch_taken_0x149188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14918Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149188u;
            // 0x14918c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149188) {
            ctx->pc = 0x1491E4u;
            goto label_1491e4;
        }
    }
    ctx->pc = 0x149190u;
label_149190:
    // 0x149190: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x149190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x149194: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x149194u;
    SET_GPR_U32(ctx, 31, 0x14919Cu);
    ctx->pc = 0x149198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149194u;
            // 0x149198: 0x24a527c8  addiu       $a1, $a1, 0x27C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14919Cu; }
        if (ctx->pc != 0x14919Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14919Cu; }
        if (ctx->pc != 0x14919Cu) { return; }
    }
    ctx->pc = 0x14919Cu;
label_14919c:
    // 0x14919c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14919Cu;
    {
        const bool branch_taken_0x14919c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1491A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14919Cu;
            // 0x1491a0: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14919c) {
            ctx->pc = 0x1491ACu;
            goto label_1491ac;
        }
    }
    ctx->pc = 0x1491A4u;
    // 0x1491a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1491A4u;
    {
        const bool branch_taken_0x1491a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1491A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1491A4u;
            // 0x1491a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491a4) {
            ctx->pc = 0x1491E4u;
            goto label_1491e4;
        }
    }
    ctx->pc = 0x1491ACu;
label_1491ac:
    // 0x1491ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1491acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1491b0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1491B0u;
    SET_GPR_U32(ctx, 31, 0x1491B8u);
    ctx->pc = 0x1491B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1491B0u;
            // 0x1491b4: 0x24a527d0  addiu       $a1, $a1, 0x27D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491B8u; }
        if (ctx->pc != 0x1491B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491B8u; }
        if (ctx->pc != 0x1491B8u) { return; }
    }
    ctx->pc = 0x1491B8u;
label_1491b8:
    // 0x1491b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1491B8u;
    {
        const bool branch_taken_0x1491b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1491BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1491B8u;
            // 0x1491bc: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491b8) {
            ctx->pc = 0x1491C8u;
            goto label_1491c8;
        }
    }
    ctx->pc = 0x1491C0u;
    // 0x1491c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1491C0u;
    {
        const bool branch_taken_0x1491c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1491C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1491C0u;
            // 0x1491c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491c0) {
            ctx->pc = 0x1491E4u;
            goto label_1491e4;
        }
    }
    ctx->pc = 0x1491C8u;
label_1491c8:
    // 0x1491c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1491c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1491cc: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1491CCu;
    SET_GPR_U32(ctx, 31, 0x1491D4u);
    ctx->pc = 0x1491D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1491CCu;
            // 0x1491d0: 0x24a527d8  addiu       $a1, $a1, 0x27D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491D4u; }
        if (ctx->pc != 0x1491D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491D4u; }
        if (ctx->pc != 0x1491D4u) { return; }
    }
    ctx->pc = 0x1491D4u;
label_1491d4:
    // 0x1491d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1491d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1491d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1491d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1491dc: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1491dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
    // 0x1491e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1491e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1491e4:
    // 0x1491e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1491e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1491e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1491E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1491ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1491E8u;
            // 0x1491ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1491F0u;
}
