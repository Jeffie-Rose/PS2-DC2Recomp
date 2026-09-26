#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEventScript__FPcPcP9mgCMemory
// Address: 0x255020 - 0x2550b0
void SetEventScript__FPcPcP9mgCMemory_0x255020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEventScript__FPcPcP9mgCMemory_0x255020");
#endif

    switch (ctx->pc) {
        case 0x255050u: goto label_255050;
        case 0x255060u: goto label_255060;
        case 0x255070u: goto label_255070;
        case 0x255090u: goto label_255090;
        case 0x25509cu: goto label_25509c;
        default: break;
    }

    ctx->pc = 0x255020u;

    // 0x255020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x255020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x255024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x255024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x255028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x255028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25502c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25502cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x255030: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x255030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255034: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x255034u;
    {
        const bool branch_taken_0x255034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x255038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255034u;
            // 0x255038: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255034) {
            ctx->pc = 0x255044u;
            goto label_255044;
        }
    }
    ctx->pc = 0x25503Cu;
    // 0x25503c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25503Cu;
    {
        const bool branch_taken_0x25503c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x255040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25503Cu;
            // 0x255040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25503c) {
            ctx->pc = 0x255058u;
            goto label_255058;
        }
    }
    ctx->pc = 0x255044u;
label_255044:
    // 0x255044: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x255044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x255048: 0xc061b50  jal         func_186D40
    ctx->pc = 0x255048u;
    SET_GPR_U32(ctx, 31, 0x255050u);
    ctx->pc = 0x25504Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255048u;
            // 0x25504c: 0x2484e3d0  addiu       $a0, $a0, -0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (runtime->hasFunction(0x186D40u)) {
        auto targetFn = runtime->lookupFunction(0x186D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255050u; }
        if (ctx->pc != 0x255050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteProgram__10CRunScriptFv_0x186d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255050u; }
        if (ctx->pc != 0x255050u) { return; }
    }
    ctx->pc = 0x255050u;
label_255050:
    // 0x255050: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x255050u;
    {
        const bool branch_taken_0x255050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255050u;
            // 0x255054: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255050) {
            ctx->pc = 0x2550A0u;
            goto label_2550a0;
        }
    }
    ctx->pc = 0x255058u;
label_255058:
    // 0x255058: 0xc04e748  jal         func_139D20
    ctx->pc = 0x255058u;
    SET_GPR_U32(ctx, 31, 0x255060u);
    ctx->pc = 0x25505Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255058u;
            // 0x25505c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255060u; }
        if (ctx->pc != 0x255060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255060u; }
        if (ctx->pc != 0x255060u) { return; }
    }
    ctx->pc = 0x255060u;
label_255060:
    // 0x255060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255064: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x255064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x255068: 0xc04e748  jal         func_139D20
    ctx->pc = 0x255068u;
    SET_GPR_U32(ctx, 31, 0x255070u);
    ctx->pc = 0x25506Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255068u;
            // 0x25506c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255070u; }
        if (ctx->pc != 0x255070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255070u; }
        if (ctx->pc != 0x255070u) { return; }
    }
    ctx->pc = 0x255070u;
label_255070:
    // 0x255070: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x255070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x255074: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x255074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255078: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x255078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25507c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x25507cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255080: 0x2484e3d0  addiu       $a0, $a0, -0x1C30
    ctx->pc = 0x255080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960080));
    // 0x255084: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x255084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x255088: 0xc061c3c  jal         func_1870F0
    ctx->pc = 0x255088u;
    SET_GPR_U32(ctx, 31, 0x255090u);
    ctx->pc = 0x25508Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255088u;
            // 0x25508c: 0x24090200  addiu       $t1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1870F0u;
    if (runtime->hasFunction(0x1870F0u)) {
        auto targetFn = runtime->lookupFunction(0x1870F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255090u; }
        if (ctx->pc != 0x255090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        load__10CRunScriptFP14RS_PROG_HEADERP12RS_STACKDATAiP11RS_CALLDATAi_0x1870f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255090u; }
        if (ctx->pc != 0x255090u) { return; }
    }
    ctx->pc = 0x255090u;
label_255090:
    // 0x255090: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x255090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x255094: 0xc09f6dc  jal         func_27DB70
    ctx->pc = 0x255094u;
    SET_GPR_U32(ctx, 31, 0x25509Cu);
    ctx->pc = 0x255098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255094u;
            // 0x255098: 0x2484e3d0  addiu       $a0, $a0, -0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DB70u;
    if (runtime->hasFunction(0x27DB70u)) {
        auto targetFn = runtime->lookupFunction(0x27DB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25509Cu; }
        if (ctx->pc != 0x25509Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEventFunc__FP10CRunScript_0x27db70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25509Cu; }
        if (ctx->pc != 0x25509Cu) { return; }
    }
    ctx->pc = 0x25509Cu;
label_25509c:
    // 0x25509c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25509cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2550a0:
    // 0x2550a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2550a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2550a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2550a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2550a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2550A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2550ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2550A8u;
            // 0x2550ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2550B0u;
}
