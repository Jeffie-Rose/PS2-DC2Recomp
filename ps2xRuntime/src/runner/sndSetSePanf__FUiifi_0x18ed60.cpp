#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetSePanf__FUiifi
// Address: 0x18ed60 - 0x18edd4
void sndSetSePanf__FUiifi_0x18ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetSePanf__FUiifi_0x18ed60");
#endif

    switch (ctx->pc) {
        case 0x18ed90u: goto label_18ed90;
        case 0x18edbcu: goto label_18edbc;
        default: break;
    }

    ctx->pc = 0x18ed60u;

    // 0x18ed60: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x18ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x18ed64: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18ed64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18ed68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ed68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ed6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18ed6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18ed70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ed70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ed74: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x18ed74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x18ed78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ed78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ed7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ed80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18ed80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18ed84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed88: 0xc0a248c  jal         func_289230
    ctx->pc = 0x18ED88u;
    SET_GPR_U32(ctx, 31, 0x18ED90u);
    ctx->pc = 0x18ED8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED88u;
            // 0x18ed8c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED90u; }
        if (ctx->pc != 0x18ED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED90u; }
        if (ctx->pc != 0x18ED90u) { return; }
    }
    ctx->pc = 0x18ED90u;
label_18ed90:
    // 0x18ed90: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x18ed90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x18ed94: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18ED94u;
    {
        const bool branch_taken_0x18ed94 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x18ED98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED94u;
            // 0x18ed98: 0x28c10080  slti        $at, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed94) {
            ctx->pc = 0x18EDA4u;
            goto label_18eda4;
        }
    }
    ctx->pc = 0x18ED9Cu;
    // 0x18ed9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ed9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eda0: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x18eda0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
label_18eda4:
    // 0x18eda4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18EDA4u;
    {
        const bool branch_taken_0x18eda4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EDA4u;
            // 0x18eda8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eda4) {
            ctx->pc = 0x18EDB0u;
            goto label_18edb0;
        }
    }
    ctx->pc = 0x18EDACu;
    // 0x18edac: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x18edacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_18edb0:
    // 0x18edb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18edb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18edb4: 0xc063b00  jal         func_18EC00
    ctx->pc = 0x18EDB4u;
    SET_GPR_U32(ctx, 31, 0x18EDBCu);
    ctx->pc = 0x18EDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EDB4u;
            // 0x18edb8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EC00u;
    if (runtime->hasFunction(0x18EC00u)) {
        auto targetFn = runtime->lookupFunction(0x18EC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EDBCu; }
        if (ctx->pc != 0x18EDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSePan__FUiiii_0x18ec00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EDBCu; }
        if (ctx->pc != 0x18EDBCu) { return; }
    }
    ctx->pc = 0x18EDBCu;
label_18edbc:
    // 0x18edbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18edbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18edc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18edc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18edc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18edc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18edc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18edc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18edcc: 0x3e00008  jr          $ra
    ctx->pc = 0x18EDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EDCCu;
            // 0x18edd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18EDD4u;
}
