#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatMonsterFloorInfo__FPci
// Address: 0x28f050 - 0x28f0b4
void CreatMonsterFloorInfo__FPci_0x28f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatMonsterFloorInfo__FPci_0x28f050");
#endif

    switch (ctx->pc) {
        case 0x28f078u: goto label_28f078;
        case 0x28f088u: goto label_28f088;
        case 0x28f098u: goto label_28f098;
        case 0x28f0a0u: goto label_28f0a0;
        default: break;
    }

    ctx->pc = 0x28f050u;

    // 0x28f050: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x28f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x28f054: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28f058: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28f058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28f05c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28f05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28f060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28f064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f068: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28f068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f06c: 0xaf829838  sw          $v0, -0x67C8($gp)
    ctx->pc = 0x28f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940728), GPR_U32(ctx, 2));
    // 0x28f070: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x28F070u;
    SET_GPR_U32(ctx, 31, 0x28F078u);
    ctx->pc = 0x28F074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F070u;
            // 0x28f074: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F078u; }
        if (ctx->pc != 0x28F078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F078u; }
        if (ctx->pc != 0x28F078u) { return; }
    }
    ctx->pc = 0x28F078u;
label_28f078:
    // 0x28f078: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x28f078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x28f07c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x28f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f080: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x28F080u;
    SET_GPR_U32(ctx, 31, 0x28F088u);
    ctx->pc = 0x28F084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F080u;
            // 0x28f084: 0x24a53fd0  addiu       $a1, $a1, 0x3FD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F088u; }
        if (ctx->pc != 0x28F088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F088u; }
        if (ctx->pc != 0x28F088u) { return; }
    }
    ctx->pc = 0x28F088u;
label_28f088:
    // 0x28f088: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28f088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f08c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28f08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f090: 0xc051a60  jal         func_146980
    ctx->pc = 0x28F090u;
    SET_GPR_U32(ctx, 31, 0x28F098u);
    ctx->pc = 0x28F094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F090u;
            // 0x28f094: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F098u; }
        if (ctx->pc != 0x28F098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F098u; }
        if (ctx->pc != 0x28F098u) { return; }
    }
    ctx->pc = 0x28F098u;
label_28f098:
    // 0x28f098: 0xc0519c8  jal         func_146720
    ctx->pc = 0x28F098u;
    SET_GPR_U32(ctx, 31, 0x28F0A0u);
    ctx->pc = 0x28F09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F098u;
            // 0x28f09c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F0A0u; }
        if (ctx->pc != 0x28F0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F0A0u; }
        if (ctx->pc != 0x28F0A0u) { return; }
    }
    ctx->pc = 0x28F0A0u;
label_28f0a0:
    // 0x28f0a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28f0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f0a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28f0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f0a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x28F0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F0ACu;
            // 0x28f0b0: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F0B4u;
}
