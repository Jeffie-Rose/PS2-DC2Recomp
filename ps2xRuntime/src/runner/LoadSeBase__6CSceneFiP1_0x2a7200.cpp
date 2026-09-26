#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSeBase__6CSceneFiP1
// Address: 0x2a7200 - 0x2a728c
void LoadSeBase__6CSceneFiP1_0x2a7200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSeBase__6CSceneFiP1_0x2a7200");
#endif

    switch (ctx->pc) {
        case 0x2a7224u: goto label_2a7224;
        case 0x2a7240u: goto label_2a7240;
        case 0x2a7254u: goto label_2a7254;
        case 0x2a726cu: goto label_2a726c;
        default: break;
    }

    ctx->pc = 0x2a7200u;

    // 0x2a7200: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a7200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a7204: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a7204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a7208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a7208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a720c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a720cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a7210: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a7210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7214: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a7218: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a7218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a721c: 0xc0a9b00  jal         func_2A6C00
    ctx->pc = 0x2A721Cu;
    SET_GPR_U32(ctx, 31, 0x2A7224u);
    ctx->pc = 0x2A7220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A721Cu;
            // 0x2a7220: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6C00u;
    if (runtime->hasFunction(0x2A6C00u)) {
        auto targetFn = runtime->lookupFunction(0x2A6C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7224u; }
        if (ctx->pc != 0x2A7224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadSeBase__6CSceneFi_0x2a6c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7224u; }
        if (ctx->pc != 0x2A7224u) { return; }
    }
    ctx->pc = 0x2A7224u;
label_2a7224:
    // 0x2a7224: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7224u;
    {
        const bool branch_taken_0x2a7224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7224u;
            // 0x2a7228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7224) {
            ctx->pc = 0x2A7234u;
            goto label_2a7234;
        }
    }
    ctx->pc = 0x2A722Cu;
    // 0x2a722c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A722Cu;
    {
        const bool branch_taken_0x2a722c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A722Cu;
            // 0x2a7230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a722c) {
            ctx->pc = 0x2A7274u;
            goto label_2a7274;
        }
    }
    ctx->pc = 0x2A7234u;
label_2a7234:
    // 0x2a7234: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2a7234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a7238: 0xc0a9aa4  jal         func_2A6A90
    ctx->pc = 0x2A7238u;
    SET_GPR_U32(ctx, 31, 0x2A7240u);
    ctx->pc = 0x2A723Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7238u;
            // 0x2a723c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6A90u;
    if (runtime->hasFunction(0x2A6A90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7240u; }
        if (ctx->pc != 0x2A7240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeBaseFile__6CSceneFPci_0x2a6a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7240u; }
        if (ctx->pc != 0x2A7240u) { return; }
    }
    ctx->pc = 0x2A7240u;
label_2a7240:
    // 0x2a7240: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2a7240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a7244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a7244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a724c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2A724Cu;
    SET_GPR_U32(ctx, 31, 0x2A7254u);
    ctx->pc = 0x2A7250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A724Cu;
            // 0x2a7250: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7254u; }
        if (ctx->pc != 0x2A7254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7254u; }
        if (ctx->pc != 0x2A7254u) { return; }
    }
    ctx->pc = 0x2A7254u;
label_2a7254:
    // 0x2a7254: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7254u;
    {
        const bool branch_taken_0x2a7254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7254u;
            // 0x2a7258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7254) {
            ctx->pc = 0x2A7274u;
            goto label_2a7274;
        }
    }
    ctx->pc = 0x2A725Cu;
    // 0x2a725c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a725cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a7260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7264: 0xc0a9d58  jal         func_2A7560
    ctx->pc = 0x2A7264u;
    SET_GPR_U32(ctx, 31, 0x2A726Cu);
    ctx->pc = 0x2A7268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7264u;
            // 0x2a7268: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7560u;
    if (runtime->hasFunction(0x2A7560u)) {
        auto targetFn = runtime->lookupFunction(0x2A7560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A726Cu; }
        if (ctx->pc != 0x2A726Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeBasePack__6CSceneFiPUi_0x2a7560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A726Cu; }
        if (ctx->pc != 0x2A726Cu) { return; }
    }
    ctx->pc = 0x2A726Cu;
label_2a726c:
    // 0x2a726c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2A726Cu;
    {
        const bool branch_taken_0x2a726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a726c) {
            ctx->pc = 0x2A7274u;
            goto label_2a7274;
        }
    }
    ctx->pc = 0x2A7274u;
label_2a7274:
    // 0x2a7274: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a7274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a7278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a727c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a727cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a7280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7284: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7284u;
            // 0x2a7288: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A728Cu;
}
