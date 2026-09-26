#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadFile__FPcPvPi
// Address: 0x149320 - 0x149368
void LoadFile__FPcPvPi_0x149320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadFile__FPcPvPi_0x149320");
#endif

    switch (ctx->pc) {
        case 0x149338u: goto label_149338;
        case 0x14934cu: goto label_14934c;
        case 0x149354u: goto label_149354;
        default: break;
    }

    ctx->pc = 0x149320u;

    // 0x149320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x149324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14932c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14932cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149330: 0xc0524dc  jal         func_149370
    ctx->pc = 0x149330u;
    SET_GPR_U32(ctx, 31, 0x149338u);
    ctx->pc = 0x149334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149330u;
            // 0x149334: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149338u; }
        if (ctx->pc != 0x149338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149338u; }
        if (ctx->pc != 0x149338u) { return; }
    }
    ctx->pc = 0x149338u;
label_149338:
    // 0x149338: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149338u;
    {
        const bool branch_taken_0x149338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149338u;
            // 0x14933c: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149338) {
            ctx->pc = 0x149354u;
            goto label_149354;
        }
    }
    ctx->pc = 0x149340u;
    // 0x149340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149344: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x149344u;
    SET_GPR_U32(ctx, 31, 0x14934Cu);
    ctx->pc = 0x149348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149344u;
            // 0x149348: 0x248427f0  addiu       $a0, $a0, 0x27F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14934Cu; }
        if (ctx->pc != 0x14934Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14934Cu; }
        if (ctx->pc != 0x14934Cu) { return; }
    }
    ctx->pc = 0x14934Cu;
label_14934c:
    // 0x14934c: 0xc0463ec  jal         func_118FB0
    ctx->pc = 0x14934Cu;
    SET_GPR_U32(ctx, 31, 0x149354u);
    ctx->pc = 0x149350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14934Cu;
            // 0x149350: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118FB0u;
    if (runtime->hasFunction(0x118FB0u)) {
        auto targetFn = runtime->lookupFunction(0x118FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149354u; }
        if (ctx->pc != 0x149354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x118fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149354u; }
        if (ctx->pc != 0x149354u) { return; }
    }
    ctx->pc = 0x149354u;
label_149354:
    // 0x149354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14935c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14935cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149360: 0x3e00008  jr          $ra
    ctx->pc = 0x149360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149360u;
            // 0x149364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149368u;
}
