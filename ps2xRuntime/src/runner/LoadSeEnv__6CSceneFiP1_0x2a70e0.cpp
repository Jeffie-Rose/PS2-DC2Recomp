#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSeEnv__6CSceneFiP1
// Address: 0x2a70e0 - 0x2a716c
void LoadSeEnv__6CSceneFiP1_0x2a70e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSeEnv__6CSceneFiP1_0x2a70e0");
#endif

    switch (ctx->pc) {
        case 0x2a7104u: goto label_2a7104;
        case 0x2a7120u: goto label_2a7120;
        case 0x2a7134u: goto label_2a7134;
        case 0x2a714cu: goto label_2a714c;
        default: break;
    }

    ctx->pc = 0x2a70e0u;

    // 0x2a70e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a70e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a70e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a70e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a70e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a70e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a70ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a70ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a70f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a70f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a70f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a70f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a70f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a70f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a70fc: 0xc0a9ae8  jal         func_2A6BA0
    ctx->pc = 0x2A70FCu;
    SET_GPR_U32(ctx, 31, 0x2A7104u);
    ctx->pc = 0x2A7100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A70FCu;
            // 0x2a7100: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6BA0u;
    if (runtime->hasFunction(0x2A6BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7104u; }
        if (ctx->pc != 0x2A7104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadSeEnv__6CSceneFi_0x2a6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7104u; }
        if (ctx->pc != 0x2A7104u) { return; }
    }
    ctx->pc = 0x2A7104u;
label_2a7104:
    // 0x2a7104: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7104u;
    {
        const bool branch_taken_0x2a7104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7104u;
            // 0x2a7108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7104) {
            ctx->pc = 0x2A7114u;
            goto label_2a7114;
        }
    }
    ctx->pc = 0x2A710Cu;
    // 0x2a710c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A710Cu;
    {
        const bool branch_taken_0x2a710c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A710Cu;
            // 0x2a7110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a710c) {
            ctx->pc = 0x2A7154u;
            goto label_2a7154;
        }
    }
    ctx->pc = 0x2A7114u;
label_2a7114:
    // 0x2a7114: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2a7114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a7118: 0xc0a9a94  jal         func_2A6A50
    ctx->pc = 0x2A7118u;
    SET_GPR_U32(ctx, 31, 0x2A7120u);
    ctx->pc = 0x2A711Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7118u;
            // 0x2a711c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6A50u;
    if (runtime->hasFunction(0x2A6A50u)) {
        auto targetFn = runtime->lookupFunction(0x2A6A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7120u; }
        if (ctx->pc != 0x2A7120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeEnvFile__6CSceneFPci_0x2a6a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7120u; }
        if (ctx->pc != 0x2A7120u) { return; }
    }
    ctx->pc = 0x2A7120u;
label_2a7120:
    // 0x2a7120: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2a7120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a7124: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a7124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a712c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2A712Cu;
    SET_GPR_U32(ctx, 31, 0x2A7134u);
    ctx->pc = 0x2A7130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A712Cu;
            // 0x2a7130: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7134u; }
        if (ctx->pc != 0x2A7134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7134u; }
        if (ctx->pc != 0x2A7134u) { return; }
    }
    ctx->pc = 0x2A7134u;
label_2a7134:
    // 0x2a7134: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7134u;
    {
        const bool branch_taken_0x2a7134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7134u;
            // 0x2a7138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7134) {
            ctx->pc = 0x2A7154u;
            goto label_2a7154;
        }
    }
    ctx->pc = 0x2A713Cu;
    // 0x2a713c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a713cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7140: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a7140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7144: 0xc0a9d04  jal         func_2A7410
    ctx->pc = 0x2A7144u;
    SET_GPR_U32(ctx, 31, 0x2A714Cu);
    ctx->pc = 0x2A7148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7144u;
            // 0x2a7148: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7410u;
    if (runtime->hasFunction(0x2A7410u)) {
        auto targetFn = runtime->lookupFunction(0x2A7410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A714Cu; }
        if (ctx->pc != 0x2A714Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeEnvPack__6CSceneFiPUi_0x2a7410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A714Cu; }
        if (ctx->pc != 0x2A714Cu) { return; }
    }
    ctx->pc = 0x2A714Cu;
label_2a714c:
    // 0x2a714c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2A714Cu;
    {
        const bool branch_taken_0x2a714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a714c) {
            ctx->pc = 0x2A7154u;
            goto label_2a7154;
        }
    }
    ctx->pc = 0x2A7154u;
label_2a7154:
    // 0x2a7154: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a7154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7158: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a7158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a715c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a715cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a7160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7164: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7164u;
            // 0x2a7168: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A716Cu;
}
