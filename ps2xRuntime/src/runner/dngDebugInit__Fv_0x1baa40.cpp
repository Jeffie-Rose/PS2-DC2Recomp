#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dngDebugInit__Fv
// Address: 0x1baa40 - 0x1baaa8
void dngDebugInit__Fv_0x1baa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dngDebugInit__Fv_0x1baa40");
#endif

    switch (ctx->pc) {
        case 0x1baa88u: goto label_1baa88;
        case 0x1baa9cu: goto label_1baa9c;
        default: break;
    }

    ctx->pc = 0x1baa40u;

    // 0x1baa40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baa44: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1baa44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1baa48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1baa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1baa4c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baa4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baa50: 0xa420f1f0  sh          $zero, -0xE10($at)
    ctx->pc = 0x1baa50u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963696), (uint16_t)GPR_U32(ctx, 0));
    // 0x1baa54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1baa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1baa58: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baa5c: 0x2484f140  addiu       $a0, $a0, -0xEC0
    ctx->pc = 0x1baa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
    // 0x1baa60: 0xa420f1f2  sh          $zero, -0xE0E($at)
    ctx->pc = 0x1baa60u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963698), (uint16_t)GPR_U32(ctx, 0));
    // 0x1baa64: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baa68: 0xac22f200  sw          $v0, -0xE00($at)
    ctx->pc = 0x1baa68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963712), GPR_U32(ctx, 2));
    // 0x1baa6c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baa6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baa70: 0xac20f204  sw          $zero, -0xDFC($at)
    ctx->pc = 0x1baa70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963716), GPR_U32(ctx, 0));
    // 0x1baa74: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baa78: 0xac20f208  sw          $zero, -0xDF8($at)
    ctx->pc = 0x1baa78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963720), GPR_U32(ctx, 0));
    // 0x1baa7c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baa7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baa80: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x1BAA80u;
    SET_GPR_U32(ctx, 31, 0x1BAA88u);
    ctx->pc = 0x1BAA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA80u;
            // 0x1baa84: 0xac20f20c  sw          $zero, -0xDF4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294963724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA88u; }
        if (ctx->pc != 0x1BAA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA88u; }
        if (ctx->pc != 0x1BAA88u) { return; }
    }
    ctx->pc = 0x1BAA88u;
label_1baa88:
    // 0x1baa88: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1baa88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1baa8c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1baa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1baa90: 0x2484f140  addiu       $a0, $a0, -0xEC0
    ctx->pc = 0x1baa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
    // 0x1baa94: 0xc0b512c  jal         func_2D44B0
    ctx->pc = 0x1BAA94u;
    SET_GPR_U32(ctx, 31, 0x1BAA9Cu);
    ctx->pc = 0x1BAA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA94u;
            // 0x1baa98: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44B0u;
    if (runtime->hasFunction(0x2D44B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA9Cu; }
        if (ctx->pc != 0x1BAA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetClearance__5CFontFii_0x2d44b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAA9Cu; }
        if (ctx->pc != 0x1BAA9Cu) { return; }
    }
    ctx->pc = 0x1BAA9Cu;
label_1baa9c:
    // 0x1baa9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baa9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAA0u;
            // 0x1baaa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAAA8u;
}
