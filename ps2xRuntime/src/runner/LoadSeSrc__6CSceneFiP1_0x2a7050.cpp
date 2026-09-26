#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSeSrc__6CSceneFiP1
// Address: 0x2a7050 - 0x2a70dc
void LoadSeSrc__6CSceneFiP1_0x2a7050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSeSrc__6CSceneFiP1_0x2a7050");
#endif

    switch (ctx->pc) {
        case 0x2a7074u: goto label_2a7074;
        case 0x2a7090u: goto label_2a7090;
        case 0x2a70a4u: goto label_2a70a4;
        case 0x2a70bcu: goto label_2a70bc;
        default: break;
    }

    ctx->pc = 0x2a7050u;

    // 0x2a7050: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a7050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a7054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a7054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a7058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a7058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a705c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a705cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a7060: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a7060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7064: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a7068: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a7068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a706c: 0xc0a9ad4  jal         func_2A6B50
    ctx->pc = 0x2A706Cu;
    SET_GPR_U32(ctx, 31, 0x2A7074u);
    ctx->pc = 0x2A7070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A706Cu;
            // 0x2a7070: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B50u;
    if (runtime->hasFunction(0x2A6B50u)) {
        auto targetFn = runtime->lookupFunction(0x2A6B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7074u; }
        if (ctx->pc != 0x2A7074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadSeSrc__6CSceneFi_0x2a6b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7074u; }
        if (ctx->pc != 0x2A7074u) { return; }
    }
    ctx->pc = 0x2A7074u;
label_2a7074:
    // 0x2a7074: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7074u;
    {
        const bool branch_taken_0x2a7074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7074u;
            // 0x2a7078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7074) {
            ctx->pc = 0x2A7084u;
            goto label_2a7084;
        }
    }
    ctx->pc = 0x2A707Cu;
    // 0x2a707c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A707Cu;
    {
        const bool branch_taken_0x2a707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A707Cu;
            // 0x2a7080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a707c) {
            ctx->pc = 0x2A70C4u;
            goto label_2a70c4;
        }
    }
    ctx->pc = 0x2A7084u;
label_2a7084:
    // 0x2a7084: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2a7084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a7088: 0xc0a9a84  jal         func_2A6A10
    ctx->pc = 0x2A7088u;
    SET_GPR_U32(ctx, 31, 0x2A7090u);
    ctx->pc = 0x2A708Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7088u;
            // 0x2a708c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6A10u;
    if (runtime->hasFunction(0x2A6A10u)) {
        auto targetFn = runtime->lookupFunction(0x2A6A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7090u; }
        if (ctx->pc != 0x2A7090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeSrcFile__6CSceneFPci_0x2a6a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7090u; }
        if (ctx->pc != 0x2A7090u) { return; }
    }
    ctx->pc = 0x2A7090u;
label_2a7090:
    // 0x2a7090: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2a7090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a7094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a7094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a709c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2A709Cu;
    SET_GPR_U32(ctx, 31, 0x2A70A4u);
    ctx->pc = 0x2A70A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A709Cu;
            // 0x2a70a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A70A4u; }
        if (ctx->pc != 0x2A70A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A70A4u; }
        if (ctx->pc != 0x2A70A4u) { return; }
    }
    ctx->pc = 0x2A70A4u;
label_2a70a4:
    // 0x2a70a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A70A4u;
    {
        const bool branch_taken_0x2a70a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A70A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A70A4u;
            // 0x2a70a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a70a4) {
            ctx->pc = 0x2A70C4u;
            goto label_2a70c4;
        }
    }
    ctx->pc = 0x2A70ACu;
    // 0x2a70ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a70acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a70b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a70b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a70b4: 0xc0a9cd0  jal         func_2A7340
    ctx->pc = 0x2A70B4u;
    SET_GPR_U32(ctx, 31, 0x2A70BCu);
    ctx->pc = 0x2A70B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A70B4u;
            // 0x2a70b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7340u;
    if (runtime->hasFunction(0x2A7340u)) {
        auto targetFn = runtime->lookupFunction(0x2A7340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A70BCu; }
        if (ctx->pc != 0x2A70BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeSrcPack__6CSceneFiPUi_0x2a7340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A70BCu; }
        if (ctx->pc != 0x2A70BCu) { return; }
    }
    ctx->pc = 0x2A70BCu;
label_2a70bc:
    // 0x2a70bc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2A70BCu;
    {
        const bool branch_taken_0x2a70bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a70bc) {
            ctx->pc = 0x2A70C4u;
            goto label_2a70c4;
        }
    }
    ctx->pc = 0x2A70C4u;
label_2a70c4:
    // 0x2a70c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a70c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a70c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a70c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a70cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a70ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a70d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a70d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a70d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A70D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A70D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A70D4u;
            // 0x2a70d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A70DCu;
}
